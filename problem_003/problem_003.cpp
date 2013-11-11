/*
Worked on by HFW
Project Euler
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/

#include <iostream>
#include <math.h>

bool isPrime(long number)
{
  long limit = sqrt(number);

  for(long i = 2; i <= limit; i++)
  {
    if(number % i == 0)
    {
      return false;
    }
  }
  return true;
}

long solution_1 (long number)
{
  long result = 2;
  long limit = number / 2;
  long temp = 0;
  long mod = 0;

  while(result <= limit)
  {
    temp = number / result;
    mod = number % temp;
    if((mod == 0) && isPrime(temp))
    {
      return temp;
    }
    result++;
  }
  return number;
}

int main()
{
  long number = 600851475143;
  long result = solution_1(number);
  std::cout << result << std::endl;
  return 0;
}
