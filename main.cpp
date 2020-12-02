#include <iostream>
#include "bst_validator.h"
#include "bst_calc.h"
#include "bst_bacon.h"

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
    
  bstValidator(tree, tree_idx);
  bstCalc(tree, tree_idx);
  bstDepth(tree, tree_idx);
}