#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("color.txt");
    if (!inFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    ofstream copyFile("color_copy.txt");
    if (!copyFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        copyFile << line << endl;
    }

    inFile.close();
    copyFile.close();

    return 0;
}
