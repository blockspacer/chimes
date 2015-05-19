#include <checkpoint.h>
#include <assert.h>

int foo(int a) {
    checkpoint();
    wait_for_checkpoint();
    assert(a == 10);
    return a + 5;
}

int bar(int *a) {
    *a = *a + 5;
    checkpoint();
    wait_for_checkpoint();
    assert(*a == 10);
    return *a;
}

int main(int argc, char **argv) {
    int a = 5;

    int b = foo(bar(&a));
    assert(b == 15);

    return b;
}
