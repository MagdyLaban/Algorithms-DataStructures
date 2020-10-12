#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_fast(int n){
    int fib_last_digit [n];
    fib_last_digit[0] = 0;
    fib_last_digit[1] = 1;

    for(int i = 2; i <= n; ++i){
        fib_last_digit[i] = (fib_last_digit[i-1] +fib_last_digit[i-2]) % 10;
    }
    return fib_last_digit[n];
}

int main() {
    int n;
    std::cin >> n;
    int g = get_fibonacci_last_digit_fast(n);
    std::cout << g << '\n';
    }
