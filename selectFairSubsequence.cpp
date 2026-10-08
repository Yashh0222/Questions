#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    pair<int, long long> better( pair<int, long long> a,  pair<int, long long> b){
        if(a.first != b.first){
            return (a.first > b.first) ? a : b;
        }

        return (a.second > b.second) ? a : b;
    }

    long long maxFairSum(vector<int>& A){
        pair<int, long long> pos = {0, 0};
        pair<int, long long> neg = {0, 0};
        
        for(int x : A){
            if(x > 0){
                pair<int, long long> candidate = {neg.first + 1, neg.second + x};
                pos = better(pos , candidate);                
            }else{
                pair<int, long long> candidate = {pos.first + 1, pos.second + x};
                neg = better(neg , candidate);        

            }
        }

        pair<int, long long> ans = better(pos, neg);

        return ans.second;
    }
};
int main(){
    int N;
    cin>>N;

    vector<int> A(N);

    for(int i=0; i<N; i++){
        cin>>A[i];
    }

    Solution s;

    cout<<s.maxFairSum(A)<<endl;


}