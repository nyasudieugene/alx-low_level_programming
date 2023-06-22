#include <stdio.h>
#include <math.h>

int is_prime(long num)
{
    if (num < 2) {
        return 0;
    }

    long i;

    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

long largest_prime_factor(long num)
{
    long largest_factor = 0;
    long i;

    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0 && is_prime(i)) {
            largest_factor = i;
            while (num % i == 0) {
                num /= i;
            }
        }
    }

    if (num > largest_factor) {
        largest_factor = num;
    }

    return largest_factor;
}

int main(void)
{
    long number = 612852475143;
    long largest_prime = largest_prime_factor(number);

    printf("%ld\n", largest_prime);

    return 0;
}
