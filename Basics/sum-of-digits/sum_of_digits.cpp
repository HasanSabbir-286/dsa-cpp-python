#include<iostream>
using namespace std;

int sum_of_digits(int N){
    int sum = 0;
    while (N != 0){
        int last_digit = N % 10;
        sum += last_digit;
        N /= 10; 
    }

    return sum;
}

int main(){
    int n;
    cout<< "Enter a Number: ";
    cin>> n; 
    cout<< sum_of_digits(n);
    return 0;
}