#include "test.h"

void test_dynamic_arr()
{
    struct dynamic_arr my_arr;
    init_arr(&my_arr);
    insert(&my_arr, 10, -19);
    printf("%s%i\n", "the initial capacity: ",capacity(&my_arr));
    printf("%s%i\n","Is arr empty? ", empty(&my_arr));

    push_back(&my_arr, 6);
    push_back(&my_arr, 20);

    printf("%s%i\n", "capacity: ", capacity(&my_arr));
    printf("%s%i\n", "at(1): ", at(&my_arr, 1));

    push_back(&my_arr, -13);
    push_back(&my_arr, 7);

    print_arr(&my_arr);

    dinit_arr(&my_arr);
}