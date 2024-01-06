#include<stdio.h>
//平方根を計算するsqrt()が使えるようになる
#include<math.h>
int main(void){
    int num=24;
    printf("素因数分解したい整数：");
    scanf("%d",&num);
    printf("%d = ", num);
    //割る数iを増やす
    for(int i = 2; i <= sqrt(num); i++){
        //iで割り切れるなら割る
        if(num % i == 0) {
            printf("%d * ", i);
            num = num / i;
            //割る数を1にリセット(forループの最後で1足されるので実質2)
            i = 1;
        }
    }
    printf("%d ", num);
    return 0;
}
