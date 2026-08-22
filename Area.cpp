#include<stdio.h>
int main()
{
    float A;
    float B;
    float C;
    scanf("%f %f %f",&A,&B,&C);
    float V=0.5*(A*C);
    printf("TRIANGULO: %.3f\n",V);
    float W=3.14159*(C*C);
    printf("CIRCULO: %.3f\n",W);
    float X=C*(A+B)*0.5;
    printf("TRAPEZIO: %.3f\n",X);
    float Y=B*B;
    printf("QUADRADO: %.3f\n",Y);
    float Z=A*B;
    printf("RETANGULO: %.3f\n",Z);
    return 0;
}