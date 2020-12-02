#include "bst_calc.h"
#include <iostream>
#include <iomanip>

/*
* Pseudocode
* set min and max to first element avg to 0
* loop from i to tree_length
* if tree[i] > min min = tree[i]
* if tree[i] < max max = tree[i]
* add tree[i] to avg before dividing
* make avg avg/tree length 
* print min max and avg
*/
void bstCalc(int tree[], int tree_length)
{
  int min = tree[0];
  int max = tree[0];
  double avg_before = 0;
  double avg_after = 0;
  for(int i = 0; i < tree_length; i++)
  {
    if(tree[i] < min)
      min = tree[i];
    if(tree[i] > max)
      max = tree[i];
    avg_before += tree[i];
  }
  avg_after = avg_before / tree_length;
  std::cout << "min = " << min << std::endl << "max = " << max << std::endl << "avg = " << std::fixed << std::setprecision(2) << avg_after << std::endl;
}