// ============================================================
// CAPSTONE PROJECT: Number Guessing Game
// ============================================================
// This is it - your final project for cpp101, and it uses EVERY
// concept from lessons 1-12: variables, input/output, conditionals,
// loops, functions, and file I/O for saving your best score.
// You built all these pieces already. This is where they combine
// into something you can actually show off.
// ============================================================

#include <iostream>
#include <fstream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()

// Loads the best (fewest-guesses) score ever recorded, or a large
// default number if no high score file exists yet.
int loadBestScore() {
    std::ifstream file("highscore.txt");
    int best;
    if (file.is_open() && (file >> best)) {
        return best;
    }
    return 999; // no previous record
}

// Saves a new best score, overwriting the old one.
void saveBestScore(int attempts) {
    std::ofstream file("highscore.txt");
    file << attempts;
}

// Plays one round. Returns the number of guesses it took.
int playRound(int secret) {
    int guess;
    int attempts = 0;

    std::cout << "\nI'm thinking of a number between 1 and 100." << std::endl;

    while (true) {
        std::cout << "Your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secret) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secret) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "You got it in " << attempts << " guesses!" << std::endl;
            return attempts;
        }
    }
}

int main() {
    srand((unsigned int)time(0)); // seed randomness so numbers differ each run

    int best = loadBestScore();
    std::cout << "=== Number Guessing Game ===" << std::endl;
    if (best < 999) {
        std::cout << "Current best score: " << best << " guesses. Beat it!" << std::endl;
    }

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        int secret = rand() % 100 + 1; // random number 1-100
        int attempts = playRound(secret);

        if (attempts < best) {
            best = attempts;
            saveBestScore(best);
            std::cout << "New best score! Saved to highscore.txt" << std::endl;
        }

        std::cout << "\nPlay again? (y/n): ";
        std::cin >> playAgain;
    }

    std::cout << "\nThanks for playing! Best score ever: "
              << best << " guesses." << std::endl;
    return 0;
}

// ============================================================
// IDEAS TO MAKE THIS YOUR OWN (pick any - or all!)
// ============================================================
// 1. Add a limited number of attempts (e.g. 7), and print "Game
//    over" if the player runs out without guessing correctly.
// 2. Add difficulty levels: Easy (1-50), Medium (1-100), Hard (1-500).
// 3. Track total games played and win rate, save both to a file.
// 4. Keep a vector of every guess in the round and print it at
//    the end as a "guess history."
// 5. Big challenge: flip it around - YOU think of a number, and
//    have the computer guess it using binary search (from lesson
//    11) by asking you "higher or lower?" It'll almost always
//    win in 7 guesses or fewer. Can you figure out why 7?
// ============================================================
