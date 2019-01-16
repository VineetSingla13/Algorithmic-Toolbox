
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

vector<int> v ;

ll length_repeat(ll n,ll m){
  v.push_back(0) ;
  v.push_back(1) ;
  v.push_back(1) ;
  for(int i=3;i>0;i++){
    v.push_back( (v[i-1]+v[i-2])%m );
    if(v[i-1]==0 && v[i]==1) return i-1;
  }
}

ll get_fibonacci_mod(ll n,ll m) {
    if (n == 1 || n == 0)
        return n;
    if(n < 0){
      return -1 ;
    }
    ll length=length_repeat(n,m);
    // cout << "length - " << length << endl ;
    ll previous = 0;
    ll current  = 1;
    ll n_dash=(n%length);

    return v[n_dash] ;
}

int main() {
    ll n,m;
    std::cin >> n>>m;
    ll c = get_fibonacci_mod(n,m);
    std::cout << c << '\n';
}
