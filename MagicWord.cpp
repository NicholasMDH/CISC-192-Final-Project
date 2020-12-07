/******************************************************************************
* MagicWord.cpp
* CS 281-0798, Fall 2020
*
* MagicWord class definition
*******************************************************************************
*/
#include <string>
#include <iostream>

#include "CarryIt.h"
#include "MagicWord.h"

//***********************************************************
// MagicWord(string mText)
//
// overload constructor
//
// mName is a call by value string parameter
// to allow passing string literals
//***********************************************************
MagicWord::MagicWord(std::string mName)
{
    m_id = static_cast<int>(MAGICWORD_CARRYIT);
    m_name = mName;
}

//***********************************************************
// MagicWord()
//
// constructor
//***********************************************************
MagicWord::MagicWord()
{ }

//***********************************************************
// setWordText()
//
// sets the text for the magic word to the string passed
//***********************************************************
bool MagicWord::setWordText(std::string mText)
{
    wordText = mText;
    return true;
}

//***********************************************************
// getWordText()
//
// returns the text for the magic word
//***********************************************************
std::string MagicWord::getWordText()
{
    return wordText;
}

//***********************************************************
// setWordGuess()
//
// sets the guess for the magic word to the string passed
//***********************************************************
bool MagicWord::setWordGuess(std::string mText)
{
    wordGuess = mText;
    return true;
}

//***********************************************************
// compareWordText()
//
// returns true if strings are equal, false if not
//***********************************************************
bool MagicWord::compareWordText()
{
    if (wordText.compare(wordGuess) == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
    std::cout << wordText.compare(wordGuess) << std::endl;
    return 1;
}