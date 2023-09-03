//Write a c program to check whether a given number is a perfect number or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        printf("%d is a perfect number.",n);
    else
        printf("%d is not a perfect number.",n);
    return 0;
}
