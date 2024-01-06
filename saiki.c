#include <stdio.h>
void func(int count){
    if( count <= 0 ){
        return;
    }
    printf( "Hello" );
    func( count - 1 );  // 自分自身を呼び出す
}

int main(void){
    func( 5 );  // "Hello" を 5回出力する
}
