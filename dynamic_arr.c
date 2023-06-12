#include <stdio.h>

#include "dynamic_arr.h"

void init_arr(struct dynamic_arr* darr)
{
    darr->arr = NULL;
    darr->size = 0;
    darr->cap = 0;
}

void dinit_arr(struct dynamic_arr* darr)
{
    free(darr->arr);
}

void reserve(struct dynamic_arr* darr, int new_cap)
{
    if (new_cap > darr->cap) {
        int *tmp = (int*)malloc(new_cap * sizeof(int));
        for (int i = 0; i < darr->size; ++i) {
            tmp[i] = darr->arr[i];
        }
        free(darr->arr);
        darr->arr = tmp;
        darr->cap = new_cap;
    }    
}

void push_back(struct dynamic_arr* darr, int value)
{
    if (darr->size >= darr->cap) {
        int new_cap = (darr->cap == 0) ? 1 : darr->cap * 2;
        reserve(darr, new_cap); 
        darr->cap = new_cap;
    }
    darr->arr[darr->size++] = value;
}

bool empty(struct dynamic_arr* darr)
{
    return darr->size ? 1 : 0;
}

void insert(struct dynamic_arr* darr, int pos, int elem)
{
    if (pos < 0 && !(empty(darr))) {
        darr->arr[pos] = elem;
    } else {
        printf("%s", "pos is out of range or arr is empty\n");
    }
}

int at(struct dynamic_arr* darr, int pos)
{
    if (pos >= darr->size || pos < 0) {
        printf("%s", "pos is out of range");
        return -1;
    }
    return darr->arr[pos];
}

int size(struct dynamic_arr* darr)
{
    return darr->size;
}

int capacity(struct dynamic_arr* darr)
{
    return darr->cap;
}

void print_arr(struct dynamic_arr* darr)
{
    printf("%s", "Arr: ");
    for (int i = 0; i < darr->size; ++i) {
        printf("%i%s", darr->arr[i], " ");
    }
    printf("\n");
}