#include <stdio.h>
#include "student_code.h"
#include "autograder_c.h"

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		return autograde(argv[1]);
	}

	return 0;
}