#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    int first = 0;
    int second = 1;
    int next;

    for(int i = 2; i <= n; i++){
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}

int main(){
    int n;
    cout<< "Enter the value of N: ";
    cin>> n;
    if(n < 0){
        cout<< "Invalid Input";
    } else{
        cout<< fibonacci(n);
    }
}