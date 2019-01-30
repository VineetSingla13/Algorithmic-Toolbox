#include <iostream>
#include <vector>

using namespace std;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int total=n;
  int i=0;
  if(n<=0)
	return summands;

  while(total>0)
  {
    if(total >= (2*i+3)){
		summands.push_back(i+1);
	}
    else{
		summands.push_back(total);
	}    total=total-summands[i];
    i++;
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
  
}
