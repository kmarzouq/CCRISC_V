// Recursive Fibonacci -- exercises real function-call codegen (stack
// frames, JAL/JALR, negative-offset SW/LW) rather than hand-picked
// instruction sequences.

static int fib(int n) {
    if (n < 2) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    if (fib(10) != 55) return 1;
    if (fib(0) != 0) return 2;
    if (fib(1) != 1) return 3;
    return 0;
}
