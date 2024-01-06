#include<stdio.h>
int main(void){
    int x = 9, y = 6, r;
    //余りを計算
    r = x % y;
    //余りが0になるまで割り算を繰り返す
    while(r != 0){
        //yをxの位置に、余りをyの位置に移動
        x = y;
        y = r;
        r =x % y;
    }
    printf("最大公約数：%d\n", y);
    return 0;
}
