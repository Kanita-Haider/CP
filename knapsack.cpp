#include<bits/stdc++.h>
using namespace std;

int knapSack(int W, int w[], int v[], int n) {
   int i, wt;
   int K[n + 1][W + 1];
   for (i = 0; i <= n; i++) {
      for (wt = 0; wt <= W; wt++) {
         if (i == 0 || wt == 0)
         K[i][wt] = 0;
         else if (w[i - 1] <= wt)
            K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
         else
        K[i][wt] = K[i - 1][wt];
      }
   }
   return K[n][W];
}
int main() {
   
   int n, W;
    cin >> W;
   cin >> n;
   int v[n], w[n];
   for (int i = 0; i < n; i++) {
        cin >> w[i];
      cin >> v[i];
   
   }
  
  
   cout << knapSack(W, w, v, n);
   return 0;
}