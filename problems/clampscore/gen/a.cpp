#include "../lib/template.hpp"

int main(){
  io_init();
  int n = 100000, q = 100000;
  std::cout << n << " " << q << '\n';
  range(i, 0, q){
    int t = random_number<int>(1, 4);
    auto [l, r] = random_segment1<int>(1, n);
    if(t <= 2){
      int x = random_number<int>(1, 1000000000);
      int y = random_number<int>(1, 1000000000);
      std::cout << t << " " << l << " " << r << " " << x << " " << y << '\n';
    }else{
      std::cout << t << " " << l << " " << r << '\n';
    }
  }
}