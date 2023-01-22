//Compiled with gcc
#include <math.h>

int main(){
    int count = 1;
    int i;
    int j;
    char is_prime;

    for (i=3;i<10000000;i+=2){
        is_prime = 1;
        for (j = 3; j<=(sqrt(i)); j+=2){
            if (i%j==0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1){
            count++;
        }
    }
    return count;
}