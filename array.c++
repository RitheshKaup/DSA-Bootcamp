#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 3};
    int n = size(nums);
    for (int i = 0; i < n;i++){
        cout << nums[i];
    }
    return 0;
}