#include<stdio.h>
int main()
{
	char ch;
	do{
	scanf("%c",&ch);
	}
	while (ch!='\n');
	/* getchar  */
	while((ch=getchar())!='\n')
	;
	return 1;
}
