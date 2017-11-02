/* copy input to output; 2nd version */
#include <stdio.h>
int main(){
    int c;
    while((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}