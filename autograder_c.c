#include "autograder_c.h"
#include "student_code.h"
#include <stdio.h>
#include <string.h>

int autograde(char* str)
{
	int status = 1;

	if (0 == strcmp(str, "Test 0001")) //Test factorial
	{
		for (int i = 0; i < 11; i++)
		{
			if (testFactorial(i) == factorial(i))
			{
				status = 0;
			}
			else
			{
				status = 1;
				printf ("Test 0001 failed at %d\n", i);
				break;
			}
		}

		if (0 == status)
		{
			printf("Test 0001 passed\n");
		}
	}

	return status;
}

int testFactorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * testFactorial(n - 1);
	}
}