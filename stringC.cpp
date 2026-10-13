
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    string C = "";

    for (int i = 0; i < A.size(); i++)
    {
        bool found = false;

        for (int j = 0; j < B.size(); j++)
        {
            if (A[i] == B[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            C += A[i];
        }
    }

    cout << C << endl;
    return 0;
}
