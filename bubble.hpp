#ifndef BUBBLE
#define BUBBLE

class bubble{
private:
std::vector<int> toSort;
public:
  bubble(std::vector<int> unsorted){toSort = unsorted;}
  void sort();
  void print();
};
#endif
