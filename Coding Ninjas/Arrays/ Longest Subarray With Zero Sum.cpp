#include<vector>
#include <bits/stdc++.h> 
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	unordered_map<int, int> sumMap;
	int k=0;
    int n = arr.size();
    int sum = 0;
    int len = 0;

    for (int r = 0, l = 0; r < n; r++) {
        sum += arr[r];

        if (sum == k) {
            len = max(len, r - l + 1);
        }

        if (sumMap.find(sum - k) != sumMap.end()) {
            len = max(len, r - sumMap[sum - k]);
        }

        if (sumMap.find(sum) == sumMap.end()) {
            sumMap[sum] = r;
        }
    }

    return len;
	
}