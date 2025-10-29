//Hello World, my name is Yusuf ORAL and this is my "c" exercise for YMT113 class
//I use libraries for functions i will need
#include <stdio.h>
#include <cs50.h>

void say(int n); //This is my prototype function for the one in line 14

int main(void) //This is my main function
{
    int n = get_int("How old are you?\n"); //We ask customer for his/her age
    say(n); //And celebrate his/her birthday
}

void say(int n) //We create a custom function to keep things simple
{
    while (n > 0) //As long as customer is more than 0 years old our function will celebrate him/her
     {
        printf("Happy Birthday!\n");
        n--;
     }


}
//PS: I didn't need AI for this i debugged it by myself and i am proud of it

