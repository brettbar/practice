#include <iostream>
#include <vector>
#include <math.h>

// VERY EASY
bool lessThan100(int, int);
int howManySeconds(int);
int nextEdge(int, int);

// MEDIUM
std::string censor(std::string);
int letterCounter(std::vector<std::vector<char>>, char);
int mySub(int, int);
int solveForExp(int, int);
int calculator(int, char, int);

int main()
{
  // ===========================================================
  // <VERY EASY>
  // std::cout << lessThan100(22, 15) << std::endl;
  // std::cout << lessThan100(83, 34) << std::endl;

  // std::cout << howManySeconds(2) << std::endl;
  // std::cout << howManySeconds(10) << std::endl;
  // std::cout << howManySeconds(24) << std::endl;

  // std::cout << nextEdge(8, 10) << std::endl;
  // std::cout << nextEdge(5, 7) << std::endl;
  // std::cout << nextEdge(9, 2) << std::endl;
  // </VERY EASY>
  // ===========================================================
  // <MEDIUM>
  // std::cout << censor("The code is fourty") << std::endl;
  // std::cout << censor("Two plus three is five") << std::endl;
  // std::cout << censor("aaaa aaaaa 1234 12345") << std::endl;

  // std::cout << letterCounter({
  // {'D', 'E', 'Y', 'H', 'A', 'D'},
  // {'C', 'B', 'Z', 'Y', 'J', 'K'},
  // {'D', 'B', 'C', 'A', 'M', 'N'},
  // {'F', 'G', 'G', 'R', 'S', 'R'},
  // {'V', 'X', 'H', 'A', 'S', 'S'}
  // }, 'D') << std::endl;
  // std::cout << letterCounter({
  // {'D', 'E', 'Y', 'H', 'A', 'D'},
  // {'C', 'B', 'Z', 'Y', 'J', 'K'},
  // {'D', 'B', 'C', 'A', 'M', 'N'},
  // {'F', 'G', 'G', 'R', 'S', 'R'},
  // {'V', 'X', 'H', 'A', 'S', 'S'}
  // }, 'H') << std::endl;

  // std::cout << mySub(5, 9) << std::endl;
  // std::cout << mySub(10, 30) << std::endl;
  // std::cout << mySub(0, 0) << std::endl;

  // std::cout << solveForExp(4, 1024) << std::endl;
  // std::cout << solveForExp(2, 1024) << std::endl;
  // std::cout << solveForExp(9, 3486784401) << std::endl;

  std::cout << calculator(2, '+', 2) << std::endl;
  std::cout << calculator(2, '*', 2) << std::endl;
  std::cout << calculator(4, '/', 2) << std::endl;

  // </MEDIUM>
  // ===========================================================

  return 0;
}

// Given two numbers, return true if the sum of both numbers is less than 100. Otherwise return false.
bool lessThan100(int a, int b)
{
  return (a+b) < 100;
}

// Write a function that converts hours into seconds.
int howManySeconds(int hours)
{
  return hours * 60 * 60;
}

// Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.
int nextEdge (int side1, int side2)
{
  return (side1 + side2) - 1;
}

// Create a function that takes a string and censors words over four characters with *.
std::string censor(std::string str)
{
  std::vector<std::string> words = {};
  std::string new_word = "";
  std::string new_str = "";

  std::cout << str << std::endl;
  for (int i = 0; i < str.length()+1; i++)
  { 
    if (str[i] == ' ' || str[i] == '\0')
    {
      words.push_back(new_word);
      new_word = "";      
    }
    else
    {
      new_word += str[i];
    }
  }
  
  for (int j = 0; j < words.size(); j++)
  {
    if (words[j].length() > 4)
    {
      for (int k = 0; k < words[j].length(); k++)
      {
        words[j][k] = '*';
      }
    }
    new_str.append(words[j]);
    new_str.append(" ");
  }
  new_str.pop_back();
  return new_str;
}

// Create a function that counts the number of times a particular letter shows up in the word search.
int letterCounter(std::vector<std::vector<char>> arr, char c) 
{
  int times = 0;
	for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      if (arr[i][j] == c)
      {
        times++;
      }
    }
  }
  return times;
}

// Create a function that subtracts one positive integer from another, without using -.
int mySub(int a, int b)
{
  return (b + ~a) + 1;
}

// Create a function that takes a number a and finds the missing exponent x so that a when raised to the power of x is equal to b.
int solveForExp(int a, int b)
{
  return (int)(log(b) / log(a));
}

// Create a function that takes two numbers and a mathematical operator + - / * and will perform a calculation with the given numbers.
int calculator(int num1, char op, int num2)
{
  switch (op)
  {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      if (num2 == 0)
        return 0;
      else 
        return num1 / num2;    
    default:
      return 0;
  }
}