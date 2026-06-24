#include <stdio.h>
int main()
{
    const double PI =3.14159;
    //预定义常变量，c与c++一致
    const int MAX_AGE = 100;
    #define CLASS_NAME  "C语言入门班"
    //预定义符号变量，c与c++一致
    #define STU_COUN 45
    printf("常量展示:\n");
    printf("const定义的圆周率:%lf\t最大年龄限制:%d\n",PI,MAX_AGE);
    printf("#define定义的班级名称:%s\t班级人数:%d\n",CLASS_NAME,STU_COUN);
    return 0;
}