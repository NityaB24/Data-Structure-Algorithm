vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    long long n = a.size();
    long long sn = (n * (n+1)) /2;
    long long s2n = (n * (n+1) *(2*n+1)) /6;
    long long s = 0,s2 = 0;
    for(int i=0;i<n;i++)
    {
        s += a[i];
        s2 += (long long)a[i] * (long long)a[i];
    }
    long long value = s - sn;
    long long value2 = s2 - s2n;
    value2 = value2/value;
    long long x = (value+value2)/2;
    long long y = x - value;
    return {(int)x,(int)y};
}