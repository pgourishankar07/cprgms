#include <algorithm>  // for sort
#include <vector>     // for vector

int main() {
    std::vector<int> v = {3, 5, 1, 4, 2};

    // sort the elements in ascending order
    std::sort(v.begin(), v.end());

    // v is now {1, 2, 3, 4, 5}

    return 0;
}