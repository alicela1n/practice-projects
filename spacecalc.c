#include <stdio.h>
#include <stdlib.h>

// This program takes a number in GB and turns it into KB, MB, and B
// main function
int main(int argc, char *argv[]) {
    long long a;
    long long gb;
    long long mb;
    long long kb;
    long long b;
    
    // Get values
    a = atoi(argv[1]);
    
    // B calculation
    b = a * 1024 * 1024 * 1024; // takes a number and multiplies it three times by 1024
    printf("%lld B\n",b);
    
    // KB calculation
    kb = a * 1024 * 1024; // takes a number and multiplies it twice by 1024
    printf("%lld KB\n",kb);

    // MB calculation
    mb = a * 1024; // takes a and multiplies it by 1024
    printf("%lld MB\n",mb);
    
    return 0;
}
