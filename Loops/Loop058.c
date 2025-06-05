#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    float Area = PI * fRadius * fRadius;
    float Area = PI * fRadius * fRadius;
    return Area;

}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter the Radius :\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The area of circle is : %f\n",dRet);

    return 0;
}