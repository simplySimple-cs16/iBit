/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> res;
    vector<pair<int,int> > tmp,tmp1;
    Interval obj;
    
    for(int i=0;i<A.size();i++){
        obj = A[i];
        tmp1.push_back({obj.start,obj.end});
    }
    sort(tmp1.begin(),tmp1.end());
    /*for(int i=0;i<tmp1.size();i++){
        cout<<"("<<tmp1[i].first<<","<<tmp1[i].second<<")"<<endl;
    }*/
    
    pair<int,int> p = tmp1[0];
    int minS = p.first;
    int maxE = p.second;
    for(int i=1;i<tmp1.size();i++){
        p = tmp1[i];
        int cS = p.first;
        int cE = p.second;
        if((cS>=minS && cE<=maxE) || (cS<=maxE && cE>=maxE) || (minS<cS && maxE>cE) || (minS==cS && maxE==cE)){
            minS = min(minS,cS);
            maxE = max(maxE,cE);
        }
        else{
            tmp.push_back({minS,maxE});
            minS = cS;
            maxE = cE;
            if(i==tmp1.size()-1){
                tmp.push_back({cS,cE});
            }
        }
    }
    auto key = make_pair(minS,maxE);
    if(binary_search(tmp.begin(),tmp.end(),key) == false){
        tmp.push_back({minS,maxE});
    }
    
    sort(tmp.begin(),tmp.end());
    for(int i=0;i<tmp.size();i++){
        obj.start = tmp[i].first;
        obj.end = tmp[i].second;
        res.push_back(obj);
    }
    return res;
}