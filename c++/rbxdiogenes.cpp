#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>

std::string crypt(std::string word)
{
    for (unsigned i = 0; i < word.size(); ++i)
    {
        word[i] = 0x55 ^ word[i];
    }

    return word;
}

int main()
{
    std::cout << "'Hello World' in diogenes format is '" << crypt("Hello World") << "'." << std::endl;
}
