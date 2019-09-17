#ifndef TRIMLEFT_h
#define TRIMLEFT_h

#include "renamer.hpp"
#include <string>


class TrimLeft: public Renamer {
    private:
        int trimAmount;
        void initObj(int ta, bool incExt);

    public:
        TrimLeft();
        TrimLeft(int ta);
        TrimLeft(int ta, bool incExt);

        void setTrimAmount(int ta);
        int getTrimAmount();

        std::string trim(std::string name);
        std::string execute(std::string filename, int counter);
};

#endif
