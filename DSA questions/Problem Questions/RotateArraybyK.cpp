#include <iostream>
#include <vector>
using namespace std;
void rotatearray(vector<int> &nums,int k)
{
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++)
    {
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
}
int main()
{

    return 0;
}