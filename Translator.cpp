#include "Translator.h"
#include "Model.h"

Translator::Translator(){
    //default constructor
}
Translator::~Translator(){
    //default deconstructor
}
string Translator::translateEnglishWord(string input){
    string translatedWord;
    Model m;
    //for loop loops through input to replace words with Tutenese language
    for(int i = 0; i < input.length(); ++i){
        //if statement is for the vowels and leaves them untouched in the word
        if(toupper(input[i]) == 'A' || toupper(input[i]) == 'E' 
        || toupper(input[i]) == 'I'|| toupper(input[i]) == 'O' || toupper(input[i]) == 'U')
            translatedWord = translatedWord + input[i];
        //else statement turns the input into the translated word using the index i
        else    
            translatedWord = translatedWord + m.translateSingleCharacter(input[i]);
    }
    return translatedWord;
}
string Translator::translateEnglishSentence(string input){
    //inWord tells if the current place that this function is checking is in the word or not
    bool inWord = false;
    string word = "";
    string convertedSentence = "";
    //this for loop is used to parse through the sentence and check every character
    for(int i = 0; i < input.length(); ++i){
        //ispunct(): checks whether a character is a punctuation or not
        //isspace(): checks whether a character is whitespace(including tabs, newline) or not
        //if statement checks if a word is not being worked on, if true add character to the empty string
        if(!inWord && (ispunct(input[i]) || isspace(input[i]))){
            convertedSentence += input[i];
        }
        //checks if a word is being worked on and checking for punctuation and whitespace
        //if true the parsing of the word is complete
        else if(inWord && (ispunct(input[i]) || isspace(input[i]))){
            inWord = false;
            convertedSentence += translateEnglishWord(word);
            convertedSentence += input[i];
        }
        //checks if we are not working on a word and a normal character is detected
        //if true it means a word is starting
        else if(!inWord){
            inWord = true;
            word = input[i];
        }
        //we are working on a word and if true add character to the word
        else{
            word += input[i];
        }
    }
    //last statement checks if a word is being worked on it when the for loop is finished
    //if true, word is added to the translated sentence
    if(inWord){
        convertedSentence += word;
    }
    return convertedSentence;
}