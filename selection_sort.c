#include <stdio.h>

void selection_sort(int num[], int num_size){
    int i, j, k, tmp, min_id;
	//配列の要素の分繰り返す
    for (i=0; i<num_size-1; i++){
		//iより後ろで最小値を更新
        min_id = i;
        for (j=i+1; j<num_size; j++){
            if (num[j] < num[min_id]){
				//最小値のインデックスを更新
                min_id = j;
            }
        }
		//[i]と最小値を交換
        tmp = num[i];
        num[i] = num[min_id];
        num[min_id] = tmp;

		//動作確認用
        for (k=0 ; k < num_size ; k++){
			printf("%d ", num[k]);
		}
		printf("\n");
    }
}

int main(void){
	int num[5] = {7, 3, 1, 9, 6};
	int num_size = 5;
	printf("ソート前:");
	for (int i=0 ; i < num_size ; i++){
		printf("%d ", num[i]);
	}
	printf("\n");

	selection_sort(num, num_size);

	printf("ソート後:");
	for (int i=0 ; i < num_size ; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
}
