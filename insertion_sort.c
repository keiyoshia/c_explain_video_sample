#include <stdio.h>

void insertion_sort(int num[], int num_size){
	int i, j, tmp;
	//配列の要素の分繰り返す
	//未ソート部分の先頭i
	for (i=1; i<num_size; i++){
		//j-1を先頭へ
		for (j=i; j>0; j--){
			//隣接値の大小を比較
			if (num[j-1] > num[j]){
				//隣接値を交換
				tmp = num[j-1];
				num[j-1] = num[j];
				num[j] = tmp;
			}
			//動作確認用
			for (int i=0 ; i < num_size ; i++){
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
	for (int i=0 ; i < num_size ; i++){
		printf("%d ", num[i]);
	}
	printf("\n");

	insertion_sort(num, num_size);

	printf("ソート後:");
	for (int i=0 ; i < num_size ; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
}
