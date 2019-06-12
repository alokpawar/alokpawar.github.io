/*Efficient way to multiply with 7*/
#include<stdio.h>

int multiply_with_7(int n) {

    return ((n<<3) - n);
}

int main() {

    int n = 0;
    int ret = 0;

    printf("Enter number for multiply:\n");
    scanf("%d", &n);

    ret =  multiply_with_7(n);
    printf("Multiplication :%d\n", ret);
}
