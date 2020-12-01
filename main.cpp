#include <iostream>
#include "bst_validator.h"

int main()
{
  int my_arr[8] = {10,5,15,2,7,11,25,1};
  int size = sizeof(my_arr)/sizeof(my_arr[0]);
  std::cout << "HEllo. ";
  if(bstValidator(my_arr, size) == true)
    std::cout << "Valid bst" << std::endl;
  else
    std::cout << "Not a valid bst" << std::endl;
}