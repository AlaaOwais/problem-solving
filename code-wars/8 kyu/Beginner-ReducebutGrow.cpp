#include <vector>
int grow(std::vector<int> nums) {
  int m = 1 ;
  for (int i =0 ; i < nums.size() ; i++)
    {
      m *= nums[i];
  }
  return m;
}