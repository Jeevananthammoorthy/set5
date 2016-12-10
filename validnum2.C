#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	printf("%d\n",n);
	if((n>=1)&&(n<=9))
	    printf("Enter number is valid one");
	else
	printf(" enter number  in range 1 to 9");
	return 0;
}

