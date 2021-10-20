#include<stdio.h>
#include<stdlib.h>
void delete(int n,int *a,int l);
int main()
{
int *a,n,i,l;
scanf(“%d”,&n);
a=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
scanf(“%d”,(a+i));
}
scanf(“%d”,&l);
delete(n,a,l);
return 0;
}
void delete(int n,int *a,int l)
{
int i,j;
if(l<=n)
{
for(i=l-1;i<n;i++)
{
j=i+1;
*(a+i)=*(a+j);
}
printf(“Array after deletion is:\n”);
for(i=0;i<n-1;i++)
{
printf(“%d\n”,(*(a+i)));
}
}
else
{
printf(“Invalid Input”);
}
}


Progr
