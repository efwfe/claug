#include<stdio.h>
#define N 10
float matrax[N][N];
int row,col;
int main()
{
	for (row=0;row<N;row++)
	   for (col=0;col<N;col++)
		if (row==col)
		   matrax[row][col]=1.0;
		else
		   matrax[row][col]=0.0;
}
