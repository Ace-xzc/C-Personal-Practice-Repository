#include <stdio.h>
int main()
{
    int age=18,stu_num=202601;
    double height=1.75;
    float weight =55.5;
    char gender []="男";
    char grade ='A';
    printf ("我的基本信息:\n");
    printf("年龄:%d\t学号:%d\n",age,stu_num);
    //第一个%d对应整数age。类似C++:cout<<"年龄:"<<age
    printf("身高:%.2lf\t体重:%.1f\n",height,weight);
    printf("性别:%s\t等级:%c\n",gender,grade);
    return 0;
}