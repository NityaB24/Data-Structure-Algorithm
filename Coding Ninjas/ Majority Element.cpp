int majorityElement(vector<int> v) {
	int c = 0;
	int element;
	for (int i=0;i<v.size();i++)
	{
		if (c==0)
		{
			c=1;
			element = v[i];
		}
		else if(v[i] == element)
		{
			c++;
		}
		else {
			c--;

		}
	}
	int c2 =0 ;
	for (int i=0;i<v.size();i++)
	{
		if (v[i] == element)
		{
			c2++;
		}
	}
	if (c2 > (v.size()/2))
	{
		return element;
	}
	return -1;
	// Write your code here
}