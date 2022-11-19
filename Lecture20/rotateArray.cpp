#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k) % nums.size()] = nums[i];
        }
        
        nums = temp;
    }

int main()
{

    vector<int> nums = {-1, -100, 3, 99};
    printArray(nums);
    rotate(nums, 2);
    cout<<"Printing after rotation: " << endl;
    printArray(nums);
    vector<int> nums2 = {1,2};
    printArray(nums2);
    rotate(nums2, 1);
    cout<<"Printing after rotation: " << endl;
    printArray(nums2);

}