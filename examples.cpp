#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  if (input.empty())                      // .empty() to test null
    return {};                            // you can create empty array this way
  int countPositives{0}, sumNegatives{0}; // double variable declaration
  for (int x : input)                     // simplification of for loop
    x > 0
        ? countPositives++ // array with one integer can be modified directly
        : (x != 0 ? sumNegatives += x : 0);
  return {countPositives, sumNegatives}; // you can create noname array with variables this way
}