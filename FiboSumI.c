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

// Function to compute the sum of Fibonacci numbers from F(n) to F(m)
int FiboSumI(int n , int m)
{
    const unsigned long long MOD = 1e9 + 7;

	if (n > m) 
    {
        return 0; // If range is invalid, return 0
    }

    int prev = 0, curr = 1, next = 0;
    int sum = 0;

    // Compute Fibonacci numbers and sum them in the range [n, m]
    for (int i = 0; i <= m; i++) 
    {
        if (i >= n) 
        {
            sum= (sum + prev) % MOD;; // Add to sum if in the range
        }

        // Compute the next Fibonacci number
        next = (prev + curr) % MOD;;
        prev = curr;
        curr = next;
    }

    return sum;
}

int main() {
    int n = 2, m = 6; // Example range
    printf("Sum of Fibonacci numbers from F(%d) to F(%d) is %d\n", n, m, FiboSumI(n, m));
    return 0;
}
