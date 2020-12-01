#include "bst_validator.h"
#include <iostream>

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