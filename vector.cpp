#include <iostream>
#include <vector> 


void deduplicate(vector <int> vec)
{
  vector <int> Output;
  int length = 0;
  int count = 0; 
  
  for (int elements: TempInput)
  {
    length++;
  }

  for (int i = length - 1; i --> 0;)
  {
    if ( TempInput.at(i) != Output.at(count) )
    {
      Output.push_back(TempInput.at(i));
    }   
  }

  std::cout << Output;  

}

int main()
{
  vector <int> TempInput;
  
  std::cout << "Enter the vector elements: ";
  std::cin >> TempInput;
  std::cout << "The deduplicated vector is: " << deduplicate(TempInput);
  return 0;
}
