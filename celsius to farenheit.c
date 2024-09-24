#include<stdio.h>
int main()
{
        double celsius, farenheit ;
       printf("enter the temperature in celsius");
       scanf("%lf", &celsius);

       farenheit =1.8*celsius +32;
       printf("temperature in farenheit is %lf\n",farenheit );
       return 0;
}
