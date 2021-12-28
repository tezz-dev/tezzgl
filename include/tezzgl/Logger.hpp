//
//  Logger.h
//  TezzGL
//
//  Created by tezz on 28/12/21.
//

#ifndef Logger_h
#define Logger_h

#include <iostream>
#include "Definitions.hpp"

class Logger {
public:
    static void log(String message) {
        std::cout << message << "\n";
    }
};

#endif /* Logger_h */
