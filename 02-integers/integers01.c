#include <stdio.h>

// Learning C by example
// integers01.c by Darrell Root December 2022

int main(int argc, const char * argv[]) {
    int x;   // declaring and defining x, but not setting an initial value
    x = 8;   // setting an initial value for x
    int y = 3;   // declaring, defining, and setting an initial value for y

    printf("x is %d\n",x);    // %d is a "format specifier" meaning x should be interpreted as an int
    printf("y is %d\n",y);

    int z = x + y;            // the "assignment operator"
    printf("x+y is %d\n",z);
    printf("x-y -s %d\n",x-y);   // we can perform math inside the printf argument
    printf("x*y is %d\n",x*y);
    printf("x/y is %d\n",x/y);    // integer division truncates!  Not rounds!
    printf("x%%y is %d\n",x%y);   // % is "remainder operator"

    printf("-8 %% -3 is %d\n",(-8)%(-3));   // unlike modulus, remainder can be negative!
    printf("8 %% -3 is %d\n",(-8)%(3));
    return 0;
}
