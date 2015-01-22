#include<iostream>
using namespace std;

int percentile(int a,int b){
    int x = a % b;
    return x;
}

int main(){
    int a, b;
    while(cin>>a>>b){
        //cin>>a>>b;
        cout<<percentile(a, b);
    }


}
