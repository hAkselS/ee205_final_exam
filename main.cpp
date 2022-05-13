#include <iostream>
#include "Letter.h"
#include "Text.h"

using namespace std;

int main() {
    std::cout << "Begin Pointers Final" << std::endl;
    std::cout << "Hello, World!" << std::endl;

    ///test code


    Text text;


    text.printText();

    text.pushNewLetter( 'c' );
    text.pushNewLetter( 'a' );
    text.pushNewLetter( 't' );

    text.printText();  // tac


    text.reverseText();

    text.printText();  // cat

    return 0;

}
