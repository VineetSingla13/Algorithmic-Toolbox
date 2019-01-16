#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;
//using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int n= weights.size();
  cout<<n<<endl;
  vector<double>ratio(n);
  for(int i=0;i<n;i++)
  {
    ratio[i]=(double)(values[i]/weights[i]);
  }
  sort(ratio.begin(),ratio.end());
  value=23;
  return value;
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
     cin >> values[i] >> weights[i];
   }
    cout<<n<<endl;
 
  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << std::endl;
  return 0;
}
