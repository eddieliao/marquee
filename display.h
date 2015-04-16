
#include "shifter.h"

#ifndef DISPLAY_H
#define DISPLAY_H

#define DISPLAY_WIDTH (FONT_WIDTH*24)

void InitDisplay(tShifter *sh);

void Display(tShifter *sh, int len, const char *message);

#endif
