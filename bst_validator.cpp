#include "bst_validator.h"
#include <iostream>

/*bool bstValidator(int tree[], int tree_length)
{
  std::cout << tree_length;
  for(int i = 0; i < tree_length; i++)
  {
    int li = 2*i+1;
    int ri = 2*i+2;
    if((li <= i && ri <= i) && (tree[i] < tree[li] || tree[i] > tree[ri]))
    {
      std::cout << "False" << std::endl;
      return false;
  }
  return true;
  std::cout << "True" << std::endl;
}*/

bool bstValidatorNew()
{
  
  int tree_length = 0;
  int element;
  int arr[256];
  while(std::cin)
  {
    std::cin >> element;
    arr[tree_length] = element;
    tree_length++;
  }
  int tree[tree_length];
  for(int i = 0; i < tree_length; i++)
  {
    tree[i] = arr[i];
  }
  std::cout << "Length: "<< tree_length << std::endl;
  for(int i = 0; i < tree_length; i++)
  {
    int li = 2*i+1;
    int ri = 2*i+2;
    if((li <= i && ri <= i) && (tree[i] < tree[li] || tree[i] > tree[ri]))
    {
      std::cout << "False" << std::endl;
      return false;
  }
  return true;
  std::cout << "True" << std::endl;
  }
}