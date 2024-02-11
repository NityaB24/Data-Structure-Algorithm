int traffic(int n, int m, vector<int> vehicle) {
	int c1 = 0;int maxi=0;
	int c2 = 0;
	int sum = 0;
	for (int i=0;i<n;i++)
	{
		if(vehicle[i]==1)
		{
			c1++;
			maxi = max(maxi,c1);
		}
		else{
			c2++;
		}
	}
	if (m > c2)
	{
		sum = c1 + c2;
	}
	else
	{
		sum = maxi + m;
	}
	return sum;
	// Write your code here.
}
