#include "bst_calc.h"
#include <iostream>
#include <iomanip>

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