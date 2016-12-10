#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],n,i,c,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
	    if(a[i]>a[j])
	    {
	        c=a[j];
	        a[j]=a[i];
	        a[i]=c;
	    }
	}
	printf("%d is the smallest number in an array\n",a[0]);
	printf("%d is the largest numebr in an array",a[n-1]);
	return 0;
}

