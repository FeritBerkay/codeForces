#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore(); // Ignore the newline after the number input
    for (int i = 0; i < t; i++) {
        std::string temp;
        std::getline(std::cin, temp);
        char tempC;
        std::cin >> tempC;
        std::cin.ignore(); // Ignore the newline after the char input

        std::map<char, std::vector<int>> mapV;
        for (int j = 0; j < temp.size(); j++) {
            mapV[temp[j]].push_back(j);
        }

        if (mapV.find(tempC) != mapV.end()) {
            bool found = false;
            for (int val : mapV[tempC]) {
                if (val % 2 == 0) {
                    std::cout << "yes" << std::endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "no" << std::endl;
            }
        } else {
            std::cout << "no" << std::endl;
        }
    }
    return 0;
}
