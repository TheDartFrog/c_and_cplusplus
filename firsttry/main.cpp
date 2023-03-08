#include <iostream>
#include <string>
#include <algorithm>

//using namespace std; // WRONG! move into function Smile :) then it only affects the one function!

int main() {

    using namespace std; //import java.util.* :evil_imp:        no more std::cout, just cout :)

    auto word = std::string();

    cin >> word;
    cout << word[0] << '\n';
    cout << '\'' << word[word.size()-1]<<"'\n";
    std::cout << "\"" << word[word.size()/2]<<"\"\n";
    std::cout << "[" << word << "]\n";

    std::ranges::sort(word); //USE THE RIGHT TOOL FOR THE JOB! USE THE EXISTING TOOL, DON'T MAKE YOUR OWN!

    cout << word;

    return 0;
}
