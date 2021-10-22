#include<stdio.h>
#include<math.h>
void prime(int);
void square(int);
void cube(int);
void fact(int);
void pali(int);
void neon(int);
void fibi(int);
void arm(int);
void dis(int);
void hars(int);
int main(){
    int val,x;
    printf("** CHOOSE A OPRATION YOU WANT TO DO **\n");
    puts("1.find if the number is Prime Number\n");
    puts("2.find if the number is square number\n");
    puts("3.find if the number is cube number\n");
    puts("4.find the factorial of the number\n");
    puts("5.find if the number is palindrome number\n");
    puts("6.find if the number is neon number\n");
    puts("7.print Fibinacci series till that number\n");
    puts("8.find if the number is Armstrong number\n");
    puts("9.find if the number is Disarium number\n");
    puts("10.find if the number is Harshad number\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS PRIME NUMBER");
        break;
        case 2:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS SQUARE NUMBER");
        break;
        case 3:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS CUBE NUMBER");
        break;
        case 4:printf("YOU HAVE SELECTED THE OPERATION TO FIND THE FACTORIAL OF THE NUMBER");
        break;
        case 5:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS PALINDROME");
        break;
        case 6:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS NEON NUMBER");
        break;
        case 7:printf("YOU HAVE SELECTED THE OPERATION TO PRINT THE FIBINACCI SERIES TILL THE ENTERED NUMBER");
        break;
        case 8:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS ARMSTRONG NUMBER");
        break;
        case 9:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS DISARIUM NUMBER");
        break;
        case 10:printf("YOU HAVE SELECTED THE OPERATION TO CHEEK WHETHER THE NUMBER IS HARSHAD NUMBER");
        break;
        default :{printf("WE WRE SORRY TO SAY THIS, YOU HAVE ENTERD THE WRONG NUMBER");
        return 0;
        }
        break;
    }
    printf("\nPlease, Enter the Number on which you want to do the operation \n");
    scanf("%d",&val);
    switch(x)
    {
        case 1:prime(val);
        break;
       case 2:square(val);
        break;
        case 3:cube(val);
        break;
        case 4:fact(val);
        break;
        case 5:pali(val);
        break;
        case 6:neon(val);
        break;
        case 7:fibi(val);
        break;
        case 8:arm(val);
        break;
        case 9:dis(val);
        break;
        case 10:hars(val);
        break;
        default: printf("invalid input");
        break;
    }
    return 0;
}
void prime(int a)
{
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count==2)
    printf("%d is a prime number",a);
    else
    printf("%d is not a prime number",a);

}
void square(int b){
   int squ;
    for (int i=1;i<b;i++)
    {
        squ=i*i;
        if(squ==b){
        printf("%d is a squre number ",b);
        return ;
    }
    }
    printf("%d is not a squre number",b);
    return ;
}
void fact(int d){
    int fact=1;
    for(int i=1;i<=d;i++)
    fact=fact*i;
    printf("factorial of the number is %d",fact);
}
void cube(int c){
    int cube;
    for (int i=1;i<c;i++)
    {
        cube=i*i*i;
        if(cube==c){
        printf("%d is a cube number ",c);
        return ;
    }
    }
    printf("%d is not a cube number",c);
    return ;
}
void pali(int e){
    int temp,rem,sum=0;
    temp=e;
    while(e!=0){
    rem=e%10;
    sum=sum*10+rem;
    e=e/10;
    }
    if(temp==sum)
     printf("%d is palindrome number",temp);
    else
     printf("%d is not a palidrome number",temp);
 
}
void neon(int f){
    int sq,rem,sum=0;
    sq=f*f;
    while(sq!=0){
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==f)
    printf("%d is a neon numner",f);
    else
    printf("%d is not a neon number",f);

}
void fibi(int g){
    int a,b=0,c=1;
    while(g>0)
    {
        printf("%d\t",b);
        a=b+c;
        b=c;
        c=a;
        if(b>g)
        break;
    }
}
void arm(int h){
    int rem,sum=0,c,temp;
    temp=h;
    while(h!=0)
    {
        rem=h%10;
        c=rem*rem*rem;
        sum=sum+c;
        h=h/10;
    }
    if(temp==sum)
    printf("%d is armstrong number",temp);
    else
    printf("%d is not a arm strong number",temp);
}
void dis(int n){
    int j,rem,sum=0,temp,c=1,p=1;
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    n=temp;
    temp=sum;
    sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        for(j=1;j<=c;j++)
        {
            p=p*rem;
        }
    sum=sum+p;
    temp=temp/10;
    c++;
    p=1;
    }
    if(sum==n)
    printf("%d is a Disarium number",n);
    else
    printf("%d is not a Disarium number",n);
}

void hars(int y){
    int temp,rem,sum=0;
    temp=y;
    while(y!=0)
    {
        rem=y%10;
        sum=sum+rem;
        y=y/10;
    }
    if(temp%sum==0)
    printf("%d is a Harshad number",temp);
    else
    printf("%d is not a Harshad number",temp);

}
