#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;


//factorization method for single int 
// complexity o(root(n))

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

//seive method to find phi if all 1 to n 
//complexity o(nlglgn)
//more efficient
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            cout<<i<<nl;
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
   //for (int i = 1; i <= n; i++) cout<<phi[i]<<nl;
}



int main()
{
 FAST;
int t=0;

int n,ans=0;
cin>>n;
vector<int>v(n+5);
int arr[n+5];

ans=phi(n);
cout<<ans<<nl;
//phi_1_to_n(n);

return 0;
} 

