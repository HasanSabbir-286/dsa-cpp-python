#include<iostream>
using namespace std;

int binTOdec(int n){
    int power = 0;
    int decNum = 0;

    while(n > 0){
        int rem = n % 10;

        if(rem > 1){
            cout << "Invalid Binary Number.";
            return -1;
        }

        decNum += rem * (1 << power);

        n /= 10;
        power++;
    }

    return decNum;
}

int main(){
    int n;

    cout << "Enter a binary number: ";
    cin >> n;

    int result = binTOdec(n);

    if(result != -1){
        cout << "Decimal = " << result;
    }

    return 0;
}