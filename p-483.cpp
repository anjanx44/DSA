#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[10000],c;
	while(scanf("%s",a)!=EOF)
	{
		c=getchar();
		for(i=strlen(a)-1;i>=0;i--)
		{
			printf("%c",a[i]);
		}
		putchar(c);
	}
	return 0;
}