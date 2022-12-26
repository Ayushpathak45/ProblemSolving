// C# implementation for the above approach
using System;

class GFG{

static int factorial(int N)
{
	if (N == 1)
	{
		return 1;
	}
	
	// Recursive Call
	return N * factorial(N - 1);
}


static int SeriesSum(int N)
{
	
	// Stores Required Sum
	int Sum = 0;

	
	for(int i = 1; i <= N; i++)
	{
		
		// Factorial of cur integer
		int fact = factorial(i);

		// Stores the sign
		int sign = fact;

		
		if (i % 2 == 0)
		{
			sign = sign * -1;
		}

		// Adding value in sum
		Sum += sign;
	}

	// Return Answer
	return Sum;
}

// Driver Code
public static void Main()
{
	int N = 6;
	
	Console.Write(SeriesSum(N));
}
}

