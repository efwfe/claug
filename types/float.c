#include<stdio.h>
int main()
{
	double d;
	scanf("%lf",&d);

	long double ld;
	scanf("%Lf",&ld);
	printf("%lf,%Lf \n",d,ld);
}

