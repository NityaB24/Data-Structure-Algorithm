int search(vector<int> &nums, int target) {
    int n = nums.size();
    int low =0;
    int high = n-1;
    for(int i=0;i<n;i++)
    {
        int mid = (low+high)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]<target)
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return -1;
    // Write your code here.
}