//program to print numbers in reverse order
#include<stdio.h>
int main()
{
	int ar[9]={34,56,54,32,67,89,90,32,24};
	printf("Numbers in reverse order is given below\n");
	for(int a=8;a>=0;a--)
	{
		printf("%d\n",ar[a]);
	}
}
