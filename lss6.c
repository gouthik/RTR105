#include <stdio.h>

int getRandNur() 
{
    return rand() % 100;  
}

int main() {
    int randNur = getRandNur();

    printf("Random Num: %d\n", randNur);

    return 0;
}
