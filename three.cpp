﻿#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int a1, i = 0, j = 0, k = 0;
    int a[5][4] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    for (k = 0; k < 13;)
    {
        cin >> i;
        cin >> j;
        if (a[i][j] == 0)
        {
            printf("loding ~ \n");
        }
    }
}