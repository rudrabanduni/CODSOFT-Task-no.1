#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have generated a random number between 1 and 100." << std::endl;
    std::cout << "Try to guess it!" << std::endl;

    while (userGuess != randomNumber)
    {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        if (userGuess > randomNumber)
        {
            if (userGuess - randomNumber <= 5)
                std::cout << "You're close! Try a bit lower." << std::endl;
            else
                std::cout << "Too high! Try again." << std::endl;
        }
        else if (userGuess < randomNumber)
        {
            if (randomNumber - userGuess <= 5)
                std::cout << "You're close! Try a bit higher." << std::endl;
            else
                std::cout << "Too low! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You guessed the correct number!" << std::endl;
        }
    }
    return 0;
}
