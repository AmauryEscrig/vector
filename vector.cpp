#include <iostream>
#include <vector> 


void deduplicate(std::vector <int> vec)
{
  std::vector <int> Output;
  int length = 0;
  int count = 0; 
  
  for (int elements: vec)
  {
    length++;
  }

  for (int i = length - 1; i --> 0;)
  {
    if ( vec.at(i) != Output.at(count) )
    {
      Output.push_back(vec.at(i));
    }   
  }
}

int main()
{
  std::vector <int> TempInput;
  
  std::cout << "Enter the vector elements: ";
  std::cin >> TempInput;
  std::cout << "The deduplicated vector is: " << deduplicate(TempInput);
  return 0;
}