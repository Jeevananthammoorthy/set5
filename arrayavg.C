#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10],n,i,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
         c+=a[i];
         c=c/n;
         printf("\n%d",c);
	return 0;
}

