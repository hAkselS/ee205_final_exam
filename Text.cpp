///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Text.cpp
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Text.h"

using namespace std;

void Text::pushNewLetter(char newLetter) {
    Letter* newNode = new Letter( newLetter);
    newNode->next = head;   //order matters!
    head = newNode;
    count ++;

}

void Text::printText() {
    Letter* pLetter = head;
    if( head == nullptr ){
        std::cout << "No letters" << std::endl;
    }
    if( head != nullptr ) { //non empty case
        while ( pLetter != nullptr){
            cout << pLetter->value;
            pLetter = pLetter->next;
        }
        cout<<endl; //check this later
    }
}

void Text::reverseText() {
    if ( head == nullptr ){
        cout << "list is empty" << endl;
        return;
    }
    if ( head->next == nullptr){
        cout << "one item list has been reversed!" << endl;
        return;
    }
    //this causes a seg fault
    /*int tempCount = count;
    Letter* pLetter = head;
    Letter* pNewHead = nullptr;
    bool isListReversed = false;
    bool firstIteration = true;
    while ( !isListReversed ) {
        for (int i = 0; i < tempCount; i++) {
            pLetter = pLetter->next;

        }
        if (firstIteration) {
            pNewHead = pLetter;
            firstIteration = false;
        }
        pLetter->next = pNewHead->next;

        if ( tempCount == 1 ){
            pLetter ->next = nullptr;
        }

        tempCount --;
        if (tempCount == 0 ){

            isListReversed = true;
        }
    }
   */


}


