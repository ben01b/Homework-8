#include "bst_validator.h"
#include <iostream>

/*
* Pseudocode
* for i to tree length 
* li = 2i+1 ri=2i+2
* if li>tree length or ri>tree length
* break
* else if tree[i] < tree[li] || tree[i] > tree
* [ri]
* print and return false
* if loop finishes print and return true
*/
bool bstValidator(int tree[], int tree_length)
{
  for(int i = 0; i < tree_length; i++)
    {
        int li = 2*i+1;
        int ri = 2*i+2;
        if(li > tree_length || ri > tree_length)
            break;
        else if((tree[i] < tree[li] || tree[i] > tree[ri]))
        {
            std::cout << "False" << std::endl;
            return false;
        }
    }
    std::cout << "True" << std::endl;
    return true;
}