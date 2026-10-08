// Que ppr 3 que 2 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N , K;
    cin>>N>>K;

    vector<int> horses(N);

    for(int i=0; i<N; i++){
        cin>>horses[i];
    }

    long long money = 0;
    int ans = 0;
    int j = 0;

    for(int i=0; i<N; i++){
        money += horses[i];

        while(money > K && j <= i){
            money -= horses[j];
            j++;
        }


        if(money < K){
            ans = max(ans, i - j + 1);
        }
    }
    
    cout<<ans;
    return 0;

}