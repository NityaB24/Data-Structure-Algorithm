int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    map <int,int> mp;
    mp[0] = 1;
    int sum = 0,c =0 ;
    for(int i=0;i<arr.size();i++)
    {
        sum += arr[i];
        int remove = sum-k;
        c += mp[remove];
        mp[sum] += 1;
    }
    return c++;
    // Write Your Code Here
}