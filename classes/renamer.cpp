#include "renamer.hpp"
#include <string>

void Renamer::setIncludeExtension(bool incExt){
    this->includeExtension = incExt;
}

bool Renamer::getIncludeExtension(){
    return this->includeExtension;
}

FileName Renamer::separateExt(std::string filename){
    FileName f;

    std::size_t pos = filename.rfind(".");

    if (pos == std::string::npos){
        f.name = filename;
        f.ext = "";
    } else {
        f.name = filename.substr(0, pos);
        f.ext = filename.substr(pos+1, filename.length());
    }

    return f;
}
