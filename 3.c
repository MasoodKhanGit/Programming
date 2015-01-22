#include<stdio.h>
int main(){
    int n;

    scanf("%d", &n);
    int i, j;
    int count = 0;
    int *h = malloc(n);
    for(i = 0; i < n; i++){
        scanf("%d", &h[i]);
    }

    for(i = 0; i < n; i++){
        /*if(i < n/2){
            for(j = 0; j < n-1/2; j++){
            if(h[i] > h[j]){
                count++;
            }
        }
        }
        else if( i > n/2){
            for(j = n-1; j > n-1/2; j++){
            if(h[i] > h[j]){
                count++;
            }
        }
        }
        else{
            for(j = 0; j < n; j++){
            if(h[i] > h[j]){
                count++;
            }
        }
        }*/

        if(h[i+1] >= h[i]){
            for(j = 0; j < n; j++){
            if(h[i] > h[j] && h[j+1] >= h[j]){
                count++;
            }
            else{
                break;
            }
            }
        }
        else if(h[i+1] <= h[i]){
            for(j = n-1; j > n; j++){
            if(h[i] > h[j] && h[j+1] >= h[j]){
                count++;
            }
            else{
                break;
            }
            }
        }
        else{
            for(j = 0; j < n; j++){
            if(h[i] > h[j]){
                count++;
            }
        }





        printf("%d\n", count);
        count = 0;
    }
    }
    return 0;
    }


