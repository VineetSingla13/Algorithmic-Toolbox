#include <iostream>
using namespace std;

int sum_of_two_digits(int first_digit, int second_digit) {
    return first_digit + second_digit;
}

int main() 
{
    int first_num ;
    int sec_num ;
    std::cin >> first_num;
    std::cin >> sec_num;
    std::cout << sum_of_two_digits(first_num, sec_num);
    return 0;
}
