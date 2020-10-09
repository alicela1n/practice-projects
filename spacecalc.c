#include <stdio.h>
#include <stdlib.h>

/* A program I wrote for practice which takes a number I input in Gigabytes and turns it into Megabytes,
 * Kilobytes, and Bytes.
 * Example usage: $ ./spacecalc 5
 *                   5368709120 B
 *                   5242880 KB
 *                   5120 MB
 */

//TODO: Add a check so it doesn't segmentation fault with no argument

// main function
int main(int argc, char *argv[]) { // takes a number as input
    long long a; // defining each integer as long long int
    long long gb;
    long long mb;
    long long kb;
    long long b;
    
    // Get values
    a = atoi(argv[1]);
    
    // B calculation
    b = a * 1024 * 1024 * 1024; // takes a number and multiplies it three times by 1024
    printf("%lld B\n",b); // print it
    
    // KB calculation
    kb = a * 1024 * 1024; // takes a number and multiplies it twice by 1024
    printf("%lld KB\n",kb); // print it

    // MB calculation
    mb = a * 1024; // takes a and multiplies it by 1024
    printf("%lld MB\n",mb); // print it
    
    return 0;
}
