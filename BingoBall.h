//
// Created by Alexia Barnes on 2/22/25.
//

#ifndef BINGOBALL_H
#define BINGOBALL_H
#include <string>
using std::ostream;

class BingoBall {
private:
    char letter;
    int number;

public:
    BingoBall();
    friend ostream& operator << (ostream& outs, const BingoBall& ball);
};

#endif //BINGOBALL_H
