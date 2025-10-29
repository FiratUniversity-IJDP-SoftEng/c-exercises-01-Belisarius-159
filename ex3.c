//Hello World, my name is Yusuf ORAL and this is my "c" exercise for YMT113 class
//I use libraries for functions i will need
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string pet = "cat";
    string say = get_string("Do you have dog or cat?\n");

    if (say == pet)
    {
        printf("meow\n");
    }
    else
    {
        printf("woof\n");
    }
    return 0;
}
//Code is malfunctioning and I don't know how to fix.
//I would like to take your advise on that in your free time sir.


