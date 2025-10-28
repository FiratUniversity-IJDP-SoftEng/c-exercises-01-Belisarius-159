//Hello World, my name is Yusuf ORAL and this is my "c" exercise for YMT113 class
//I use libraries for functions i will need
#include <stdio.h>
#include <cs50.h>

int main(void) //This is my main function
{
    //We will ask the user to guess a number between 1 and 5
    int number = 3;
    int guess = get_int("guess a number between 1 and 5\n ");

    if (guess == number) //We will check the answer and respond to user
    {
        printf("You won, great job\n");
    }

    else
    {
        printf("Try Again\n");
    }
    return 0; //And we go back to beginning
}
//PS: This code is 90% Human and 10% AI. I am sorry but i really needed help for debugging


