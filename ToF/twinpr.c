#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Checks if a number is prime or not*/
int isprime(long k){
    for(int i = 3;i <= sqrt(k);i+= 2){
        if(k % i == 0){
            return 0;
        }
    }
    return 1;
}

/*Takes in int and finds that many pairs of 
prime numbers that are exacly 2 apart*/
int main(int argc, char *argv[]) {


    int n = atoi(argv[1]);
    int cnt = 3;
    int cntpr = 0;

    while(n > cntpr){
        if(isprime(cnt) && isprime(cnt+2)){
            printf("%d og %d \n",cnt,cnt+2);
            cntpr++;
        }
        cnt+=2;
    }
    return 0;
}   