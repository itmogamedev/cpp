#include <iostream>

int main()
{
    int input = 0;
    std::cout << "Input a number: " << std::endl;
    std::cin >> input;
    if (input == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    bool negative = 0;
    if (input < 0) {
        input = abs(input);
        negative = 1;
    }
      while (input > 0) {
          if (negative) {
              std::cout << "-";
              negative = 0;
        }
        std::cout << input%10;
        input /= 10;
    }
    

    
}