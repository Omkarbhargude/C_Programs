#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float Area = 0.0f;
    Area = fWidth * fHeight;
    return Area;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter the Width of rectangle :\n");
    scanf("%f",&fValue1);

    printf("Enter the height of rectangle :\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("The area of Rectangle is : %f\n",dRet);

    return 0;
}