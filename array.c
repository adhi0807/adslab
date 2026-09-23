#include<stdio.h>
void main()
{
int ar[50],size,i,pos,ele;
printf("enter the size");
scanf("%d",&size);
printf("enter the elements:");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<size;i++)
{
printf("%d",ar[i]);
}
printf("enter the element and the positon");
scanf("%d%d",&ele,&pos);
if(pos<=0||pos>size+1)
{
printf("invalid position");
}
else
{
for(i=size-1;i>=pos-1;i--)
{
ar[i+1]=ar[i];
}
ar[pos-1]=ele;
size++;
}
printf("element after insertion ");
for(i=0;i<size;i++)
{
printf("%d",ar[i]);
}
}
		
