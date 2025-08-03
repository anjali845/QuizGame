#include <iostream>
using namespace std;

int main() {
    string name;
    int score = 0;
    char answer;

    cout << "Welcome to the C++ Quiz Game!\n";
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nHi " << name << "! Let's begin the quiz \n\n";

    // Question 1
    cout << "Q1. What is the size of int in C++?\n";
    cout << "A. 2 Bytes\nB. 4 Bytes\nC. 8 Bytes\nD. Depends on compiler\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'D') score++;

    // Question 2
    cout << "\nQ2. Who developed C++?\n";
    cout << "A. Dennis Ritchie\nB. Bjarne Stroustrup\nC. James Gosling\nD. Guido van Rossum\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'B') score++;

    // Question 3
    cout << "\nQ3. Which of the following is a loop structure in C++?\n";
    cout << "A. if\nB. for\nC. switch\nD. break\n";
    cout << "Your answer: ";
    cin >> answer;
    if (toupper(answer) == 'B') score++;

    cout << "\n Quiz Completed, " << name << "! You scored: " << score << "/3\n";

    if (score == 3) cout << "You're a C++ Superstar!\n";
    else if (score == 2) cout << "Good job! Try for full marks next time \n";
    else cout << "Keep learning, you're doing great! \n";

    return 0;
}
