#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1001), mx(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            mn = (mn < x ? mn : x);
            mx = (mx > x ? mx : x);
        }

        printf("%ld\n", (n - 1) * (mx - mn));
    }

}
