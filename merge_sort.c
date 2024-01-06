#include <stdio.h>

#define MAX_SIZE 100
void merge_sort(int num[], int num_size) {
    if (num_size <= 1) {
        return;
    }

    //配列を分割する境目
    int mid = num_size / 2;
    //分割後の左側の配列
    int left[MAX_SIZE];
    //分割後の右側の配列
    int right[MAX_SIZE];
    //分割前の配列の、境目より左を配列leftに格納
    for (int i = 0; i < mid; i++) {
        left[i] = num[i];
    }
    //動作確認用
    printf("左 ");
    for (int i=0 ; i < mid ; i++){
        printf("%d ", left[i]);
    }
    //分割前の配列の、境目より右を配列rightに格納
    for (int i = mid; i < num_size; i++) {
        right[i - mid] = num[i];
    }
    //動作確認用
    printf("\n");
    printf("右 ");
    for (int i=mid; i < num_size ; i++){
        printf("%d ", right[i-mid]);
    }
    printf("\n");

    //左側の配列に対して再帰(再び分割)
    merge_sort(left, mid);
    //右側の配列に対して再帰(再び分割)
    merge_sort(right, num_size - mid);

    //配列をソートしながらマージする
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < mid && j < num_size - mid) {
        //2つの配列の先頭の大小を比較し格納
        if (left[i] <= right[j]) {
            num[k] = left[i];
            k++;
            i++;
            //動作確認用
            printf("num ");
            for (int i=0 ; i < num_size ; i++){
			printf("%d ", num[i]);
            }
            printf("\n");
        } else {
            num[k] = right[j];
            k++;
            j++;
            //動作確認用
            printf("num ");
            for (int i=0 ; i < num_size ; i++){
			printf("%d ", num[i]);
            }
            printf("\n");
        }
    }
    //分割後の配列の残りを格納
    while (i < mid) {
        num[k] = left[i];
        k++;
        i++;
        //動作確認用
        printf("num ");
        for (int i=0 ; i < num_size ; i++){
			printf("%d ", num[i]);
        }
        printf("\n");
    }
    //分割後の配列の残りを格納
    while (j < num_size - mid) {
        num[k] = right[j];
        k++;
        j++;
        //動作確認用
        printf("num ");
        for (int i=0 ; i < num_size ; i++){
			printf("%d ", num[i]);
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

	merge_sort(num, num_size);

	printf("ソート後:");
	for (int i=0 ; i < num_size ; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
}
