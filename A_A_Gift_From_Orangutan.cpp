#include <bits/stdc++.h>
using namespace std;
 
#define f(n) for(int i = 0; i < n; i++)   
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define double long double
#define mod 1000000007ll //998244353ll
#define fi first
#define se second
#define pb push_back 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define vc vector<char>
#define mii map<int, int>
#define sz size() 
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define rep(i,x,y) for(int i=x; i<y; i++)
#define unq(v) v.resize(distance(v.begin(), unique(all(v))));
#define endl "\n"
#define pqmax priority_queue<int>
#define test int t;cin>>t;while(t--) 
#define vin(v, n)             \
  int n;                      \
  cin >> n;                   \
  vector<int> v(n);           \
  for (int i = 0; i < n; i++) \
    cin >> v[i];
 
 
 const int N = 200005 ;
  vi spf ;
  bool isprime[N + 1]; 
 
int bpow(int a, int b, int m = mod)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}
 
void sieve(){
    spf.assign(N+1,0); rep(i,0,N+1) spf[i]=i;
    for(int i=2; i*i<=N; i++) if(spf[i]==i) for(int j=i*i; j<=N; j+=i) spf[j]=min(spf[j],i);
    //rep(i,2,N+1) if(spf[i]==i) primes.pb(i);
}
 
void primecheck()
{
    for (int i = 0; i <= N; i++)
        isprime[i] = true;
    isprime[1] = false;
    for (int i = 2; i < N + 1; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < N + 1; j += i)
                isprime[j] = false;
        }
    }
}
int lcm(int a, int b){return (a *b )/ (__gcd(a, b)) ;  } 
 
int32_t main(){
    fastIO ;
    // primecheck() ;
    // sieve() ;
    test{
 vin( v , n ) ;

 int maxi = -1 ;
 f(n) maxi= max( maxi , v[i]) ; 
 sort(all(v)) ; 
 int mini = v[0] ; 

 if( n ==1 ) cout<<0<<endl ;
 else {
int ans = 0 ;

ans = (n-1)*( maxi-mini) ; 
cout<<ans<<endl; 

 }

 
 
 
 
    }
    return 0;
}
