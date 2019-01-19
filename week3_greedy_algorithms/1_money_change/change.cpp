#include <iostream>
using namespace std;


int get_change(int m) {
  int coins[]= {10,5,1};
  int cnt = 0;
  for(int i=0;m>0;i++){
  cnt+=(m/coins[i]);
  m=m%coins[i];
 //cout<<cnt<<endl;
  }

  return cnt;
}

int main() {
  int m;
  std::cin >> m;

  std::cout << get_change(m) << '\n';
}
