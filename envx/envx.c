#include <stdio.h>
#include <string.h>
#include "mylib.h"

int main(int argc, char* argv[])
{
	char * arg1env = argv[1];
	myenv(arg1env);
}
