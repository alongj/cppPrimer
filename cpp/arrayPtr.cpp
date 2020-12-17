//
// Created by 邵军 on 2018/8/22.
//
#include <stdio.h>

int main()
{
    int array[2][3] = {1,2,3,4,5,6};
    int (*array_p)[3] = array;
    printf("sizeof(*array_p) = %d \n", *array[1]);
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("position i=%d, j=%d, value= %d \n", i, j, *(*(array_p+i)+j));
        }
    }
    char arr[3] = {'a', 'b', 'c'};
    char *p[3] =  { &arr[0], &arr[1], &arr[2]};

    for (int k = 0; k < 3; ++k) {
       printf("arr[%d]=%c\n", k, *p[k]);

    }
}
