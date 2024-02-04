#include <iostream>
#include <cmath>



int main() {
    while (true) {
        
        float lapsRun, galStart, galRem;

        std::cout << "Laps run: ";
        std::cin >> lapsRun;

        std::cout << "Gallons start: ";
        std::cin >> galStart;

        std::cout << "Gallons remaining: ";
        std::cin >> galRem;

        float galUsed = galStart - galRem;
        float lapGal = (lapsRun / galUsed);
        float lapTank = (lapGal * galStart);

        std::cout << "Laps per gallon: " << lapGal << std::endl;
        std::cout << "Laps per Tank: " << lapTank << std::endl;

        std::cout << "Continue? y/n: ";
        char user_input;
        std::cin >> user_input;

        if (user_input != 'y' && user_input != 'Y') {
            std::cout << "Exiting..." << std::endl;
            break;  // Exit the loop
        }
    }

    return 0;
}

