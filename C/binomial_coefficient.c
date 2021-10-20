#include<stdio.h>
int fact(int);
int NCR(int,int);
int main()
{
    int c,n,r;
    printf("enter the n and r value /n");
    scanf("%d %d",&n,&r);
    if(r>n)
    {
    printf("enter the value n>r");
    return 0;
    }
    c=NCR(n,r);
    printf("the value of %dC%d is %d",n,r,c);
    return 0;
}
int NCR(int n,int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    printf("the value of %dC%d is %d",n,r,c);
    return c;
}
int fact(int x)
{
    int f=1;
    while(x>1)
    {
        f=f*x;
        x=x-1;
    }
    return f;
}
