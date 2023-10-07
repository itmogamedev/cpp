#include <iostream>

char NumberToLetter(int n) 
{
    switch (n)
    {
    case 0:
        return 'z';
        break;
    case 1:
        return 'o';
        break;
    case 2:
        return 't';
        break;
    case 3:
        return 't';
        break;
    case 4:
        return 'f';
        break;
    case 5:
        return 'f';
        break;
    case 6:
        return 's';
        break;
    case 7:
        return 's';
        break;
    case 8:
        return 'e';
        break;
    case 9:
        return 'n';
        break;

    default:
        std::cout << "Wrong number. Try again\n";
        
        int newN;
        std::cin >> newN;
        NumberToLetter(newN);
        break;
    }
}

int main()
{
    std::cout << "Task 1:\n\n";
    
    char s = 127;
    std::cout << ++s;
    std::cout << '\n';

    std::cout << "\nTask 2:\n\nWrite your number 0-9\n";

    int n;
    std::cin >> n;

    std::cout << NumberToLetter(n);
    std::cout << '\n';

    std::cout << "Congratulations!!! That's your letter";
}
