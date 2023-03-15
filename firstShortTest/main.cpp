#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    using namespace std;

    auto sortedOutput = bool();

    auto vectorOne = vector<int>();
    auto vectorTwo = vector<int>();

    //vectorOne = {1, 2, 3, 4, 5};
    //vectorTwo = {1, 2, 5, 9, 10};



    //std::cout << "Hello, World!" << std::endl;

    sortedOutput = IsSortedOrNot(vectorOne, vectorTwo);

    return 0;
}

bool IsSortedOrNot(std::vector<int> firstVector, std::vector<int> secondVector)
{
 using namespace std;

 auto isSorted = bool();
 isSorted = false;

 vector<int> sortedFirstVector = ranges::sort(firstVector);
 vector<int> sortedSecondVector = ranges::sort(secondVector);

 if(sortedFirstVector == firstVector && sortedSecondVector == secondVector)
 {
     isSorted = true;
 } else if (sortedFirstVector != firstVector && secondVector != sortedSecondVector)
 {

     isSorted = true;

 }

 return isSorted;

}