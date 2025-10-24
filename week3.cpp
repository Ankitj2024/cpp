#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> nums = {3,7,37,9,5,3,90};
    // for(int i=1;i<nums.size();i++) {
    //     for(int j=i;j>0;j--) {
    //         if(nums[j]<nums[j-1]){
    //             swap(nums[j],nums[j-1]);
    //         }
    //     }
    // }
    for(int i=nums.size()-1;i>0;i--) {
        int no=0;
        for(int j=0;j<i;j++) {
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
        if(no==0){
            break;
        }
   }
    for(int num : nums) {
        cout << num << " ";
    }
    return 0;
}