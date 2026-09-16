#include "io.h"
#include <cstdlib>

int main(){
    int x { read_number() };
    int y { read_number() };
    write_answer(x + y);
    return EXIT_SUCCESS;
}
