#include <iostream>
#include "antlr4-runtime.h"
#include "Python3Lexer.h"
#include "Python3Parser.h"
#include "Evalvisitor.h"
using namespace antlr4;
//todo: regenerating files in directory named "generated" is dangerous.
//       if you really need to regenerate,please ask TA for help.
int main(int argc, const char* argv[]){
    //todo:please don't modify the code below the construction of ifs if you want to use visitor mode
    const std::string filepath=argv[1];
    std::ifstream ifs;
    ifs.open(filepath);
    if (!ifs.good()) {
        std::cout<<"bad";
    }
    ANTLRInputStream input(ifs);
    Python3Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    Python3Parser parser(&tokens);
    tree::ParseTree* tree=parser.file_input();
    EvalVisitor visitor;
    visitor.visit(tree);
    ifs.close();
    return 0;
}