#include <stdio.h>

int factorial(int n);

int main(){
    int num;

    printf("enter an integer number: ");
    scanf("%d", &num);

    int value = factorial(num);
    printf("factorial of your number is: %d\n", value);

    return 0;
}

int factorial(int n){
    if(n == 0){
       return 1;
    }else if(n > 0){
        int fact = n * factorial(n - 1);
        return fact;
    }
}
