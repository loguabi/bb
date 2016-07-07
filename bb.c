#include<stdio.h>
int main()
{
int a[20],b,c,d,g;
scanf("%d",&g);
for(c=0;c<g;c++)
{
scanf("%d",&a[c]);
}
for(c=0;c<g;c++)
{
if(a[c]==a[c+1])
{
c++;
}
else
{
printf("Single value %d",a[c]);
}
}
return 0;
}
