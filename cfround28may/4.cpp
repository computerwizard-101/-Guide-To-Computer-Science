#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll                    long long int
#define ull                   unsigned long long int
#define loop(i,a,b)          for(ll i=(ll)a;i<=(ll)b;i++)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define f                     first
#define s                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define vi                    vector<int>
#define vl                    vector<ll>
#define vvi                   vector<vi>
#define vvl                   vector<vl>
#define pll                   pair<ll,ll>
#define vpl                   vector<pll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
const int mod = 1000000007;
#define sv()                  long long int t; cin>>t; while(t--)
const int req=100005;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   ll t;
   cin >> t;
   for(ll o=1;o<=t;o++)
  {
      ll i,j,k,n;
      cin >> n;
      vl arr(n);
      loop(i,0,n-1)
      cin >> arr[i];
      sort(arr.begin(),arr.end());
        if(arr[0]>0||n==1)
    {
        cout<<"1\n";
        //return 0;
        continue;
    }
    ll min_till=abs(arr[1]-arr[0]);
    ll sum = 1;
    for(i=1;i<n;i++)
    {
         min_till= min(arr[i]-arr[i-1],min_till);
        if(arr[i]<0)
        {
            sum++;
        }
        else if(min_till>=arr[i])
        {
            sum++;
           
        }
        else 
        {
            break;
        }
       
    }

  cout<<sum<<endl;
      
  }
}
