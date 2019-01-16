#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}



long gcd_fast(long a,long b){
long c;
while(a!=0 && b!=0){

  if(a>=b)
   {c=b;
    b=a%b;
    a=c;
    }
  else
   {
   b=b%a;
   }
 }
return a; 

}

long long lcm_fast(long a,long b)
 {
   long long lcm=(a*b)/gcd_fast(a,b);
   return lcm;
}


int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
