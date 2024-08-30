#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  if (input.empty())                      // .empty() to test null in any iterable object
    return {};                            // you can create empty array this way
  int countPositives{0}, sumNegatives{0}; // double variable declaration with "{}" instead of "="
  for (int x : input)                     // simplification of the for loop
    x > 0 ? countPositives++ : (x != 0 ? sumNegatives += x : 0);
  return {countPositives, sumNegatives}; // you can create noname array with variables this way
}

char getChar(int i) // returns integer as ASCII  character
{
  return i;
}

// you can "#define" pretty much everything including emojis, and it will work even if IDE shows errors
#define 😂 a % 2
#define 🍆 a * 9
#define 💦 a * 8

int simpleMultiplication(int a) {
    return 😂 ? 🍆 : 💦;
}

