#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("Not enough arguments!");
    } else {
        for(int i = 0; i < argc; i++) {
            printf("argv[%d] = %s \n", i, argv[i]);
        }
    }

    return 0;
}