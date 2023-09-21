#include <iostream>
#include <string>

int main() {
    int width = 8, height = 8;

    for (int x = 0; x < width; x++) {
        std::string row = "";
        for (int y = 0; y < height; y++) {
            bool isOffset = (x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0);

            if (!isOffset) {
                row += "1";
            }
            else {
                row += "0";
            }
        }
        std::cout << row << std::endl;
    }
    
    return 0;
}