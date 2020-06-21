#include<bits/stdc++.h>
using namespace std;

int comb(int n, int r, int p)
  {
    if (r>n-r) r = n-r;
    int C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for(int i = 1; i<=n; i++)
      {
        for(int j = min(i, r); j>0; j--)
        {
          C[j] = (C[j] + C[j-1]) % p;
          cout << C[j] << '='  << C[j] + C[j-1] << '\n';
        }
      }
    return C[r];
  }

int main()
  {
    int t;
    cin >> t;
    while(t--)
      {
        int n, r, p;
        cin >> n >> r >> p;
        cout << ((n>=r && r>=0) ? comb(n, r, p) : 0) << '\n';
      }
  }
