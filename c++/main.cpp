#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

// EASY-MEDIUM PROBLEMS
bool lessThan100(int, int);
int howManySeconds(int);
int nextEdge(int, int);
std::string censor(std::string);
int letterCounter(std::vector<std::vector<char>>, char);
int mySub(int, int);
int solveForExp(int, int);
int calculator(int, char, int);
std::string doubleSwap(std::string, char, char);
bool isMiniSudoku(std::vector<std::vector<int>>);
std::string tweakLetters(std::string, std::vector<int>);

// HARD PROBLEMS
std::string longestSubstring(std::string);

int main()
{
  // ================================================================
  //                     EASY-MEDIUM PROBLEMS
  // ================================================================
  // std::cout << lessThan100(22, 15) << std::endl;
  // std::cout << lessThan100(83, 34) << std::endl;

  // std::cout << howManySeconds(2) << std::endl;
  // std::cout << howManySeconds(10) << std::endl;
  // std::cout << howManySeconds(24) << std::endl;

  // std::cout << nextEdge(8, 10) << std::endl;
  // std::cout << nextEdge(5, 7) << std::endl;
  // std::cout << nextEdge(9, 2) << std::endl;

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

  // std::cout << calculator(2, '+', 2) << std::endl;
  // std::cout << calculator(2, '*', 2) << std::endl;
  // std::cout << calculator(4, '/', 2) << std::endl;

  // std::cout << doubleSwap("aabbccc", 'a', 'b') << std::endl;
  // std::cout << doubleSwap("random w#rds writt&n h&r&", '#', '&') << std::endl;
  // std::cout << doubleSwap("128 895 556 788 999", '8', '9') << std::endl;

  // std::cout << isMiniSudoku({
	// 	{1, 3, 2}, 
	// 	{9, 7, 8}, 
	// 	{4, 5, 6}
	// }) << std::endl;
  // std::cout << isMiniSudoku({
	// 	{1, 3, 2}, 
	// 	{9, 0, 8}, 
	// 	{4, 5, 6}
	// }) << std::endl;
  // std::cout << isMiniSudoku({
	// 	{1, 1, 2}, 
	// 	{9, 7, 8}, 
	// 	{4, 5, 6}
	// }) << std::endl;
  // std::cout << isMiniSudoku({
	// 	{8, 9, 2}, 
	// 	{5, 6, 1}, 
	// 	{3, 7, 4}
	// }) << std::endl;

  // std::cout << tweakLetters("apple", {0, 1, -1, 0, -1}) << std::endl;
  // std::cout << tweakLetters("many", {0, 0, 0, -1}) << std::endl;
  // std::cout << tweakLetters("rhino", {1, 1, 1, 1, 1}) << std::endl;
  // std::cout << tweakLetters("xyz", {1, 1, 1}) << std::endl;
  // std::cout << tweakLetters("abc", {-1, -1, -1}) << std::endl;
  // ================================================================
  //                     /EASY-MEDIUM PROBLEMS
  // ================================================================

  // ================================================================
  //                     HARD PROBLEMS
  // ================================================================

  std::cout << longestSubstring("225424272163254474441338664823") << std::endl;
  std::cout << longestSubstring("594127169973391692147228678476") << std::endl;
  std::cout << longestSubstring("721449827599186159274227324466") << std::endl;


  // ================================================================
  //                     /HARD PROBLEMS
  // ================================================================
  return 0;
}

// EASY-MEDIUM PROBLEMS

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

// Write a function to replace all instances of character c1 with character c2 and vice versa.
std::string doubleSwap(std::string str, char c1, char c2)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == c1)
    {
      str[i] = c2;
    }
    else if (str[i] == c2)
    {
      str[i] = c1;
    }
  }
  return str;
}

// Create a function that checks to make sure this 3x3 square contains each number from 1-9 exactly once. 
// Make sure there are no duplicates, and no numbers outside this range.
bool isMiniSudoku(std::vector<std::vector<int>> square)
{ 
  std::vector<int> happened = {};
  // check each row for non valid numbers
  for (int i = 0; i < square.size(); i++)
  {
    for (int j = 0; j < square[i].size(); j++)
    {
      if ((square[i][j] > 9) || (square[i][j] < 1))
      {
        return false;
      }
      // if the number has already happened in the row
      if (std::find(happened.begin(), happened.end(), square[i][j]) != happened.end())
      {
        return false;
      }
      else
      {
        happened.push_back(square[i][j]);
      }
    }
  }
  return true;
}

// Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.
std::string tweakLetters(std::string s, std::vector<int> arr)
{
	for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'z' && arr[i] == 1)
    {
      s[i] = 'a';
    }
    else if (s[i] == 'a' && arr[i] == -1)
    {
      s[i] = 'z';
    }
    else
    {
      s[i] += arr[i];
    }    
  }
  return s;
}

// HARD PROBLEMS

// Given a string of digits, return the longest substring with alternating odd/even or even/odd digits. 
// If two or more substrings have the same length, return the substring that occurs first.
/**
 * 1. What am I given and what is the problem asking for (inputs & outputs)
 * 2. Visualize the problem if necessary
 * 3. Solve the problem by hand
 * 4. Implement a brute-force solution
 * 5. Consider edge cases
 * 6. Check for time complexity, optimize if possible
*/

std::string longestSubstring(std::string digits)
{

}