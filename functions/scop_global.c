#include<stdio.h>
int g;
int main()
{
    int a,b;
    a = b = 10;
    g = a+b;
    printf("a=%D,b=%d,g=%d",a,b,g);
}

