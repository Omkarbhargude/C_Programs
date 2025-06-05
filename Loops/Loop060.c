#include<stdio.h>

double Celcius(float fTemp)
{
    int celcius = 0.0f;
    celcius = (fTemp - 32) * 5 / 9;
    return celcius;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Temperature in Fehrenheit :\n");
    scanf("%f",&fValue);

    dRet = Celcius(fValue);

    printf("The temperature in celcius is :%f\n",dRet);

    return 0;
}