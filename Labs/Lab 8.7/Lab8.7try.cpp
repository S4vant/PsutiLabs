#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    int max_length = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] >= '0' && input[i] <= '9') {
            int length = 0;
            while (i + length < input.size() && input[i + length] >= '0' && input[i + length] <= '9') {
                ++length;
            }
            max_length = std::max(max_length, length);
        }
    }

    std::cout << max_length << std::endl;

    return 0;
}