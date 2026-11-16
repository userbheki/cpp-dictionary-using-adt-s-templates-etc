#include "DicTemplate.h"
#include <string>

template<typename keyType, typename valueType>
DicTemplate<keyType, valueType>::DicTemplate(){}; //-> for the creation of objects in main.


//FUNCTION DEFINITIONS FOR THE 3 FUNCTIONS


//add function
template<typename keyType, typename valueType>
void DicTemplate<keyType, valueType>::add(keyType key, const valueType &value) {

    keys.push_back(key);
    values.push_back(value);

}

//find function
template<typename keyType, typename valueType>
bool DicTemplate<keyType, valueType>::find(keyType key, valueType &value) const {

    for (unsigned int i = 0; i < keys.size(); i++) {
        if (key == keys[i]) {
            value = values[i];
            return true;
        }
    }
        return false;
}

//display function
template<typename keyType, typename valueType>
void DicTemplate<keyType, valueType>::display() {

    for (unsigned int i = 0; i < keys.size(); i++) {
        std::cout << keys[i] << ' ' << values[i] <<'\n';
    }
    return;
}


//the 2 different vector templates with different templates arguments
template class DicTemplate<char, double>;
template class DicTemplate<float, std::string>;


