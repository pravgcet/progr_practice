#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    int N;
    cin >> N;

    vector<long> V(N+1);

    for (int i=0; i<N+1; i++)
    {      
        cin >> V[i];
    }

    cout << - V[N-1] / V[N] << " ";
    
    if (N%2 == 0)
    {
        cout << V[0] / V[N];
    }
    else
    {
        cout << - V[0] / V[N];
    }
    
    return 0;
}

