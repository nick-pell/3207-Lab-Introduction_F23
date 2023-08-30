#include "random.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


char randchar(){
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int random = rand() % 25;
    return letters[random];



}