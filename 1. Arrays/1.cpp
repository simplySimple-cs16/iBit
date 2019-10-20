int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    int res = -1;
    for(int i=0;i<n;i++){
        int j=i;
        while(A[j]==A[i] && j<n)
            j++;
        int p = A[i];
        int c = (n-1)-(j-1);
        if(p==c){
            res = 1;
            break;
        }
    }
    return res;
}