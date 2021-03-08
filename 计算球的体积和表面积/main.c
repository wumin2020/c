#include <stdio.h>
#include <stdlib.h>
//#define PI 3.1415926
int main()
{
    const double PI=3.1415926;
    printf("请输入球的半径：");
    double r,s,v;
    scanf("%lf",&r);
    s=4*PI*r;
    v=4*PI*r*r/3;
    printf("球的表面积是 ：%lf\n"
           "球的体积是 ：%lf\n\n",s,v);
    printf("强制转化为整数形式：\n");
    printf("球的表面积是 ：%d\n"
           "球的体积是 ：%d\n",(int)s,(int)v);
    return 0;
}
