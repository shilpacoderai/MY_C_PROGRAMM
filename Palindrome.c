#include <stdio.h>

int main() {
int num, original, rem, rev=0;
    printf("enter a number:");
    scanf("%d", &num);
    original=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(original==rev){
        printf("palindrome ");
    }
    else{
        printf("not palindrome ");
    }

    return 0;
}
