#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums,int k){
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums = temp;
    
}
int main(){

    vector<int> saim={1,2,3,4};
    rotate(saim,4);
    return 0;
}