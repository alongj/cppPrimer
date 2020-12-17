//
// Created by 邵军 on 2018/8/21.
//

#include <stdio.h>
#include <string.h>
#include <cstdlib>

int main(){

    printf("short size = %zd \n", sizeof(short));
    printf("short int size = %zd \n", sizeof(short int));
    printf("int size = %zd \n", sizeof(int));
    printf("long size = %zd \n", sizeof(long));
    printf("long int size = %zd \n", sizeof(long int));
    printf("long long size = %zd \n", sizeof(long long));
    printf("long long int size = %zd \n", sizeof(long long int));

    auto * hello = (char *) malloc(6);
    memset(hello, '\0', strlen(hello));
    printf("memset strlen(hello) = %zd,", strlen(hello));

    hello[0] = 'h';
    hello[1] = 'e';
    hello[2] = 'l';
    hello[3] = 'l';
    hello[4] = 'o';
    hello[5] = '\0';
    printf("strlen(hello) = %zd,", strlen(hello));

    memset(hello, '\0', strlen(hello));

    *hello = '0';
    *(hello+1) ='1';
    printf("hello= %s, strlen(hello) = %zd,", hello,strlen(hello));

    free(hello);
    char hellos[6] = "hello";
    printf("strlen(\"hello\") = %zd,", strlen(hellos));
    printf("strlen(\"hello\") = %zd", strlen("hello"));

    return 0;
}
