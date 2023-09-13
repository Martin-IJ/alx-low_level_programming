#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    unsigned long int a = 1;  // First Fibonacci number
    unsigned long int b = 2;  // Second Fibonacci number
    unsigned long int next;   // Next Fibonacci number
    int count;

    printf("%lu, %lu", a, b);  // Print the first two Fibonacci numbers

    for (count = 2; count < 98; count++)
    {
        next = a + b;  // Calculate the next Fibonacci number
        printf(", %lu", next);  // Print the next Fibonacci number
        a = b;  // Update the first number
        b = next;  // Update the second number
    }

    printf("\n");

    return (0);
}
