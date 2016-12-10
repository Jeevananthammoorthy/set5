#include <stdio.h>

int main(void) {
	char a[20],b[20],i,j,count=0;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0,j=0;a[i]!='\0';i++,j++)
	{
	    if(a[i]==b[j])
	    count++;
	}
	if((count==i)&&(count==j))
	printf("Two String are same");
	else
	printf("Two strings are not same");
	return 0;
}

