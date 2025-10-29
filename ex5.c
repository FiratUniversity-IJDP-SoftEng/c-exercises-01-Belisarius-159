//Hello World, my name is Yusuf ORAL and this is my "c" exercise for YMT113 class
//I use libraries for functions i will need
#include <stdio.h>
#include <cs50.h>

int main(void) //This is my main function
{
	string answer = get_string("What is your name?\n ");  //I ask customers name
	printf("Hello %s\n", answer); //We greet the customer
}
