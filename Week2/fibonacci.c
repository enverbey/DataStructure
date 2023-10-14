#include <stdio.h>

int	fibonacci_using_recursive(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);     
	if (index == 1)
		return (1);
	return (fibonacci_using_recursive(index - 2) + fibonacci_using_recursive(index - 1));
}

int fibonacci(int index) 
{
    int number1;
    int number2;
    int result;

    if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
    number1 = 0;
    number2 = 1;
    result = 0;
    while (index > 0)
    {
        result = number1 + number2;
        number2 = number1;
        number1 = result;
        index--;
    }
    return (result);
}

int main()
{
    int number;
    int result;

    number = 10;
    result = fibonacci_using_recursive(number);
    printf("The Fibonacci value of the number %d is %d\n", number, result);

    result = fibonacci(number);
    printf("The Fibonacci value of the number %d is %d\n", number, result);
}