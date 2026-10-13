// que ppr 4 que 2
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin>>N>>K;

    vector<int> price(N);
    vector<int> volume(N);

    for(int i=0; i<N; i++){
        cin>>price[i];
    }

    for(int i=0; i<N; i++){
        cin>>volume[i];
    }

    priority_queue<pair<int, int>> pq;

    for(int i=0; i<N; i++){
        pq.push({volume[i], price[i]});
    }

    int maxVol = 0;

    while(!pq.empty()){
        if(pq.top().second <= K){
            maxVol += pq.top().first;
            K = K - pq.top().second;
            pq.pop();
        }else{
            pq.pop();
        }
    }

    cout<<maxVol;

return 0;

}