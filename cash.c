#include <stdio.h>

int main(void){
    int cash;
    printf("Enter the cash: ");
    scanf("%d", &cash);
    int count = 0;
    while(cash>0){
        if (cash/25 != 0){
            count += cash/25;
            cash -= cash/25 *25;
        }
        if (cash/10 != 0){
            count += cash/10;
            cash -= cash/10 *10;
        }
        if (cash/5 != 0){
            count += cash/5;
            cash -= cash/5 *5;
        }
        if (cash != 0){
            count += cash;
            cash -= cash;
        }
    }
    printf("%i", count);

}