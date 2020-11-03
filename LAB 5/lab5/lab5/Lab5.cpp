/*Ian sitienei
C++ Fall 2020
Due Noveomber 2 2020
Lab 5 Number geussing game
Description:Writting a number-guessing game where the computer selects a random number in a range of 0 to 100
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void) {
    srand(time_t(NULL));

    while (true) {
        int numberGuess = rand() % 99 + 2;
        int guessVal;
        int initialTrial = 0;
        char FinalAnswer;

        while (true) {
            std::cout << "ENTER NUMBER BETWEEN 1 AND 100 ("
                << 20 - initialTrial << "Tries left): ";
            std::cin >> guessVal;
            std::cin.ignore();

            //CHECK IF ALL TRIES HAVE BEEN EXHAUSTED
            if (initialTrial >= 20) {
                break;
            }

            // CHECK IF GUESS FALLS IN RANGE
            if (guessVal > numberGuess) {
                std::cout << "INCORRECT,YOU LOSE.\n";
            }
            else if (guessVal < numberGuess) {
                std::cout << "INCORRECT,YOU LOSE.\n";

            }
            else {
                break;
            }
            //INCREMENT TRIES IF NO NUMBER FOUND
            initialTrial++;
        }

        // CHECK FOR TRIES
        if (initialTrial >= 20) {
            std::cout << "YOU RAN OUT OF TRIES! \n\n";
        }
        else {
            std::cout << "CONGRATULATIONS!!" << std::endl;
            std::cout << "YOU GOT THE RIGHT NUMBER GUESS IN "
                << initialTrial << " Tries!\n";
        }

        while (true) {
            // GET INPUT FROM THE USER WHETHER THEY WANT TO TRY AGAIN OR NOT.
            std::cout << "WOULD YOU LIKE TO PLAY AGAIN (Y/N) ?";
            std::cin >> FinalAnswer;
            std::cin.ignore();

            // CHECK IF PROPER RESPONSE
            if (FinalAnswer == 'n' || FinalAnswer == 'N' || FinalAnswer == 'Y' || FinalAnswer == 'y') {
                break;
            }
            else {
                std::cout << "PLEASE ENTER \'Y\' OR \'N\'...\n";
            }

        }

        //CHECK USERS INPUT AND RUN AGAIN OR EXIT
        if (FinalAnswer == 'n' || FinalAnswer == 'N') {
            std::cout << "THANK YOU FOR PLAYING!";
            break;
        }
        else {
            std::cout << "\n\n";
        }

        // SAFELY EXIT.
        std::cout << "\n\\ ENTER ANYTHING TO EXIT...";
        std::cin.ignore();
        return 0;
    }
}