#ifndef DYNAMIC_ARR_H
#define DYNAMIC_ARR_H

#include <stdlib.h>
#include <stdbool.h>

struct dynamic_arr
{
    int *arr;
    int size;
    int cap;
};

void init_arr(struct dynamic_arr* darr); // ctor
void dinit_arr(struct dynamic_arr* darr); //dtor
void reserve(struct dynamic_arr* darr, int new_cap); // preallocate space for num element
void push_back(struct dynamic_arr* darr, int value); // inserts an element from the end of the array
bool empty(struct dynamic_arr* darr);   // true if the array is empty
void insert(struct dynamic_arr* darr, int pos, int elem); //inserts an elem at position pos if pos does not span the area defined for the array
int at(struct dynamic_arr* darr, int pos); // returns the element at position pos
int size(struct dynamic_arr* darr); // returns the number of elements in the array
int capacity(struct dynamic_arr* darr); //returns the capacity of the array
void print_arr(struct dynamic_arr* darr); // prints the elements

#endif // DYNAMIC_ARR_H
