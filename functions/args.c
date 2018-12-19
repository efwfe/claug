#include<stdio.h>
int a = 20;

int main()
{
    int a=10;
    int b=20;
    int c=0;
    int sum(int, int);
    printf("value of a is %d \n",a);
    c = sum(a,b);
    printf("value of c is %d \n",c);

}

int sum(int a,int b)
{
    return a+b;
}
