vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > res;
    for(int len=1;len<=A;len++){
        int c=1;
        vector<int> tmp;
        for(int i=1;i<=len;i++){
            tmp.push_back(c);
            c = c*(len-i)/i;
        }
        res.push_back(tmp);
    }
    return res;
}
