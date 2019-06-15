#include <stdio.h>
#include <string.h>

void swap (char * x, char * y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char *a , int l, int r) {

    int i=0;
    if(l == r) {
        printf("%s\n", a);
    } else {
        for (i = l; i <= r; i++) {
            swap(a+l, a+i);
            permutation(a, l+1, r);
            swap(a+l, a+i);     //backtrack
        }
    }
}

int main() {

//    char str [] = "ABC";
    char str[100];
    printf("Enter string for permutation:\n");
    scanf("%s", str);

    int len = 0;
    len = strlen(str);

    permutation(str, 0, len-1);
    return 0;
}
