#include <algorithm>
#include <iostream>
#include <cstring>
#include <complex>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <bitset>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <list>
#include <map>
#include <set>


using namespace std;

template<class T> inline void umax(T &a,T b){if(a<b) a = b ; }
template<class T> inline void umin(T &a,T b){if(a>b) a = b ; }

template<class T> inline T abs(T a){return a>0 ? a : -a;}



typedef long long ll;


const int inf = 1e9 + 143;
const ll longinf = 1e18 + 143;

inline int read(){int x;scanf(" %d",&x);return x;}

const int N = 20001;

int n;
int a[N];

void read_inp(){
    n = read();
      for(int i = 1; i <= n; i++)
    {
        a[i] = read();
        }
}

int main(){

    read_inp();

    ll ans = -longinf;
    ll best = 0ll, cur = 0ll;
    
    cout<<best<<" and "<<cur<<endl;
    for(int i = 1; i <= n; i++)
    {
        {
            int l = i - 1, r = i;
            
            best = 0ll;cur = 0ll;
            
            
            while(l >= 1 && r <= n)
            {
                ll val = (ll)a[l] * a[r];
                cur += val;
                umin(best, cur);
                umax(ans, cur - best);
             cout<<" i is : "<<i<<" best is "<<best<< ans is "<<ans<<endl;
                --l;
                ++r;
            }
        }
        //////////////
       /* {
            int l = i - 1, r = i + 1;
            ll best = 0ll, cur = 0ll;
            while(l >= 1 && r <= n)
            {
                ll val = (ll)a[l] * a[r];
                cur += val;
                umin(best, cur);
                umax(ans, cur - best);
                --l;
                ++r;
            }
        }*/
    }

    printf("%lld\n",ans);

    return 0;
}

