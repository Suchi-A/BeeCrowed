#include<stdio.h>
int main()
{
    int A;
    int B;
    float C;
    scanf("%d %d",&A,&B);
    printf("NUMBER = %d\n",A);
    scanf("%f",&C);
    float X=B*C;
    printf("SALARY = U$ %.2f\n",X);
    return 0;
}