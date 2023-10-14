#include <stdio.h>
/*
Step 1 => We need to do it some control, in this stiation we have 3 option.
Number can be less then zero, number can be zero or one, and number can be more than one.

Why we control all of these situation.
1-) The factorial of numbers less then zero is not taken, so if incoming number is negative we return "-1" it means ERROR.
2-) 0! = 1! = 1 , if number is zero or one we return 1. Also this allows us to finish recursive(if n = 1).
3-) After the all control we can start to calculate number of factorial. 
Factorial , result = n * (n-1) * (n-2) ... (3) * (2) * (1);

*/
int get_factorial_using_recursive(int n)
{
    if (n < 0)          //If number is negation, we return -1 , -1 is means error.
        return (-1);
    if (n == 0 || n == 1)   //0! or 1! is 1, so we check that in this line.
        return (1);
    if (n > 1)
        return (n * get_factorial_using_recursive(n-1)); //We calculate factorial using recursive in this line.
}

int get_factorial(int n)
{
    int result;

    result = 1;
    if (n < 0)  //This is error condition.
        return (-1);
    while (n > 1)
    {
        result *= n;      //We calculate factorial using while loop.
        n--;
    }   
    return (result);    //In this line, we return the result.
}

int main()
{
    int number;
    int result;

    number = 5;
    result = get_factorial_using_recursive(number);  //In this line, we call the function that uses the recursive function to calculate the factorial.
    printf("%d! = %d\n", number, result);

    number = 5;
    result = get_factorial(number);     //In this line, we call the function that uses the while loop to calculate the factorial.
    printf("%d! = %d\n", number, result);
}