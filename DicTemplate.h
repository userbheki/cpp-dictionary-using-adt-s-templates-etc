#pragma once
#ifndef CODE_DICTEMPLATE_H
#define CODE_DICTEMPLATE_H
#include <iostream>
#include <vector>

//class template definition with 2 types of parameters for the 2 vectors
template<typename keyType, typename valueType>



//declaration of the class itself
class DicTemplate {
    public:
    //constructor
    DicTemplate();

    //THE 3 FUNCTIONS FOR ADDING, FINDING AND EVENTUALLY DISPLAY THE RESULT(S)


    //nothing much changed here
    void add(keyType key, const valueType &value);

    //redesigned the ff function to a bool as a way to try and make it more
    //of a template... to account for different types of the data stored in the 2 containers
    bool find(keyType key, valueType &value) const;

    // didnt change much on this function as well
    void display();

    private:

    //containers for the 2 types of data
     std::vector<keyType> keys;
     std::vector<valueType> values;
};
#endif //CODE_DICTEMPLATE_H
