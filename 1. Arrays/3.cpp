int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int sum=0;
    for(int i=1;i<A.size();i++){
        int dx = abs(A[i]-A[i-1]);
        int dy = abs(B[i]-B[i-1]);
        sum += max(dx,dy);
    }
    return sum;
}
