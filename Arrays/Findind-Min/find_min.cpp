#include <iostream>
#include<climits>
using namespace std;

int main() {
    int marks[5] = {99, 98, 55, 70, 100};
    int size = sizeof(marks) / sizeof(marks[0]);

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){
        if(marks[i] < smallest){
            smallest = marks[i];
        }
    }
    
    cout<< "Smallest = " << smallest << endl;

return 0;
}