#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 3};
    
    nums.insert(nums.begin() + 1, 1);
    nums.push_back(4);
    for(int num:nums){
        cout << num << endl;
    }
    cout << nums[1]<<endl;
    cout << nums.at(4);
    return 0;
}