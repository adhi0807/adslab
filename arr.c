#include <stdio.h>
void main()
{
int a[10],b=0;
printf("enter the elements of arrays:\n");
for (int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for (int i=0;i<10;i++)
{
b=b+a[i];
}
printf("the sum of 10 numbers is %d",b);
}

