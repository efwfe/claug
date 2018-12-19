#include<stdio.h>
int main()
{
	int i,*p;
	i=1;
	p = &i;
	/* 通过修改指针位置的值修改i的值 */
	*p=4;
	printf("%p",i);
}
