#include<stdio.h>
#include<stdlib.h>
void insert(int n1, int *a, int l, int e)
{
int i;
printf(“Array after insertion is:\n”);
for(i=0;i<l-1;i++)
{
printf(“%d\n”,*(a+i));
}
printf(“%d\n”,e);
for(i=l-1;i<n1;i++)
{
printf(“%d\n”,*(a+i));
}
}

int main()
{
int *a,n1,i,l,e;
scanf(“%d”,&n1);
a=(int*)malloc(n1*sizeof(int));
for(i=0;i<n1;i++)
{
scanf(“%d”,a+i);
}
scanf(“%d”,&l);
if(l<=n1)
{
scanf(“%d”,&e);
insert(n1,a,l,e);
}
else
{
printf(“Invalid Input”);
}
return 0;
}
