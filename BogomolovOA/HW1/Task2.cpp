#include <iostream>
#include <string.h>

int main()
{
    std::string inputstring = "";
    std::cin >> inputstring;
    
    // проверка на ввод нечислового числа
    bool faultyflag = false; // флаг неправильного ввода
    for (char& c : inputstring)
        if (c < 48 || c > 57) // проверка на нечисло тут
            faultyflag = true;
    if (faultyflag)
    {
        std::cout << "haha very funny string in a number input";
        return 1; // за такие вводы можно сразу выдавать ошибку
    }
    long long input = stoll(inputstring); // перевод в ll
    
    // временная переменная для хранения первого символа модуля числа
    long long tmp = input;
    if (tmp < 0)
        tmp *= -1;
    while (tmp >= 10)
        tmp /= 10;
    
    // switch
    char outchar = ' ';
    switch(tmp)
    {
        case 0:
            outchar = 'z';
            break;
        case 1:
            outchar = 'o';
            break;
        case 2:
            outchar = 't';
            break;
        case 3:
            outchar = 't';
            break;
        case 4:
            outchar = 'f';
            break;
        case 5:
            outchar = 'f';
            break;
        case 6:
            outchar = 's';
            break;
        case 7:
            outchar = 's';
            break;
        case 8:
            outchar = 'e';
            break;
        case 9:
            outchar = 'n';
            break;
        default:
            outchar = 'X'; // error code
    }
    
    if (outchar == 'X')
    {
        std::cout << "that's not a cow level, you broke something on purpose";
        return 1;
    }
    std::cout << input << " starts with a letter " << outchar << std::endl;
    return 0;
}
