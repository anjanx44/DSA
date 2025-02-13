#include<stdio.h>
int main()
{
int a,f,i,j,k,l,test;
scanf("%d",&test);
for(l=1;l<=test;l++)
{
scanf("%d%d",&a,&f);
for(j=1;j<=f;j++)
{
for(i=1;i<=a;i++)
{
for(k=1;k<=i;k++)
printf("%d",i);
printf("\n");
}
for(i=a-1;i>=1;i--)
{
for(k=1;k<=i;k++)
printf("%d",i);
printf("\n");
}
if(j<f)
printf("\n");
}
if(l<test)
printf("\n");

}
return 0;
}
