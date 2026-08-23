#include <iostream>
#include<climits>
using namespace std;

int main() {
    int marks[5] = {99, 82, 77, -50, 250};
    int size = sizeof(marks) / sizeof(marks[0]);

    int highest = INT_MIN;
    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){
        highest = max(marks[i], highest);
        smallest = min(marks[i], smallest);
    }
    
    cout<< "Highest = " << highest << endl;
    cout<< "Smallest = " << smallest << endl;

return 0;
}