#include <stdio.h>
int linear_search(int num[], int num_size, int search){
	int i;
	//配列の先頭から繰り返す
	for (i = 0; i < num_size; i++){
		//[i]と、探索する値が一致したら
        if (num[i] == search){
			//何番目かを返す
			return i;
        }
	}
}

int main(void){
	int num[5] = {7, 3, 1, 9, 6};
	int num_size = 5;
    int search = 1;
    int id;
	id = linear_search(num, num_size, search);

	printf("%d番目", id);
}
