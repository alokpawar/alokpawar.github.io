#include <stdio.h>

int multiple_of_3 (int n) {

    return ((n % 3) ? 0: -1);
}

int main () {

    int n = 0;
    int ret = 0;

    printf("enter number for check multiple fo 3:\n");
    scanf("%d", &n);

    ret = multiple_of_3 (n);
    if(ret)
        printf("Multiple of 3\n");
    else
        printf("Not Multiple of 3\n");

    return 0;
}
