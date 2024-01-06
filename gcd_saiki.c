#include<stdio.h>
//gcd = greatest common divisor
int gcd(int x, int y){
    if(y==0) return x;
    //yをxの位置に、余りをyの位置に移動
    //%は余りを計算する記号
    else return gcd(y, x%y);
}
int main(void){
    int x=9, y=6;
    printf("最大公約数：%d\n", gcd(x, y));
    return 0;
}
