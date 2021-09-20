#include "Model.h"

Model::Model(){
    //default constructor
}

Model::~Model(){
    //default deconstructor
}

string Model::translateSingleCharacter(char input)
{
    //isLower indicates if the word is in lower case or upper case(bool)
    bool isLower = false;
    //if statment states that if input is lower case(between a and z), input is changed toupper, and is able to be translated
    if(input >= 'a' && input <= 'z'){
        input = toupper(input);
        isLower = true;
    }
    //since no arrays can be used, multiple if statements define the rules of the Tutenese language
    string result;
    if(input == 'B')
        result = "Bub";
    else if(input == 'C')
        result = "Cash";
    else if(input == 'D')
        result = "Dud";
    else if(input == 'F')
        result = "Fuf";
    else if(input == 'G')
        result = "Gug";
    else if(input == 'H')
        result = "Hash";
    else if(input == 'J')
        result = "Jay";
    else if(input == 'K')
        result = "Kuck";
    else if(input == 'L')
        result = "Lul";
    else if(input == 'M')
        result = "Mum";
    else if(input == 'N')
        result = "Nun";
    else if(input == 'P')
        result = "Pub";
    else if(input == 'Q')
        result = "Quack";
    else if(input == 'R')
        result = "Rug";
    else if(input == 'S')
        result = "Sus";
    else if(input == 'T')
        result = "Tut";
    else if(input == 'V')
        result = "Vuv";
    else if(input == 'W')
        result = "Wack";
    else if(input == 'X')
        result = "Ex";
    else if(input == 'Y')
        result = "Yub";
    else if(input == 'Z')
        result = "Zub";
    if(isLower){
        result[0] = tolower(result[0]);
    }
    return result;
}

string Model::translateDoubleCharacter(char doubleInput)
{
    //translateDoubleCharacter uses the previous function to print the reuslt twice 
    return translateSingleCharacter(doubleInput) + translateSingleCharacter(doubleInput);
}