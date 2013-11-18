/*
Worked on by HFW
Project Euler
Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

long gcd(long a, long b)
{
  long temp;
  while(b)
  {
    temp = a;
    a = b;
    b = temp % a;
  }
  return a;
}

long solution_1(long num)
{
  long acc = num;
  for(long i = num - 1; i > 1; i--)
  {
    acc = (acc * i) / gcd(acc, i);
  }
  return acc;
}


int main()
{
  std::cout << solution_1(20) << std::endl;
  return 0;
}
