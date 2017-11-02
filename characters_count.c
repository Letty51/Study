/* count characters in input; 1st version */
#include <stdio.h>
int main(){
    long nc;
    nc = 0;
    printf("%ld\n", nc);
    while(getchar() != '\n'){
        ++nc;
    }
    printf("%ld\n", nc);
    return 0;
}
