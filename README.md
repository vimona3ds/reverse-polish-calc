## Reverse Polish Calc
### What is this?
A terminal-based calculator written in C that is based on reverse-polish notation. It only supports five basic operations: addition, subtraction, multiplication, division, and exponentiation. This calculator is based on integer arithmetic, not floating-point arithmetic.

### How do I use this?
With the Makefile provided, you may run:
```shell
make
```
to compile the source code into the dist folder.
You may then execute the calculator as such:
```shell
$ ./calc "345*-"
-17
$ ./calc "12-2+"
1
$ ./calc "534-*"
-5
```

### Why did you make this?
I wanted to challenge my knowledge of C, space-time complexity analysis, and data structures (in this case, a stack.) I had to implement my own stack structure.
