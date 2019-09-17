#include "trim-left.hpp"
#include <string>

#include <iostream>

TrimLeft::TrimLeft(){
    initObj(0, false);
}

TrimLeft::TrimLeft(int ta){
    initObj(ta, false);
}

TrimLeft::TrimLeft(int ta, bool incExt){
    initObj(ta, incExt);
}

void TrimLeft::initObj(int ta, bool incExt){
    setTrimAmount(ta);
    setIncludeExtension(incExt);
}

void TrimLeft::setTrimAmount(int ta){
    if (ta >= 0){
        trimAmount = ta;
    }
}

int TrimLeft::getTrimAmount(){
    return trimAmount;
}

std::string TrimLeft::trim(std::string name){
    if (trimAmount >= name.size()){
        return name;
    }

    return name.substr(trimAmount, std::string::npos);

}

std::string TrimLeft::execute(std::string filename, int counter){
    if (includeExtension){
        return trim(filename);
    }

    FileName f = separateExt(filename);
    return trim(f.name) +  "." + f.ext;
}
