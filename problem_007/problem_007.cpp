/*
Worked on by HFW
Project Euler
Problem 7

BY listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <math.h>
#include <iostream>
#include <list>

bool isPrime(int num)
{
  if(num < 2)
  {
    return false;
  }

  for(int i = 2; i <= sqrt(num); i++)
  {
    if(num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int solution_1(int num)
{
  std::list<int> primes;
  int counter = 2;
  while(primes.size() < num)
  {
    if(isPrime(counter))
    {
      primes.push_back(counter);
    }
    counter++;
  }
  return primes.back();
}

int main()
{
  std::cout << solution_1(10001) << std::endl;
  return 0;
}
