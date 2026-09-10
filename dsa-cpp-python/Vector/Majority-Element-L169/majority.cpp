#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> &list){
    int candidate = list[0]; int count = 0;
    for(int el : list){
        if(count == 0){
            candidate = el; count = 1;
        } else if(candidate == el){
            count++;
        } else{
            count--;
        }
    }

    count = 0;

    for (int el : list) {
        if (el == candidate) {
            count++;
        }
    }

    if(count > list.size()/2){
        return candidate;
    }

    return -1;
}

int main(){
    vector<int> list = {1, 2, 5, 10, 15, 2, 2, 2, 2};
    cout<< majority(list);

    return 0;
}