//Write a program in C to display the first n terms of Fibonacci series
#include<stdio.h>
int main()
{
    int n,first=0,second=1,next;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Fibonacci series of %d terms: \n",n);
    for(int i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\t",next);
    }
    return 0;
}
