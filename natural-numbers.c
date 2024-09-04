#include <stdio.h>

int main(){
    int cnt = 0, num;

    printf("give me a number: ");
    scanf("%d", &num);
    
    while(cnt < num){
        printf("%d\n", num);
        cnt++;
    } 
 
    return 0;
}
