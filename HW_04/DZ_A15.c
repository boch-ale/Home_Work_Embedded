
#include <stdio.h>

int main()  // Ввести координаты точек X1 Y1 и  X2 Y2, найти коэффициенты К и В к уравнению прямой y=kx+b
{    

    int X1 = 0, Y1 = 0, X2 = 0, Y2 =0; float k, b; 	

    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2 );  // Введите координаты точек через пробел

    k = 1.*(Y1-Y2)/(X1-X2);
    b = Y2 - k*X2;
    
    printf("%.2f %.2f", k, b);
 
     return 0;
}