#include <iostream>
#include "bst_validator.h"

int main()
{
  std::string tree_string;
    int tree[100];
    int tree_idx = 0;
    getline(std::cin, tree_string);
    int size = tree_string.size();
    for(int i = 0; i < size+1; i++)
    {
        std::string piece = "";
        if(tree_string[i] != ' ' && tree_string[i] != '\0')
            while(tree_string[i] != ' ' && tree_string[i] != '\0')
            {
                piece.push_back(tree_string[i]);
                i++;
            }
        tree[tree_idx] = stoi(piece);
        tree_idx++;
    }
    
    /*for(int i = 0; i < tree_idx; i++)
    {
        std::cout << tree[i] << " ";
    }
    std::cout << std::endl;*/
    
    bstValidator(tree, 5);
  /*int my_arr[8] = {10,5,15,2,7,11,25,1};
  int size = sizeof(my_arr) / sizeof(my_arr[0]);
  std::string tree_string;
  int tree[size];
  getline(std::cin, tree_string);
  for(int i = 0; i < tree_string.size(); i++)
  {
    int j = i+1;
    if(tree_string[i] != ' ' && tree_string[i] != '\0')
    {
      std::string want;
      char piece;
      while(tree_string[j] != ' ' && tree_string[i] != '\0')
      {
        piece = tree_string[j];
        want.push_back(piece);
        j++;
      }
      //tree[i] = stoi(want);
      std::cout << tree[i] << std::endl;
    }
      
  }

  
  


  //bstValidator(my_arr, size);
  int size = sizeof(my_arr)/sizeof(my_arr[0]);
  std::cout << "HEllo. ";
  if(bstValidator(my_arr, size) == true)
    std::cout << "Valid bst" << std::endl;
  else
    std::cout << "Not a valid bst" << std::endl;*/
}