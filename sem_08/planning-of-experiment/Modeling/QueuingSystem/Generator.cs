﻿using System.Collections.Generic;
using Modeling.Distributions;

namespace Modeling.QueuingSystem
{
    public class Generator : IBlock
    {
        private readonly IDistribution _distribution;

        private IList<Operator> _recievers;

        private int _count;

        public int Count
        {
            get => _count;
        }

        private double _next;

        public double Next
        {
            get => _next;
            set => _next = value > 0 ? value : 0;
        }

        private int _generatorType;

        public Generator(IDistribution distribution, IList<Operator> recievers, int count, int generatorType)
        {
            _distribution = distribution;
            _recievers = recievers;
            _count = count;
            _next = 0;
            _generatorType = generatorType;
        }

        public Operator GenerateRequest(double currentTime)
        {
            _count--;

            foreach (var r in _recievers)
            {
                if (r.ResieveRequest(currentTime, _generatorType))
                {
                    return r;
                }
            }

            return null;
        }

        public double Delay() => _distribution.Generate();
    }
}
