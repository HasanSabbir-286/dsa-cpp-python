#include<iostream>
using namespace std;

bool check_prime(int N){
    for(int i = 2; i * i <= N; i++){
        if (N % i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;
    cout<< "Enter the value of N: ";
    cin>> n;
    if (n < 2){
        cout<< "Not Prime Number.";
    } else if(check_prime(n)){
        cout<< "Prime Number.";
    } else{
        cout<< "Not Prime Number.";
    }

    return 0;
}