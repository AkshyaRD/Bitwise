//bitwise operators

#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("the output of bitwise operator AND is:%d \n", a&b);
	printf("the output of bitwise operator OR is:%d \n", a|b);
	printf("The output of XOR operator:%d \n", a^b);
	return 0;
}
