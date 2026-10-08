//quetion ppr 2 que 1 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter No Of Students"<<endl;
    
    int N;
    cin>>N;
    
    cout<<"Enter students guessings"<<endl;
    vector<int> D(N);
    
    for(int i=0; i<D.size(); i++){
        cin>>D[i];
    }

    int num = D[0];
    int wrongGuess = 0;

    for(int i=1; i<D.size(); i++){
        if(D[i] == num){
            continue;
        }else{
            wrongGuess++;
        }
    }
    cout<<wrongGuess;
    return 0;    
}