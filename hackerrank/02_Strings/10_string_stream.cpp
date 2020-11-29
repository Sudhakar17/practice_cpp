// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
#include <sstream>
#include <vector>
#include <iostream>
// using namespace std;

std::vector<int> parseInts(std::string str) {
	// Complete this function
    std::stringstream ss(str);
    std::vector<int> vectInt;
    int i;

    while(ss>>i)
    {
        vectInt.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }

    return vectInt;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}

