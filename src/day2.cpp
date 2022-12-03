#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>

int scoreCalculator(std::string gameState) {
    int score = 0;
    if (gameState == "A X") {
        return 4;
    }
    else if (gameState == "A Y") {
        return 8;
    }
    else if (gameState == "A Z") {
        return 3;
    }
    else if (gameState == "B X") {
        return 1;
    }
    else if (gameState == "B Y") {
        return 5;
    }
    else if (gameState == "B Z") {
        return 9;
    }
        else if (gameState == "C X") {
        return 7;
    }
    else if (gameState == "C Y") {
        return 2;
    }
    else if (gameState == "C Z") {
        return 6;
    }
    return 0;
}

int scoreCalculatorV2(std::string gameState) {
    int score = 0;
    if (gameState == "A X") {
        return 3;
    }
    else if (gameState == "A Y") {
        return 4;
    }
    else if (gameState == "A Z") {
        return 8;
    }
    else if (gameState == "B X") {
        return 1;
    }
    else if (gameState == "B Y") {
        return 5;
    }
    else if (gameState == "B Z") {
        return 9;
    }
        else if (gameState == "C X") {
        return 2;
    }
    else if (gameState == "C Y") {
        return 6;
    }
    else if (gameState == "C Z") {
        return 7;
    }
    return 0;
}

int main() {
    std::string line;
    std::ifstream input("input.txt");
    int totalScore = 0;
    int partTwo = 0;
    while(!input.eof()) {
        getline(input, line);
        totalScore += scoreCalculator(line);
        partTwo += scoreCalculatorV2(line);
    }
    std::cout << "Part One: " << totalScore << "\n";
    std::cout << "Part Two: " << partTwo << "\n";
    return 0;
}
