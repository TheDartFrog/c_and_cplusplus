#include <iostream>
#include <string>

int main() {
    using namespace std;
    /////////////////////////////////////////////

    auto name = string();

    cout << "Welcome user!\nPlease enter your name:";

    cin >> name;

    if (name == "Kenobi") {

        cout << "General Kenobi!";

    } else { cout << "Greetings!" ;}


    return 0;
}
