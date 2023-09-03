//Write a program in C to check whether a number is a palindrome or not
#include<stdio.h>
int main()
{
    int n,rem,rev=0,original;
    printf("Enter a integer number: ");
    scanf("%d",&n);
    original=n;
    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(rev==original){
        printf("%d is a palindrome number",original);
    }
    else
        printf("%d is not a palindrome number",original);
    return 0;

}
