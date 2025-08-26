#include <stdio.h>

int main(){
    int a=2, b=2, c,d;
    c=++a; //2+1 is first applied to a (a=3 now) and is stored in c (c=3)
    d=b++; //b(2) is stored in d (d=2), and then is incremented (b now equals 3)

    //ans:
    printf("a= %d, b=%d, c=%d, d=%d", a,b,c,d);
}