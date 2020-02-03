#include <iostream>
#include <vector>

bool lessThan100(int, int);
std::string censor(std::string);
int howManySeconds(int);
int nextEdge(int, int);
int letterCounter(std::vector<std::vector<char>>, char);

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

int letterCounter(std::vector<std::vector<char>> arr, char c) 
{
  int times = 0;
	for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i][0] == c)
    {
      times++;
    }
  }
  return times;
}