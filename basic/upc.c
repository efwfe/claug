#include<stdio.h>
main()
{
	int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,
		first_sum,second_sum,total;
	printf("Enter the first digit:");
	scanf("%1d", &d);
	printf("Enter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
        /* printf(i1,i2,i3,i4,i5);*/
	printf("%d",(i1+i2+i3+i4+i5));	
}
