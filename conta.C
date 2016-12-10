#include <stdio.h>
#include<string.h>

int main(void) {
    char a[100],b[100],i,n,j;
    scanf("%s",a);
    scanf("%s",b);
    n=strlen(a);
    for(i=n,j=0;b[j]!='\0';i++,j++)
    a[i]=b[j];
    printf("After concatenation=%s",a);
	return 0;
}

