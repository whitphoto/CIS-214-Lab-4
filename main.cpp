#include <cstdlib>
#include <iostream>
#include "string.h"

using namespace std;

int main(int argc, char * argv[])

{
	String str(String::getInstance("Instance1"));
	str.displayString();
	system("PAUSE");
	return EXIT_SUCCESS;
}
