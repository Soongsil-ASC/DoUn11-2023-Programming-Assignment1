#include <stdio.h>

long toBin(int);

int main()
{
	long bno;
	int dno;
	printf("====================================================\n");
	printf("\tFunction : convert decimal to binary\n");
	printf("====================================================\n");    
	printf("Decimal Number : ");
	scanf("%d", &dno);
	bno = toBin(dno);
	printf("The Binary value is : %ld\n\n",bno);
	return 0;
}

long toBin(int dno)
{
	int digit = 1;
	long ret = 0;

	while (dno)
	{
		ret += (dno & 1) * digit;
		digit *= 10;
		dno >>= 1;
	}

	return ret;
}
