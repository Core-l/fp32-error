#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count = 0;
    float total = 0.f;
    const int END =   1024*1024*33;
    int logInterval = 1024*64;

    //Psuedo random seed from clock
    srand((unsigned int)time(NULL));

    for (count=0; count < END; count += logInterval) {
        float oldTotal = total;
        for (int i = 0; i < logInterval; i++) {
            //Between [0, 1]
            float random = rand() / (float)(RAND_MAX);
            total += random;
        }
        printf("[%.8i/%i] Total is: %f (difference: %f)\n", count, END, total, total-oldTotal);
    }
}