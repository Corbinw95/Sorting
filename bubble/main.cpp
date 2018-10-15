#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include "bubble.hpp"

int main(){
  int dataSetSize = 10;
  std::vector<int> unsorted;

  //create unsorted integers by generating random numbers
  srand(time(0));
  for(int i = 0; i < dataSetSize; i++ ){
    unsorted.push_back(rand());
    std::cout << "instered: " << unsorted.at(i) << std::endl;

  }

  bubble bsort(unsorted);
  bsort.sort();
  bsort.print();
  return 0;
}
