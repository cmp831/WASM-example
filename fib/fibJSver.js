// function returns the Fibonacci number
export function fib(n) {
if (n <= 1)
    return n;
return fib(n-1) + fib(n-2);
}
