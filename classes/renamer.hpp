#ifndef RENAMER_H
#define RENAMER_H

#include <string>

struct FileName {
    std::string name;
    std::string ext;
};

class Renamer {

    protected:
        bool includeExtension;
        FileName separateExt(std::string fileName);

    public:
        virtual std::string execute(std::string fileName, int counter) = 0;

        void setIncludeExtension(bool incExt);
        bool getIncludeExtension();
};

#endif

