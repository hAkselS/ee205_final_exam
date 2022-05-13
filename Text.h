///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Text.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Letter.h"

///will hold the linked list
class Text {  //public Letter
    //member variables
private:
    Letter* head = nullptr;
public:
    int count = 0;

    //methods
public:
    void pushNewLetter ( char newLetter );

    void printText ();

    void reverseText ();


};



