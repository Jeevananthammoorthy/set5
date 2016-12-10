#include <stdio.h>
int add(int arr1[],int arr2[]);

int main(void) {
	// your code goes here
	int arr1[]={12,10,25,14};
	int arr2[]={14,10,54,16};
	printf("sum of two array=%d",add(arr1,arr2));
	return 0;
}
int add(int arr1[],int arr2[])
{ int temp=0,i;
    for(i=0;i<4;i++)
    temp+=arr1[i];
    for(i=0;i<4;i++)
    temp+=arr2[i];
    return temp;
    
}

