#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> M(N);

    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }

    
    for (int i = 0; i < K; i++)
    {
        int X, Y;
        cin >> X >> Y;
        
        M[X - 1] = Y;
        
        int count = 1;

        for (int j = 1; j < N; j++)
        {
            if (M[j] != M[j - 1])
            {
                count++;
            }
        }

        cout << count<< endl;
    }
    return 0;
}