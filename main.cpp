#include "c-echo.h"

int main(int argv, char** argc) //both int and char get passed through user input
{
// file named c-echo, but now function inside .h is named echo(); thus calling function from it.   (need to push)
	std::cout<< echo(argv, argc);
	std::cout<< "\n";
}

