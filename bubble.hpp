#ifndef BUBBLE
#define BUBBLE

class bubble{
private:
std::vector<int> toSort;
public:
  bubble(std::vector<int> unsorted){toSort = unsorted;}
  std::vector<int> sort();
  void print(std::vector<int> sorted);
};
#endif
