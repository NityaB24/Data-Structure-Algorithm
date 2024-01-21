int leftrotate(vector<int>arr,int n, int d)
{
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    int l = leftrotate(arr, n,k)
    return l;

    // Write your code here.
}
