///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Letter.h
/// @version 1.0
///
/// @author  Aksel Sloan <@aksel@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once


class Letter {
    friend class Text;

protected:
    char value;     //protected member variable

public:
    Letter* next = nullptr;       //maybe set to null

public:
    Letter ( char constructLetter ){
        value = constructLetter;
    }


};



