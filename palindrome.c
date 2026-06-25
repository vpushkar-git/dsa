#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) 
{
    if(x<0)
    {
        return false;
    }
    int temp=x;
    int rev=0;
    while(temp>0)
    {
        int rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    printf("%s\n", isPalindrome(x) ? "true" : "false");
    return 0;
}