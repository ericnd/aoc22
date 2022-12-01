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
            cal.push_back(num);
            num = 0;
        } else num += stoi(line);
    }

    int len = cal.size() - 1;
    sort(cal.begin(), cal.end());
    int topThree = cal[len] + cal[len - 1] + cal[len - 2];
    int largest = cal[len];
    
    cout << "Largest: " << largest << "\n";
    cout << "Top 3: " << topThree << "\n";
    input.close();
    return 0;
}