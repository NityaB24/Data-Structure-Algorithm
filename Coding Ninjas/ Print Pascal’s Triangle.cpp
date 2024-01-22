
vector<int> generate_row(int row) {
    long long ans = 1;
    vector <int> ansrow ;
    ansrow.push_back(1);
    for(int col = 1; col<row; col++)
    {
        ans = ans *(row-col);
        ans = ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i=1; i<=N;i++)
    {
        ans.push_back(generate_row(i));
    }
    return ans;
}