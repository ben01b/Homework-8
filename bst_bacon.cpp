#include "bst_bacon.h"
#include <iostream>

/*
* Pseudocode
* read in value to find 
* loop until tree tree length 
* if tree[i] == to find 
* print depth and path then break
* else if to find is less than tree[i]
* increase depth by one and set i to 2i+1
* store tree[i] in tree path
* else if to find greater than tree[i]
* increase depth by one and set i to 2i+2
* store tree[i] in tree path
*/
void bstDepth(int tree[], int tree_length)
{
  int to_find;
  int tree_path[tree_length];
  int depth = 0;
  int i = 0;
  int tree_path_cnt = 1;
  std::cin >> to_find;
  tree_path[0] = tree[0];
  while(i < tree_length)
  {
    if(to_find == tree[i])
    {
        std::cout << "depth = " << depth << std::endl;
        for(int i = 0; i < tree_path_cnt; i++)
            std::cout << tree_path[i] << " ";
        std::cout << std::endl;
        break;
    }
    else if(to_find < tree[i])
    {
      depth++;
      i = 2 * i + 1;
      tree_path[tree_path_cnt] = tree[i];
      tree_path_cnt++;
    }
    else if(to_find > tree[i])
    {
      depth++;
      i = 2 * i + 2;
      tree_path[tree_path_cnt] = tree[i];
      tree_path_cnt++;
    }
  }
}