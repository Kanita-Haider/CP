

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
//#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX 1000000
//cout << fixed << setprecision(3) <<nl;
using namespace std;

int primes[MAX+1];

void  seive(){
    int i,j,root;
	//memset(primes, 1 , sizeof(primes) )  ;
    primes[1]=0;
    for(i=2;i<MAX;i++){
		primes[i]=1;
				//cout<<primes[i]<<" ";
			
		  }
    root=sqrt(MAX);

	for(i=2;i<root;i++){
		if(primes[i]){
				///multiple
			for(j=i;i*j<MAX;j++){
				primes[i*j] =0;
			}
				
			}
	}
	
 
}

int main (){

    seive();
    int t;
    cin>>t;
     //cout<<"hello"<<nl;
    while(t--){
        int n,m,cnt=0;
         
        cin>>n>>m;
        for(int i=n;i<=m;i++){
            if(primes[i]) {
               // cout<<primes[i]<<" "<<i<<nl;
                cnt++;}
        }
        cout<<cnt<<nl;
    }

}

