#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    
    char playAgain = 'y';
    
    while (playAgain == 'y' || playAgain == 'Y') {
        // Generate target number between 1-100
        int targetNumber = (rand() % 100) + 1;
        int guess = 0;
        int attempts = 0;
        
        cout << "\n========================================" << endl;
        cout << "   Welcome to the Number Guessing Game!" << endl;
        cout << "========================================" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;
        cout << "Can you guess what it is?" << endl;
        cout << "----------------------------------------" << endl;
        
        // Game loop
        while (guess != targetNumber) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;
            
            // Validate input
            if (guess < 1 || guess > 100) {
                cout << "Please enter a number between 1 and 100!" << endl;
                continue;
            }
            
            // Provide conditional hints
            if (guess < targetNumber) {
                cout << ">> Too Low! Try a higher number." << endl;
            } else if (guess > targetNumber) {
                cout << ">> Too High! Try a lower number." << endl;
            } else {
                cout << "\n*** CORRECT! You found the number! ***" << endl;
            }
        }
        
        // Display final score
        cout << "\n========================================" << endl;
        cout << "            GAME OVER - FINAL SCORE" << endl;
        cout << "========================================" << endl;
        cout << "The number was: " << targetNumber << endl;
        cout << "Total attempts: " << attempts << endl;
        
        // Score evaluation
        if (attempts <= 5) {
            cout << "Excellent! You're a guessing master!" << endl;
        } else if (attempts <= 10) {
            cout << "Good job! Nice guessing skills." << endl;
        } else if (attempts <= 15) {
            cout << "Not bad! You got there eventually." << endl;
        } else {
            cout << "Keep practicing to improve your skills!" << endl;
        }
        cout << "========================================" << endl;
        
        // Replay option
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    }
    
    cout << "\nThanks for playing! Goodbye!" << endl;
    
    return 0;
}
