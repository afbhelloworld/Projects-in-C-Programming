#include <stdio.h>

int main() {
int taban = 2, us = 5;
int sonuc = kuvvet(taban,us);
printf("sonuc = %d",sonuc);

}
int kuvvet(int taban , int us) {
    int p = 1;
    for(int i =0; i< us;i++) {
        p *=taban;
    }
    return p;
}

int r_kuvvet(int taban,int us){
    if(us ==1)return taban;
    return taban * r_kuvvet(taban, us - 1);
}
