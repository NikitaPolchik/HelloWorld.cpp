#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void showEmpty(std::vector<int> input)
{
  if (input.empty())
  {
    cout << "Empty";
  }
  else
  {
    cout << "there is something";
  }
}

int main()
{
  std::vector<int> input = {};
  showEmpty(input);

  return 0;
}