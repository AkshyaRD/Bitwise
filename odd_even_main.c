#include <stdio.h>
#include <stdlib.h>



int main()
 {
	int a, b;
	printf("Enter a number:");
	scanf("%d", &a);
	if ((a&1)==0)
	{
		printf("the no. is even");
	}
	else 
	{
		printf("the no. is odd");
	}
	return 0;
}
