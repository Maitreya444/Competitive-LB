/*Given two integers, ‘N’ and ‘M’, your task is to find the sum of Fibonacci numbers between ‘fib(N)’ and ‘fib(M)’ 
where ‘fib(N)’ represents the Nth Fibonacci number and ‘fib(M)’ represents the Mth Fibonacci number. 
The sum is given by sum(N, M) = fib(N) + fib(N+1) + fib(N+2) … fib(M). Since the answer could be large, 
so you have to return the sum modulo 10^9 + 7.

The fibonacci relation is given by:

fib(0) = 0 
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2), n >= 2, where fib(n) represents the nth fibonacci number.

2 6
For the first test case, 
The Fibonacci numbers between fib(2) and fib(6) are {1, 2, 3, 5, 8}. Their sum is equal to 19. Hence the output is 19.
*/

#include <stdio.h>

// Function to compute the nth Fibonacci number
int Fibonacci(int n) {
    if (n <= 1) 
    {
        return n; // Base cases: F(0) = 0, F(1) = 1
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Function to compute the sum of Fibonacci numbers from F(n) to F(m)
int FiboSum(int n, int m) {
    if (n > m) 
    {
        return 0; // Base case: If n exceeds m, no numbers to add
    }
    return Fibonacci(n) + FiboSum(n + 1, m);
}

int main() {
    int n = 2, m = 6; // Example range
    printf("Sum of Fibonacci numbers from F(%d) to F(%d) is %d\n", n, m, FiboSum(n, m));
    return 0;
}
