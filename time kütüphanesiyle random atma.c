#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    printf("%d" , random(100));
}

int random (int limit) {
    return rand() % limit;
}
