#include <iostream>
#include <vector>
using namespace std;

void upper_bound(vector<int>& v, int el)
{
    int lo{}, hi = v.size() - 1;
    int mid{};

    while(lo < hi)
    {
        mid = (lo + hi)/2;
        if(v[mid] < el) lo = mid + 1;
        else hi = mid;
    }

    if(v[lo] == el) cout<<"Upper Bound: "<<v[lo + 1]<<'\n';
    else if(v[hi] < el) cout<<"Upper Bound: "<<v[lo]<<'\n';
    else cout<<"Upper Bound Not Found"<<'\n';
}

void lower_bound(vector<int>& nums, int target)
{
    int lo = 0, hi = nums.size() - 1;
    int mid = 0;

    while(lo < hi)
    {
        mid = (hi + lo)/2;
        if(nums[mid] < target) lo = mid + 1;
        else hi = mid;
    }

    if(nums[mid] == target) cout<<"Lower Bound: "<<nums[mid]<<'\n';
    if(nums[lo] >= target) cout<<"Lower Bound: "<<nums[lo]<<'\n';
    else cout<<"Lower Bound Not Found"<<'\n';
}

int binary_search(vector<int>& nums, int target)
{
    int n = nums.size();
    int low{};
    int high{n - 1};
    int mid;

    while(high - low > 1)
    {
        mid = (high + low)/2;

        if(nums[mid] < target)
        {
            low = mid + 1;
        }

        else
        {
            high = mid;
        }
    }

    if(nums[mid] == target) return mid;
    else if(nums[low] == target) return low;

    return -1;
}

int main()
{   
    vector<int> nums = {2,3,4,5,6,7};
    int target = 7;

    int result = binary_search(nums, target);
    upper_bound(nums, target);
    return 0;
}