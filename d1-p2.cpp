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
    unordered_map<int, int> mp;

    string line;
    while (getline(file, line)) {
        istringstream iss(line); // Create a string stream to parse the line
        int num1, num2;

        if (iss >> num1 >> num2) { // Extract the two integers
            a.push_back(num1);
            mp[num2]++;
        } else {
            cerr << "Error: Could not parse line: " << line << endl;
        }
    }

    file.close(); 


    int n = a.size();
    int sim = 0;
    for(int i = 0;i < n;i++){
        sim += a[i] * mp[a[i]];
    }
    cout<<sim;
    return 0;
}
