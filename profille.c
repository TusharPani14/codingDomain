#include<stdio.h>

int main()
{
     char str[50];
     long long int n;
     printf("ENTER YOUR NAME: ");
     gets(str);
     printf("ENTER YOUR ROLL NO.: ");
     scanf("%lld",&n);
     printf("NAME: %s\n",str);
     printf("ROLL NO.: %lld\n",n);
     return 0;
}