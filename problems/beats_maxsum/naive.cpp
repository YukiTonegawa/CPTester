/*
#include "../lib/template.hpp"

int main(){
  io_init();
  int n, q;
  std::cin >> n >> q;
  vector<ll> X(n, 0), Y(n, 0);

  range(i, 0, q){
    int t;
    std::cin >> t;
    int l, r;
    std::cin >> l >> r;
    ll x;
    if(t == 1){
      std::cin >> x;
      range(j, l, r) X[j] += x;
    }else if(t == 2){
      std::cin >> x;
      range(j, l, r) Y[j] += x;
    }else if(t == 3){
      std::cin >> x;
      range(j, l, r) X[j] = min(X[j], x);
    }else if(t == 4){
      std::cin >> x;
      range(j, l, r) Y[j] = min(Y[j], x);
    }else{
      ll ans = -(1LL << 60);
      range(j, l, r) ans = max(ans, X[j] + Y[j]);
      std::cout << ans << '\n';
    }
  }
}
*/