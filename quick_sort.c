#include <stdio.h>

void quick_sort(int num[ ], int start, int end){
    int i, j, p, tmp;
    i = start;
    j = end;
    //配列中の任意の値を選択(ここでは真ん中の値)
    p = num[(start + end) / 2];

    while (1){
        //動作確認用
        printf("i:");
        printf("%d ", i);
        //pより大きい値を先頭から探索
        while (num[i] < p){
            i++;
            //動作確認用
            printf("%d ", i);
        }
        //動作確認用
        printf("j:");
        printf("%d ", j);
        //pより小さい値を終端から探索
        while (p < num[j]){
            j--;
            //動作確認用
            printf("%d ", j);
        }
        if (i >= j) break;
        //pより大きい値[i]とpより小さい値[j]を交換
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
        //動作確認用
        printf("i:%d j:%d\n", i, j);
        printf("num1 ");
        for (int k=start ; k <= end ; k++){
		printf("%d ", num[k]);
        }
        printf("\n");
        i++;
        j--;
    }
    //動作確認用
    printf("\ni:%d j:%d\n", i, j);
    printf("num2 ");
    for (int k=start ; k <= end ; k++){
		printf("%d ", num[k]);
	}
	printf("\n");
    //iより左に複数要素があれば再帰(再びp未満とpより大きい値の交換)
    if (start < i - 1){
        //動作確認用
        printf("左\n");
        quick_sort(num, start, i - 1);
    }
    //jより右に複数要素があれば再帰(再びp未満とpより大きい値の交換)
    if (j + 1 <  end){
        //動作確認用
        printf("右\n");
        quick_sort(num, j + 1, end);
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

	quick_sort(num, 0, num_size-1);

	printf("ソート後:");
	for (int i=0 ; i < num_size ; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
}
