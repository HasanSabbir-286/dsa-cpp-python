#include<iostream>
using namespace std;

int sum_up_to_n(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }

    return sum;
}

int main(){
    int n;
    cout<< "Enter n: ";
    cin >> n;
    cout << "Sum = " << sum_up_to_n(n);
    return 0;
}