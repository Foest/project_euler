/*
Worked on by HFW
Project Euler
Problem 4

A palindromic number reads the same both ways. The largest palindrome made
from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <list>

const int MAX_LENGTH = 7;

bool isPalindrome(int number)
{
  std::string str = std::to_string(number);
  int front = 0;
  int back = str.size() - 1;

  while(front < back)
  {
    if(str[front] != str[back])
    {
      return false;
    }
    front++;
    back--;
  }
  return true;
}

void solution_1()
{
  std::list<int> pals;
  for(int i = 999; i > 99; i--)
  {
    for(int j = i; j > 99; j--)
    {
      if(isPalindrome(i * j))
      {
        pals.push_back(i * j);
      }
    }
  }
    pals.sort();
    std::cout << pals.back() << std::endl;
}

int main()
{
  solution_1();
  return 0;
}
