#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  if (input.empty())                      // .empty() to test null in any iterable object
    return {};                            // you can create empty array this way
  int countPositives{0}, sumNegatives{0}; // double variable declaration with "{}" instead of "="
  for (int x : input)                     // simplification of for loop
    x > 0 ? countPositives++ : (x != 0 ? sumNegatives += x : 0);
  return {countPositives, sumNegatives}; // you can create noname array with variables this way
}