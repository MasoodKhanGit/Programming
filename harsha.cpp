#include<stdio.h>

int main(){
    int a, b, i;
    int temp;
    int flag = 1;
    int sum = 0;
    int count = 0;
    scanf("%d %d", &a, &b);
    for(i = 1; i <= a; i++){
        scanf("%d", &temp);
        sum += temp;
        if(sum >= b && flag){
            count=i;
            flag = 0;
        }
    }
    printf("%d\n", count);
    return 0;
}
