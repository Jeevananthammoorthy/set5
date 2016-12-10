#include <stdio.h>
int power(int num);
int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	power(n);
	return 0;
}

int power(int num)
{
    if((num!=0)&&(num & (num-1))==0)
    printf("Answer=yes");
    else 
    printf("Answer=No");
}
