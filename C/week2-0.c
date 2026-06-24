#include <stdio.h>
int main()
{
    float chinese, math ,english;
    printf ("请输入您的语文成绩:\n");
    scanf ("%f",&chinese);
    printf ("请输入您的数学成绩:\n");
    scanf ("%f",&math);
    //输入"%f"是取值的类型，&math是放在math这里
    printf ("请输入您的英语成绩:\n");
    scanf ("%f",&english);
    float sum=chinese+math+english;
    printf("您的成绩总分是:%.1f\n",sum);
    //%f保留六位，%.2f保留2位
    float average=sum/3;
    printf("您的平均分为:%.1f\n",average);
    return 0;
}