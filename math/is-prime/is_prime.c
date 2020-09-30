#include<stdio.h>
int main()
{
    int x,i;

    printf("Enter the number");

    
    
    scanf("%d",&x);

    for(i=2;i<=x-1;i++)
        
        if(x%i==0)
            break;
        if(i==x) //that means i value becme eqaul to x thus prime no bcoz every no is divided by itself
            printf("%d is a prime number",x);
        else
            printf("%d is not a prime number",x);
        return 0;

}

//  I am writing this program in Python I am applying different logic you can understand it's short
num = int(input(""enter a number))
lim = int(num/2)+1
for i in range(2,lim):
     rem = num%i
     if rem == 0:
          print(num,"is not a prime number")
              break
 else:
     print(num, "is a prime number")
