#include <iostream>
#include "classes/trim-left.hpp"
#include <string>

int main(int argc, char *argv[]){
    int trimAmount = 2;
    std::string input = "test.ext";

    TrimLeft tl(trimAmount, false);
    std::string output = tl.execute(input, 0);

    std::cout << "Trim Amount: " << trimAmount << std::endl;
    std::cout << "Input: " << input << std::endl;
    std::cout << "Output: " << output << std::endl;

//    std::cout << "Renamer Program" << std::endl;
//    std::cout << "There are " << argc << " argument(s)" << std::endl;

    for (int x=1; x < argc; ++x){
//        std::cout << "Argument " << x << " " << argv[x] << std::endl;
    }
    return 0;

}
