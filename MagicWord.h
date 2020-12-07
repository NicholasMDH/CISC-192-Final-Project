/******************************************************************************
* MagicWord.h
* CS 281-0798, Fall 2020
*
* MagicWord class declaration
*******************************************************************************
*/

#ifndef MAGICWORD_H
#define MAGICWORD_H

#include <string>

//base class declaration
#include "CarryIt.h"

//----------------------------------------------------------
// MagicWord class derived from base class for carried items
//----------------------------------------------------------
class MagicWord : public CarryIt
{
private:
	std::string wordText; //used to store the actual string for the MagicWord
	std::string wordGuess; //used to store the input string from the user

public: 
	MagicWord();
	MagicWord(std::string mName);

	bool setWordText(std::string mText);
	std::string getWordText();

	bool setWordGuess(std::string mText);

	bool compareWordText();
};

#endif