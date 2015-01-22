#include<iostream>
using namespace std;
#define max(a, b) (a>b)? a: b

int knapsack_recursive(int wt[], int val[], int W, int n){
    if(n==0)
        return 0;
    else if(W==0)
        return 0;
    else if(wt[n-1] <= W){
        return max( (val[n-1] + knapsack_recursive(wt, val, W-wt[n-1], n-1)),
                              knapsack_recursive(wt, val, W, n-1));
    }

}


int knapsack(int wt[], int val[], int W, int n){
    int ks[n+1][W+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            if(i==0 || j==0)
                ks[i][j] = 0;
            else if(wt[i-1] <= j){
                    ///one is you are including the value and and substrating the weight, the is excluding the value

                ks[i][j] = max( val[i-1] + ks[i-1][j-wt[i-1]], ks[i-1][j] );
            }
            else{
                ks[i][j] = ks[i-1][j];
            }
        }
    }
    return ks[n][W];
}


int main(){
    int wt[] = {10, 20, 30};
    int val[] = { 60, 100, 120};
    int total_W = 50;
    int n = sizeof(wt)/sizeof(wt[0]);
    ///int result = knapsack_recursive(wt, val, total_W, n);
    int result = knapsack(wt, val, total_W, n);
    cout<<result<<"\n";
    cout<<"pyadi";
    return 0;
}
