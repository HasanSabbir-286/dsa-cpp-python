#include <iostream>
#include<climits>
using namespace std;

int main() {
    int marks[5] = {99, 98, 55, 70, 100};
    int size = sizeof(marks) / sizeof(marks[0]);

    int highest = INT_MIN;

    for(int i = 0; i < size; i++){
        if(marks[i] > highest){
            highest = marks[i];
        }
    }
    
    cout<< "Highest = " << highest << endl;

return 0;
}