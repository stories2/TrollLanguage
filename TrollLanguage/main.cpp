//
//  main.cpp
//  TrollLanguage
//
//  Created by 김현우 on 2017. 4. 1..
//  Copyright © 2017년 김현우. All rights reserved.
//

#include <iostream>
#include "TokenParser.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    TokenParser *tokenParser = new TokenParser();
    tokenParser->TestFunc();
    return 0;
}
