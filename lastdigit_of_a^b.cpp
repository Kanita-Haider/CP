#include<bits/stdc++.h>
#define int long long int
using namespace std;

int Modulo(int a,string b){

    int mod=0;
    for(int i=0;i<b.size();i++)
        mod=(mod*10+b[i]-'0')%a;
    return mod;
}

int main(){
    int t; cin>>t;
    while(t--){
   string a,b;  cin>>a>>b;
      int alen =a.size();
      int blen =b.size(); int res=0;
    
    if (alen == 1 && blen == 1 && b[0] == '0' && a[0] == '0')
       res=1;  
    else if (blen == 1 && b[0] == '0')
        res= 1;
    else if (alen == 1 && a[0] == '0')
        res= 0;
    else{
    int exp = (Modulo(4, b) == 0) ? 4 : Modulo(4, b);
     res = pow(a[alen - 1] - '0', exp);
     res=res % 10;
    }
    cout<<res <<"\n";
    }
    return 0;
}