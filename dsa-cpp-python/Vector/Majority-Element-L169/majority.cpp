#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> &list){
    int initial = list[0]; int count = 0;
    for(int el : list){
        if(count == 0){
            initial = el; count = 1;
        } else if(initial == el){
            count++;
        } else{
            count--;
        }
    }
    return initial;
}

int main(){
    vector<int> list = {2,2,1,1,1,1};
    cout<< majority(list);

    return 0;
}