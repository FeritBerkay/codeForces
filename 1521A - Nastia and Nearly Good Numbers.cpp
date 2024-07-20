#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++) {
        long long a, b;
        std::cin >> a;
        std::cin >> b;
        if(b == 1) {
            std::cout << "NO" << std::endl;
        } 
        else{
            std::cout << "YES" << std::endl;
            long long x, y, z;
            y = a * b;
            x = a * (b - 1);
            z = a * (b + b - 1);
            std::cout << x << " " << y << " " << z << " ";
        }
    }
    return 0;
}
