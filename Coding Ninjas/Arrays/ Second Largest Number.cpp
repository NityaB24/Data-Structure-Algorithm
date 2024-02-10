int secondlargest(vector<int> a,int n)
{
    int largest = a[0];
    int second = -1;
    for (int i=0;i<n;i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] != largest && a[i] > second)
        {
            second = a[i];
        }
    }
    return second;
}

int secondsmallest(vector<int> a,int n)
{
    int small = a[0];
    int second = INT_MAX;
    for (int i=0;i<n;i++)
    {
        if (a[i] < small)
        {
            second = small;
            small = a[i];
        }
        else if (a[i] != small && a[i] < second)
        {
            second = a[i];
        }
    }
    return second;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {

    int s_large = secondlargest(a,n);
    int s_small = secondsmallest(a,n);
    return {s_large,s_small} ;
    // Write your code here.
}
