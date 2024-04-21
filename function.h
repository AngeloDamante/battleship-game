
#ifndef BATTLEFIELD_FUNCTION_H
#define BATTLEFIELD_FUNCTION_H


const int n = 10;
bool battleField [n][n];

enum Mode {
    verticalBelow = 0,
    horizontalLeft = 1,
    verticalOn = 2,
    horizontalRight = 3
};

bool insertBattleShip(bool F, int startX, int startY, int length, Mode mode);

bool insertBattleshipVerticalOn(bool *F, int startX, int startY, int length);

bool insertBattleshipHorizontalRight(bool *F, int startX, int startY, int length);

bool insertBattleshipVerticalBelow(bool *F, int startX, int startY, int length);

bool insertBattleshipHorizontalLeft(bool *F, int startX, int startY, int length);

void makeTable();


#endif //BATTLEFIELD_FUNCTION_H