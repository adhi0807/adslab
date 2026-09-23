#include<stdio.h>
void main()
{
int ar[50],size,i,pos,ele;
printf("enter the size");
scanf("%d",&size);
printf("enter the elements:\n");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<size;i++)
{
printf("%d",ar[i]);
}
printf("enter the position of elemnt to be deleted\n");
scanf("%d",&pos);
if(pos<=0||pos>size+1)
{
printf("invalid option");
}
else
{
for(i=pos-1;i<=size-1;i++)
{
ar[i]=ar[i+1];
}
size--;
}
printf("element after the deletion");
for(i=0;i<size;i++)
{
printf("%d",ar[i]);
}
}
