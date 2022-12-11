#include <stdio.h>

int main() {
int sonuc = faktoriyel(6);
printf("sonuc = %d",sonuc);

}


int faktoriyel(int x) {
    int p = 1;
    for(int i = 1; i<= x; i++){
        p *=i;
    }
    return p;
}

