
#include<stdio.h>
#include<string.h>
int main()
{
int n,s=0,d;
int j=0,a[100];
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
d=n%10;
if(d%2!=0)
{
 a[j]=d;
 j++;         
}
n=n/10;
}
for(j=j-1;j>=0;j--)
{ 
    printf("%d",a[j]);
}
return 0;
}

