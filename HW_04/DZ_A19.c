
#include <stdio.h>

int main()  // Определить существование треугольника. 
            // Ввести три стороны, если хотябы одна из сторон больше или равна сумме двух других, треугольника не существует 
{    
    int A = 0, B = 0, C =0;	

    scanf("%d%d%d", &A, &B, &C );  // Введите три числа через пробел
        
    (A+B>C && A+C>B && B+C>A) ? printf("YES") : printf("NO");

    return 0;
}
