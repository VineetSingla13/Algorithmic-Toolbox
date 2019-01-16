#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}



long long fibo(int n) {
    long long arr[n];
    arr[0]=0;
    arr[1]=1;
    cout<<"defr";
    for(int i=2;i<n+1;i++)
    {
     arr[i]=arr[i-1]+arr[i-2];
    }

    return arr[n];
}


long long fibonacci_fast(long long n,long long m){
long long x=n%(m*m-1);
long long j=fibo(x)%m;
return j;
}



int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << fibonacci_fast(n, m) << '\n';
}
