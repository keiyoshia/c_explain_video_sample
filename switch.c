#include<stdio.h>
int main(void){
    int num;
    printf("0 or 1？ ");
    scanf("%d", &num);
    
    switch(num) {
        //numが0の場合
        case 0:
            printf("→0\n");
            break;
        //numが1の場合
        case 1:
            printf("→1\n");
            break;
        //numが0でも1でもない場合
        default:
            printf("0か1を入力してください\n");
    }
    return 0;
}
