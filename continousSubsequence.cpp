// Question ppr 3 que 1 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; 
    cin>>N;

    int K;
    cin>>K;

    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }

    int sum = 0;
    int j = 0;

    for(int i=0; i<N; i++){
        sum +=  arr[i];

        while(sum > K && j <= i){
            sum -= arr[j];
                j++;
        }

        if(sum == K){
            cout<<j+1<<" "<<i+1;
            return 0;
        }
    }
    
    return 0;
}