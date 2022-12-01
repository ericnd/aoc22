#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> cal;
    string line;
    ifstream input("input.txt");

    int num = 0;
    while(!input.eof()) {
        getline(input, line);
        if (line == "") {
            // append the number
            cal.push_back(num);
            // set num back to zero
            num = 0;
        } else {
            num += stoi(line);
        } 

    }

    // getting the size of the vector
    int len = cal.size() - 1;
    // sorting the vector
    sort(cal.begin(), cal.end());

    // calculating sum of top 3
    int topThree = 0;
    for (int i = len; i > len - 3; i--) {
        topThree += cal[i];
        
    }
    
    cout << topThree << "\n";
    input.close();
    return 0;
}