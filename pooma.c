#include <stdio.h>
#include<string.h>
int main(void) {

	char a[20];
	scanf("%s",a);
	int n,m,i,j;
	scanf("%d",&n);
	m=strlen(a);
	for(i=n;i<m;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
