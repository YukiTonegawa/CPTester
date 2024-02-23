#include "../lib/template.hpp"

int main(){
  io_init();
  int n = 100000, q = 100000;
  std::cout << n << " " << q << '\n';
  range(i, 0, q){
    int t = random_number<int>(1, 5);
    auto [l, r] = random_segment1<int>(1, n);
    l--;
    int e9 = 1000000000;
    if(t == 1){
      int x = random_number<int>(-e9, e9);
      std::cout << t << " " << l << " " << r << " " << x << '\n';
    }else if(t == 2){
      int y = random_number<int>(-e9, e9);
      std::cout << t << " " << l << " " << r << " " << y << '\n';
    }else if(t == 3){
      int x = random_number<int>(-e9, e9);
      std::cout << t << " " << l << " " << r << " " << x << '\n';
    }else if(t == 4){
      int y = random_number<int>(-e9, e9);
      std::cout << t << " " << l << " " << r << " " << y << '\n';
    }else{
      std::cout << t << " " << l << " " << r << '\n';
    }
  }
}