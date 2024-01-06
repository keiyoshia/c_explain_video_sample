#include <stdio.h>
int binary_search(int num[], int min_id, int max_id, int search){
    //探索範囲（最小値から最大値まで）が最短にならない（最小値と最大値が一致しない）間
    while(min_id != max_id){
        //探索範囲の中央値を算出
        int mid = (min_id + max_id) / 2;
        //中央値が探索値より大きかったら
        if (num[mid] > search){
            //動作確認用
            printf("left ");
            for (int i=min_id; i < mid; i++){
                printf("%d ", num[i]);
            }
            printf("\n");
            //探索範囲を、中央値より左に更新
            max_id = mid - 1;
        //中央値が探索値より小さかったら
        }else if (num[mid] < search){
            //動作確認用
            printf("right ");
            for (int i = mid + 1; i <= max_id; i++){
                printf("%d ", num[i]);
            }
            printf("\n");
            //探索範囲を、中央値より右に更新
            min_id = mid + 1;
        //中央値と探索値が一致したら
        }else{
            //動作確認用
            printf("mid %d\n", mid);
            //何番目か（中央値のインデックス）を返す
            return mid;
        }
    }
}

int main(void){
    int num[5] = {1, 3, 6, 7, 9};
    int search = 7;
    int id;
	id = binary_search(num, 0, 4, search);

	printf("%d番目", id);
}
