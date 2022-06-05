
#include "aleat.h"

int randomShape(){
    int random;
    srand(time(NULL));
    random = rand() % 7;
    return random;
}
