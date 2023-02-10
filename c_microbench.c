#include <stdio.h>
#include <time.h>

// set run repetitions
const __int64_t RUNS = 65536;

void func1() {}     // demo function

void func2() {}     // demo function

int main() {
    clock_t start;
    clock_t end;
    float first;
    float second;

    // bench setup

    __int64_t a = 0;

    // /bench setup

    start = clock();
    for (__uint64_t run = 0; run < RUNS; run++) {
        // 1st run

        a++;
        // a += 1;          // reverse test

        // bench function
        // func1();
        // func2();          // reverse test

    }   // /1st run
    end = clock();
    first = (float)(end - start);

    // reset bench setup

    a = 0;

    // /reset bench setup

    start = clock();
    for (__int64_t run = 0; run < RUNS; run++) {
        // 2nd run

        a += 1;
        // a++;             // reverse test

        // bench function
        // func2();
        // func1();          // reverse test

    }   // /2nd run
    end = clock();
    second = (float)(end - start);
    
    // print result nanoseconds
    // printf("1st run: %f ns\n", (first / (float)RUNS * 1000.0f));        //fix implicit declaration of printf()
    // printf("2nd run: %f ns\n", (second / (float)RUNS * 1000.0f));

    // print result microseconds
    printf("1st run: %f µs\n", (first / (float)RUNS));
    printf("2nd run: %f µs\n", (second / (float)RUNS));

    // print result milliseconds
    // printf("1st run: %f µs\n", (first / (float)RUNS / 1000.0f));
    // printf("2nd run: %f µs\n", (second / (float)RUNS / 1000.0f));

    // print result seconds
    // printf("1st run: %f µs\n", (first / (float)RUNS / 1.0e6f));
    // printf("2nd run: %f µs\n", (second / (float)RUNS / 1.0e6f));
}
