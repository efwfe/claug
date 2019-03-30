#include<stdio.h>
int main()
{
	int a[] = {5,15,34,54,14,2,52,72};
	int *p = &a[0], *q = &a[5];
	printf("%d \n",*(p+3));
    printf("%d \n",*(q-3));
	printf("%d \n",*p>*q);
}
