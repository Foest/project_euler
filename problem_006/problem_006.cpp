/*
Worked on by HFW
Project Euler
Problem 6

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <math.h>
#include <iostream>

long solution_1(long num)
{
  long a = (num * (num + 1) * (2 * num + 1)) / 6;
  long b = pow((num * (num + 1) / 2), 2);
  long result = b - a;

  std::cout << "Sum of the squares of the first " << num << " numbers: " << a << std::endl;
  std::cout << "Square of the sum of the first " << num << " numbers: " << b << std::endl;
  std::cout << "Difference: " << result << std::endl;
}

int main()
{
  solution_1(100);
  return 0;
}
