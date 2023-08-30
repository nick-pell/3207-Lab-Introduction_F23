#include "random.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


char randchar(){
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int random = rand() % 26;
    return letters[random];



}