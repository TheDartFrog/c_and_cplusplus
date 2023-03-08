#include <iostream>
#include <random>


int main() {
    using namespace std;
    /////////////////////////////
    cout << "Welcome to the Guess the Number game!\nYour task is to guess the random number from the range 1 to 10.\n";
    auto guessedNumber = int();
    auto generatedNumber = int();

    random_device randDev {};
    default_random_engine rngEng {randDev()};
    uniform_int_distribution randomRange {1, 10};
    generatedNumber = randomRange(rngEng) ;

    while (generatedNumber != guessedNumber)
    {
        cout << "Try guessing a number:\n";
        cin >> guessedNumber;

        if (guessedNumber>generatedNumber) {cout<<"Guessed too high, try a lower number!\n";}
        else if (guessedNumber<generatedNumber) {cout<<"Guessed too low, try a higher number!\n";}
        else {cout << "Congratulations, you guessed it! The number was " << generatedNumber << ".\n";}
    }


    return 0;
}
