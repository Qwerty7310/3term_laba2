//
// Created by bobro on 09.10.23.
//
#include <climits>
#include <iostream>
#include <chrono>

using namespace std;

#ifndef INC_3TERM_LABA2_FUNC_H
#define INC_3TERM_LABA2_FUNC_H

int GetRandomNumber(int, int);
void random_sequence(int, int*);
void ascending_sequence(int, int*);
void descending_sequence(int, int*);
int Better_Linear_Search(int*, int, int, int&);
int Sentinel_Linear_Search(int*, int, int, int&);
int Ordered_Array_Search(int*, int, int, int&);
int Binary_Search(int*, int, int, int&);

#endif //INC_3TERM_LABA2_FUNC_H
