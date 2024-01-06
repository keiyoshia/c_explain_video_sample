#include <stdio.h>

void bubble_sort(int num[], int num_size){
	int i, j, tmp;
	//配列の要素の分繰り返す
	for (i = 0; i < num_size; i++){
		//先頭から繰り返す
		for (j = 0; j < num_size - i - 1; j++){
			//隣接値の大小を比較
			if (num[j] > num[j+1]){
				//隣接値を交換
				//↓だと、[j+1]が[j]に上書きされ、[j+1]と[j]が同じ値になるので、tmpに退避
				//num[j+1] = num[j];
				//num[j] = num[j+1];
				tmp = num[j+1];
				num[j+1] = num[j];
				num[j] = tmp;
			}
			//動作確認用
			for (int i = 0; i < num_size ; i++){
				printf("%d ", num[i]);
			}
			printf("\n");
		}
	}
}

int main(void){
	int num[5] = {7, 3, 1, 9, 6};
	int num_size = 5;
	printf("ソート前:");
	for (int i = 0; i < num_size; i++){
		printf("%d ", num[i]);
	}
	printf("\n");

	bubble_sort(num, num_size);

	printf("ソート後:");
	for (int i = 0; i < num_size ; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
}
