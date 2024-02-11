#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int x = 0; int c = 0;
    map<int,int> mp ;
    mp[x]++;
    for(int i=0;i<a.size();i++)
    {
        x = x ^ a[i];
        int x2 = x^b;
        c += mp[x2];
        mp[x]++;
    }
    return c;
    
    // Write your code here
}