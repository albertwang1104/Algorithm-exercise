# 資訊學習歷程
===========
## 動機
> 上學期的資訊課上了兩種排序演算法~泡沫排序和選擇排序，這學期我和另一位同學想在排序演算法這方面有更深入的學習，所以我們上網搜尋排序演算法的相關資料，選擇五種排序方法，用C語言寫成函式，做時間複雜度的比較。之前我是學Python，也透過這次的機會，將C語言學得更熟練。

## 內容
###  交換函式
> 因為排序常常需要做值的交換，所以我先寫一個交換swap函式
```c
void swap(int *a, int *b) {
	int temp=*a;
    *a=*b;
    *b=temp;
}
```
----
### 泡沫排序(bubble sort)
```C
void bubble_sort(int *arr, int len) {
	int i=0,j=0;
    for(i = 0; i < len; i++) {
        for(j = 0; j < len-1-i; j++) {
            if(arr[j+1] < arr[j]) {    // 相鄰兩元素比較
            	swap(&arr[j+1], &arr[j]);	// 如果第一個比第二個大，互相交換
 	     	}
	    }
	}
}
```
#### 動畫

![](/gif/bubbleSort.gif)

----

### 選擇排序(selection sort)
```C
void selection_sort(int *arr, int len) {
	int i=0, j=0, min;
	for(i = 0; i < len-1; i++) {
		min=i;            //記錄最小值的索引
		for(j = i; j < len; j++) {
			if(arr[j] < arr[min]) {
				min=j;
			}
		}
		if(i != min) {    // i 不是最小數時，將 i 和最小數做交换
			swap(&arr[min], &arr[i]);
		}
	}
}
```

### 插入排序(insertion sort)
```c
void insertion_sort(int *arr, int len) {
	int i, preIndex, n;
	for(i = 1; i < len; i++) {
		preIndex=i-1;
		n=arr[i];
		while(n < arr[preIndex] && preIndex >= 0) {    // 將 n 插入其位置
			arr[preIndex+1]=arr[preIndex];
			preIndex-=1;
		}
		arr[preIndex+1]=n;
	}
}
```
