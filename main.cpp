#include <iostream>
#include "Letter.h"
#include "Text.h"

using namespace std;

int main() {
    std::cout << "Begin Pointers Final" << std::endl;
    std::cout << "Hello, World!" << std::endl;

    ///test code


    Text text;

    text.reverseText(); //RBF
    text.printText();

    text.pushNewLetter( 'c' );

    text.reverseText(); //RBF
    text.printText(); //RBR looking good


    text.pushNewLetter( 'a' );
    text.pushNewLetter( 't' );

    cout << text.count << endl; //RBF
    text.printText();  // tac


    text.reverseText();

    text.printText();  // cat

    return 0;

}
