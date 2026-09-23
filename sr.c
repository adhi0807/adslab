#include<stdio.h>
int main()
{
int ar[50],s,i,pos=0,ele;
printf("enter the size");
scanf("%d",&s);
printf("enter the elements to be searched:\n");
for(i=0;i<s;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<s;i++)
{
printf("%d",ar[i]);
}
printf("enter the element to be searched");
scanf("%d",&ele);
for(i=0;i<s;i++)
{
if(ar[i]==ele)
{
pos++;
break;
}
}
if(pos==1)
{
printf("element found at %d",(i+1));
}
else
{
printf("element not found");
}
}

