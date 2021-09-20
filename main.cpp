#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    FileProcessor fp;
    fp.processFile("inputFile.txt", "outputFile.txt");

    return 0;
}