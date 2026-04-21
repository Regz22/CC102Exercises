#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream inFile("original.txt");
    if (!inFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    vector<string> words;
    string line;
    while (getline(inFile, line)) {
        words.push_back(line);
    }
    inFile.close();

    sort(words.begin(), words.end());

    ofstream sortedFile("sorted.txt");
    if (!sortedFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    for (int i = 0; i < words.size(); i++) {
        sortedFile << words[i] << endl;
    }
    sortedFile.close();

    cout<<"Sorted Success!";
    return 0;
}
