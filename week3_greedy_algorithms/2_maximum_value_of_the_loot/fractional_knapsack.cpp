#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long;
//using std::vector;

int getting_index(vector<double>ratio){
 int n=ratio.size();
 //cout<<"jlo";
 //int index=distance(ratio, max_element(ratio, ratio + n));
 int index= max_element(ratio.begin(),ratio.end()) - ratio.begin();
 //cout<<index;
 return index;


}

int get_max_index(vector<int> weights, vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            max_i = i;
        }
    }
    return max_i;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  //double value = 0.0;
  int n= weights.size();
  vector<double> ratio(n);
 for(int i=0;i<n;i++)
  {
    ratio[i]=(double)(values[i]/weights[i]);
  }


double value = 0.0;
for(int i=0;i<n;i++){
if(capacity==0) return value;
 int index= get_max_index(weights,values);
 int a= min(capacity,weights[index]);
 value+=a*(double)values[index]/weights[index];
 values[index]=0;
 capacity-=a;


}




  //distance(A, max_element(A, A + N))
  return value;
}

int main() {
  int n;
  int capacity;
  //cout<<"vrh";
  cin >> n >> capacity;

  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
     cin >> values[i] >> weights[i];
   }
//cout<<"efhr";

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << std::endl;
  return 0;
}




/*
#include <iostream>
#include <vector>

using std::vector;

int get_max_index(vector<int> weights, vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            max_i = i;
        }
    }
    return max_i;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;

    for (int i = 0; i < weights.size(); i++) {
        if (capacity == 0) return value;
        int index = get_max_index(weights, values);
        int a = std::min(capacity, weights[index]);
        value += a * (double) values[index] / weights[index];
        weights[index] -= a;
        capacity -= a;
    }

    return value;
}

int main() {
    int n;
    int capacity;
    std::cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
    return 0;
}
*/
