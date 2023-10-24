void print_number(int n) {
    // Check if the number is negative.
    if (n < 0) {
        // Print a minus sign.
        _putchar('-');
        // Convert the number to positive so we can print its digits.
        n *= -1;
    }

    // Print the digits of the number, one by one.
    do {
        // Get the rightmost digit of the number.
        int digit = n % 10;

        // Convert the digit to ASCII and print it.
        _putchar(digit + '0');

        // Divide the number by 10 to remove the rightmost digit.
        n /= 10;
    } while (n > 0);
}

