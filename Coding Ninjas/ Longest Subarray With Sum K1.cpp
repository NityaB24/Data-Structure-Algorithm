int longestSubarrayWithSumK(vector<int> a, long long k) {
    int l =0;int r=0;
    long long sum =a[0];
    int len = 0;
    int n = a.size();
    while (r<n)
    {
        while (l<=r && sum>k){
            sum -= a[l];
            l++;
        }
        if (sum == k)
        {
            len = max(len,r-l+1);
        }
        r++;
        if (r<n)
            sum += a[r];
    }
    return len;
    // Write your code here
}