#include<stdio.h>
int main()
{
        double celsius , farenheit ;
        printf("enter the value of farenheit");
        scanf("%lf", &farenheit );
        celsius  =((farenheit -32)*5)/9;
        printf("value is %lf\n", celsius);
        return 0;



}
