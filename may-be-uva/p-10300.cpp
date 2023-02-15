#include<stdio.h>
int main()
{
	int n,f,i,j,s,a[22],b[22],c[22];
    while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		{
		    s=0;
		    scanf("%d",&f);
			for(j=0;j<f;j++)
			{
				scanf("%d%d%d",&a[j],&b[j],&c[j]);
				s+=a[j]*c[j];
			}
			printf("%d\n",s);
		}
	}
	return 0;
}
