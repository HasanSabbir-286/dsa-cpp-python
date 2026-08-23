#include<iostream>
using namespace std;

void print_prime(int N){
    for(int i = 2; i <= N; i++){

        bool is_prime = true;

        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                is_prime = false;
                break;
            }
        }

        if(is_prime){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    if(n < 2){
        cout << "No Prime Numbers in this range.";
    }
    else{
        print_prime(n);
    }

    return 0;
}