#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(int argc, char *argv[]){
    srand(time(0));
    if(argc < 3){
        printf("Vinsamlegast reyndu aftur með arguments\n");
        return 0;
    }
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);

    int* a = calloc(n, sizeof(int));

    for(int i = 0; i < k*n; i++){
        int r = rand()%n;
        a[r]++;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            cnt++;
        }
    }

    printf("Eftir %d ítranir eru %d hólf ennþá 0 eða %.2f%% \n",n*k,cnt,(double)cnt/(n));
    return 0;
}