#include<stdio.h>
#include<stdlib.h>


int main()
{
	
	float a;
	printf("flaot : %d\n",sizeof(a));
	double d;
	scanf("%lf",&d);

	long double ld;
	scanf("%Lf",&ld);
	printf("%lf,%Lf \n",d,ld);
}

