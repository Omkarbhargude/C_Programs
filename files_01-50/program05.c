#include<stdio.h>

float CalculatePercentage(int iTotalMarks,int iObtainedMarks)
{
    float fPerc = 0.0f;
    fPerc = ((float)iObtainedMarks / (float)iTotalMarks) * 100;
    return fPerc;
}
int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("Enter the total marks :\n");
    scanf("%d",&iTotal);

    printf("Enter the obtained marks :\n");
    scanf("%d",&iObtained);

    fPercentage = CalculatePercentage(iTotal,iObtained);

    printf("The percentage is :%f\n",fPercentage);



    return 0;

}