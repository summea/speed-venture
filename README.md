speed-venture
=============

speed-venture is all about learning how to speed up a given portion of code. In this case, the given portion of code focuses on having an outer and inner loop. The inner loop computes the sum of the numbers in a given array and the outer loop simply runs the inner loop _n_ times.

## How to Compile

    gcc -m32 -std=gnu99 -Wall -g speed-venture.c -o speed-venture

## Example Output

    // Mac OS X 10.8
    $ time ./speed-venture

    real  0m3.009s
    user  0m3.005s
    sys   0m0.003s

    // Debian 3.2.54-2 i686 GNU/Linux
    $ time ./speed-venture 

    real  0m4.828s
    user  0m4.756s
    sys   0m0.060s

## Notes

- See LICENSE file for license information.
- Original code template provided by mtrigobo
