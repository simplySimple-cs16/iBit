/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<pair<int,int> > tmp;
    Interval obj;
    int minS = newInterval.start;
    int maxE = newInterval.end;
    if(maxE<minS){
        swap(minS,maxE);
    }

    for(int i=0;i<intervals.size();i++){
        obj = intervals[i];
        int cS = obj.start;
        int cE = obj.end;
        if((maxE>=cS && minS<cS) || (minS<=cE && maxE>cE) || (minS<cS && maxE>cE) || (minS==cS && maxE==cE)){
            minS = min(minS,cS);
            maxE = max(maxE,cE);
        }
        else{
            tmp.push_back({obj.start,obj.end});
        }
    }
    tmp.push_back({minS,maxE});
    sort(tmp.begin(),tmp.end());
    vector<Interval> res;
    for(int i=0;i<tmp.size();i++){
        obj.start = tmp[i].first;
        obj.end = tmp[i].second;
        res.push_back(obj);
    }
    return res;
}