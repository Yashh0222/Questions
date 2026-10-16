#include<bits/stdc++.h>
using namespace std;

int main(){
    int N1, N2;
    cin>>N1>>N2;

    vector<int> a(N1);
    vector<int> b(N2);
    set<int> st;
    

    for(int i=0; i<N1; i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    
    for(int i=0; i<N2; i++){
        cin>>b[i];
        st.insert(b[i]);
    }

    vector<int> combined;
    for(int x : st){
        combined.push_back(x);
    }

    int n = combined.size();

    if(n % 2 != 0){
        cout<< combined[n / 2]<<endl;
    }else{
        double ans = (combined[n / 2 - 1] + (double)combined[n/2])/ 2.0;
        cout<< ans << endl;
    }
    
    return 0;
}