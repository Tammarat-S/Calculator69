#include <stdio.h>
#include <ctype.h>

int main() {
    char numstr [ 100 ] ;
    float num, result = 0 ;
    char op = '+' ;
    int i = 0 ;

    printf( " ใส่ตัวเลข และ เครืองหมายคำนวน \n " ) ;
    scanf( "%s" , numstr ) ;

    while (numstr[i] != '=' && numstr[i] != '\0') {
        num = 0;
        while (isdigit(numstr[i])) {
            num = num * 10 + (numstr[i] - '0');
            i++;
        }

        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else if (op == ' ') {
            result= num;
        } else if (op == '/') {
            result /= num;
        } else if (op == '*') {
            result *= num;
        } 

        op = numstr[i];
        if (numstr[i] != '\0') i++;
    }

    printf("ผลลัพธ์ = %.2f\n", result);

    return 0 ;
    
}