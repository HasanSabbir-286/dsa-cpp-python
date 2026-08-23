#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    } 
    
    return n * factorial(n - 1);
}

int main(){
    int n, r;
    cout<<"Enter the  value of n: ";
    cin>> n;

    cout<<"Enter the  value of r: ";
    cin>> r;

    if (n < 0 or r < 0 or r > n){
        cout<< "Invalid input";
    } else{
        cout << "nCr = " << factorial(n) / (factorial(r) * factorial(n-r));
    }
    
    return 0;
}

