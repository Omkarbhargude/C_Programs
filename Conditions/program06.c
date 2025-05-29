#include<stdio.h>

void DisplayClass(float fPerc)
{
    if((fPerc < 0.0f) || (fPerc > 100.0f))
    {
        printf("Invalid input \n");
    }

    if((fPerc >= 0.0f) && (fPerc <= 35.0f))
    {
        printf("---Your fail--- \n");
    }
    else if((fPerc >= 35.0f) && (fPerc <= 50.0f))
    {
        printf("---PASS CLASS---\n");
    }
    else if((fPerc >= 50.0f) && (fPerc <= 60.0f))
    {
        printf("---SECOND CLASS---\n");
    }
    else if ((fPerc >= 60.0f) && (fPerc <= 70.0f))
    {
        printf("---FIRST CLASS---\n");
    }
    else if((fPerc >= 70.0f) && (fPerc <= 100.0f))
    {
        printf("---FIRST CLASS WITH DISTINCTION---\n");
    }
}
int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage :\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);



    return 0;
}