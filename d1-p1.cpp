#include <iostream>
#include<bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("d1-p1-input.txt");
    if (!file.is_open()) { 
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    vector<int> a;
    vector<int> b;

    string line;
    while (getline(file, line)) {
        istringstream iss(line); // Create a string stream to parse the line
        int num1, num2;

        if (iss >> num1 >> num2) { // Extract the two integers
            a.push_back(num1);
            b.push_back(num2);
        } else {
            cerr << "Error: Could not parse line: " << line << endl;
        }
    }

    file.close(); 

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int n = a.size();
    int diff = 0;
    for(int i = 0;i < n;i++){
        diff += abs(a[i] - b[i]);
    }
    cout<<diff;
    return 0;
}
