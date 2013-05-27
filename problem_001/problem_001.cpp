/*
Worked on by HFW
Project Euler
Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int solution_1()
{
	int sum = 0;

	for(int i = 1; i < 1000; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	return sum;
}


int solution_2()
{
	int sum_mults_three = (999 / 3) * (999 / 3 + 1) / 2 * 3;
	int sum_mults_five = (999 / 5) * (999 / 5 + 1) / 2 * 5;
	int sum_mults_fifteen = (999 / 15) * (999 / 15 + 1) / 2 * 15;

	return sum_mults_three + sum_mults_five - sum_mults_fifteen;
}

int main()
{
	std::cout << "Project Euler Problem 1\n";
	std::cout << "Output from solution 1: " << solution_1() << '\n';
	std::cout << "Output from solution 2: " << solution_2() << '\n';
}
