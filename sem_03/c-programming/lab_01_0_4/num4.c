/*
 * Бутылка воды стоит 45 копеек. Пустые бутылки сдаются по 20 копеек, и на полученные деньги 
 * опять покупается вода. Какое наибольшее количество бутылок воды можно купить, имея некоторую 
 * сумму денег S копеек.
*/

#include<stdio.h>

int main(void) 
{
  int s;
  printf("Введите сумму денег: ");
  if (scanf("%d", &s) != 1)
  {
    printf("Некорректный ввод\n");
    return 0;
  }

  if (s < 0) 
  {
    printf("Некорректный ввод\n");
  }
  else
  {
    s = s / 25 - 1;
    if (s < 0) s = 0;
    printf("Вы можете купить %d бутылок", s);
  }
  return 0;
}
