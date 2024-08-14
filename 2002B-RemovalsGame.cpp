#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool fs(true), fr(true);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            if(b != a[p]){fs = false;}
            if(b != a[n - 1 - p]){fr = false;}
        }

        puts(fs || fr ? "Bob" : "Alice");
    }

}
