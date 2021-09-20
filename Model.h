#include <string>
using namespace std;

class Model {
    public:
        //declaring contructor and deconstructor
        Model();
        ~Model();
        //defintion of both functions used in Model class
        string translateSingleCharacter(char input);
        string translateDoubleCharacter(char doubleInput);

};
