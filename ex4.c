//Hello World, my name is Yusuf ORAL and this is my "c" exercise for YMT113 class
//I use libraries for functions i will need
#include <stdio.h>
#include <cs50.h>

int main(void) //This is my main function
{
    int result = 2; //I declare the first number

    while (result <= 10) //I am using a loop to repeat addition until I have 10
    {
        printf("%d\n", result);
        result = result + 2; //Increment by 2
    }

    return 0;
}

