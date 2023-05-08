#include "parse.hh"

using namespace std;

/* b_s function return the position of first found target */ 
/* or return the position of first bigger than target  */
int b_s(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size();

    /* r equal array size so l and l+(r-l)/2 will never out of bounds */ 
    while (l < r) {
        int mid = l+(r-l)/2;
        if (nums[mid] < target)
         /* mid will always near l so when nums[mid] < target we need to add one to avoid getting caught in a loop */ 
            l = mid+1;
        else if (nums[mid] > target) 
            /* ensure nums[r] bigger than or equal target */
            r = mid;
        else 
            return mid;
    }

    return r;
}
