#include <stdio.h>
// factorial 4
// 4 * factorial(4-1)
int factorial(int n){
    
    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    
}
int main(){
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,factorial(n));
    return 0;
}