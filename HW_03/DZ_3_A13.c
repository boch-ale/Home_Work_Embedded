//   Домашнее задание №5 к лекции 3 Типы данных С 

#include <stdio.h>

int main()  // Ввести с клавиатуры целое положительное трехзначное число,вывести на экран результат от умножения всех трёх чисел между собой
{
	int A = 0;	int B = 0; 
	
// Введите трезначное целое положительное число
    scanf("%d", &A);
    
    B = A%10;                     // Нахожу последнее число в трехзначном, как остаток от деления на десять
    B *= (A/10)%10;              // Нахожу второе число, как остаток от деления и перемножаю их с третьим
    B *= (A/100)%10;            // Нахожу первое число и перемножаю с двумя предыдущими
		
    printf("%d\n", B );
		

	return 0;
}
