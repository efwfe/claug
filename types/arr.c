#include<stdio.h>
int main()
{
    int a[10] = {1,2,3,4},i;
    for(i=0;i<(sizeof(a)/sizeof(a[0]));i++)
    	printf("%d",a[i]);
}
