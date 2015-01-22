#include<iostream>
#include<cstdlib> //rand()
#include<algorithm> //sort()
#include<cstring>
using namespace std;

int* temp(){
    int a[10];
    for(int i=0; i<10;i++){
        a[i] = i;
    }
    return a;
}

void random_sequence(int a[], int n){
    for(int i=1; i < n; i++){
        a[i] = rand();
    }
    sort(a, a+n);

}

void sorted_random_sequence(){
    int rand_sum = 0;
    int n;
    cout<<"Enter range: ";
    cin>>n;
    for(int i=0; i<n; i++){
        rand_sum += rand();
        cout<< rand_sum << "  ";
    }
}

void subset_random_sorted_sequence(){
    for(int i = )


}


int main(){
  sorted_random_sequence();
}
