#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &list, int size, int target){
    vector<int> ans;
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int pairSum = list[start] + list[end];

        if (pairSum > target) {
            end--;
        }
        else if (pairSum < target) {
            start++;
        }
        else {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }

}

int main() {
    vector<int> list = {3, 5, 9, 10};
    int size = list.size();
    int target = 15;

    vector<int> answer = pairSum(list, size, target);
    cout<< "Index of 1st number is: "<< answer[0]<< endl;
    cout<< "Index of 2nd number is: "<< answer[1]<< endl;
    
    return 0;
}