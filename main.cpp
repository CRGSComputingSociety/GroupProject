/*
    Feel free to use this as a testing ground - mess about,
    if you make something you're happy with commit and share it
    with the group!
    This should compile with pretty much anything - Code::Blocks IDE or similar
    or even manual compilation
        mingw32-g++.exe -Wall -c main.cpp -o obj\Debug\main.o
        mingw32-g++.exe -o bin\Debug\CompSoc.exe obj\Debug\main.o

    If you want to add your own files (.h or .cpp) just create it!
*/


#include "utils.h"

int main() {
    std::cout << "Hello world!" << std::endl;
    utils::readline();
    return 0;
}
