#include <stdio.h>
#include <stdlib.h>
//#define PI 3.1415926
int main()
{
    const double PI=3.1415926;
    printf("��������İ뾶��");
    double r,s,v;
    scanf("%lf",&r);
    s=4*PI*r;
    v=4*PI*r*r/3;
    printf("��ı������ ��%lf\n"
           "�������� ��%lf\n\n",s,v);
    printf("ǿ��ת��Ϊ������ʽ��\n");
    printf("��ı������ ��%d\n"
           "�������� ��%d\n",(int)s,(int)v);
    return 0;
}
