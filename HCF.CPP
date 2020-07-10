#include<conio.h>
#include<stdio.h>
int main()
{
 int a,b,c[15],i,j=0;
 printf("Enter two no:");
 scanf("%d %d",&a,&b);
 for(i=1;i<=a;i++)
 {
  if((a%i==0)&&(b%i==0))
  {
   c[j]=i;
   j++;
   }}
printf("HCF= %d",c[j-1]);
return 0;
}
