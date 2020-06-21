#include<bits/stdc++.h>
using namespace std;

int dispro(int n, int r, int p)
  {
    int C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for(int i=1; i<=n; i++)
      {
        for(int j = min(i,r); j>0; --j) C[j] = (C[j-1] + C[j])%p;
      }
    return C[r];
  }

int lucas(int n, int r, int p)
  {
    if(r==0)return 1;

    int ni = n%p, ri = r%p;

    return (lucas(n/p, r/p, p)*dispro(ni, ri, p))%p;
  }

int main()
  {
    int n, r, p;
    cin >> n >> r >> p;
    cout << ((n>=r && r>=0) ? lucas(n, r, p) : 0) << '\n';
  }
