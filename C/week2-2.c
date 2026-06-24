#include <stdio.h>
int main()
{
    int num;
    printf("请输入一个数字\n");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("这个数%d是偶数\n",num);
    }
    else
        printf("这个数%d是奇数\n",num);
    return 0;
}