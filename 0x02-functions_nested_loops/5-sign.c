#include <limits.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        } 
        else if (n == 0)
        {
                _putchar('0');
                return (0);
        } 
        else if (n < 0)
        {
                _putchar('-');
                return (-1);
        }
        
        return (0); /* Add a default return statement here */
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        int r;

        r = print_sign(98);
        if (r < 0)
                r *= -1;
        _putchar(r + '0');
        _putchar('\n');
        return (0);
}
