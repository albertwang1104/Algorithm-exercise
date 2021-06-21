# 資訊學習歷程
## 動機
> 上學期的資訊課上了兩種排序演算法 ~ 泡沫排序和選擇排序，這學期我和另一位同學想在排序演算法這方面有更深入的學習，所以我們上網搜尋排序演算法的相關資料，選擇五種排序方法 ( 泡沫排序、選擇排序、插入排序、合拼排序、快速排序 )，用C語言寫成函式，做時間複雜度的比較。之前我是學Python，C語言只略略讀過，也透過這次的機會，將C語言學得更熟練。

## 心得
> 

## 內容
----
###  **交換函式**
> 因為排序常常需要做值的交換，所以我先寫一個交換swap函式
```c
void swap(int *a, int *b) {
	int temp=*a;
    *a=*b;
    *b=temp;
}
```
----
### **泡沫排序 (Bubble Sort)**
> 泡沫排序是將陣列裡的元素兩兩做比較，如果順序錯誤就互相交換，直到所有的元素順序沒有錯誤。這個演算法的名字由來，是因為越小的元素會經由交換慢慢「浮」到數列的頂端而得，也就是一一將大的元素推至數列的底部。

#### 時間複雜度 (Time Complexity)
* Best Case：**Ο(n)**
當資料的順序恰好為由小到大時，第一次執行後，未進行任何交換，直接提前結束

* Worst Case：**Ο(n2)**
當資料的順序恰好為由大到小時，每回合分別執行：n-1、n-2、...、1 次，(n-1) + (n-2) + ... + 1 = n(n-1)/2 ⇒ Ο(n2)

* Average Case：**Ο(n2)**
第n筆資料，平均比較 (n-1)/2 次

#### 動畫
![](\gif\bubbleSort.gif)

#### 程式碼
```C
void BubbleSort(int arr[], int len) {
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
----
### **選擇排序 (Selection Sort)**

#### 動畫
![](\gif\selectionSort.gif)

#### 程式碼
```C
void SelectionSort(int arr[], int len) {
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
----
### **插入排序(Insertion Sort)**

#### 動畫
![](\gif\insertionSort.gif)

#### 程式碼
```c
void InsertionSort(int arr[], int len) {
	int i, preIndex, n;
	for(i = 1; i < len; i++) {
		preIndex = i-1;
		n =a rr[i];
		while(n < arr[preIndex] && preIndex >= 0) {    // 將 n 插入其位置
			arr[preIndex+1] = arr[preIndex];
			preIndex -= 1;
		}
		arr[preIndex+1] = n;
	}
}
```
----
### **合拼排序 (Merge Sort)**

#### 動畫
![](\gif\mergeSort.gif)

#### 程式碼
```c
void MergeSort(int arr[], int left, int right) {
	if (left < right) {
		int middle = (left+right)/2;		// 找出中間值
		
		MergeSort(arr, left, middle);		// 分左右做合拼排序
		MergeSort(arr, middle+1, right);

		Merge(arr, left, middle, right);	// 將左右兩個已排序好的陣列合拼
	}
}

void Merge(int arr[], int l, int m, int r) {
	int i, j, k;
int n1 = m-l+1, n2 = r-m;			// 找出左右兩陣列的大小
	int left[n1], right[n2];		// 申請陣列
	
	for (i = 0; i < n1; i++)		// 複製陣列元素
		left[i] = arr[l+i];
	for (j = 0; j < n2; j++)
		right[j] = arr[m+1+j];

	i = 0;		// 左陣列的索引值
	j = 0;		// 右陣列的索引值
	k = l;		// 合拼陣列的索引值
	while (i < n1 && j < n2) {
		if(left[i] <= right[j]) {	// 比大小並放入合拼陣列
			arr[k] = left[i];
			i++;	
		}
		else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {				// 若陣列有剩餘的元素，將元素放入合拼陣列
		arr[k] = left[i];
		i++;
		k++;
	}
	
	while (j < n2) {
		arr[k] = right[j];
		j++;
		k++;
	}
}
```
----
### **快速排序 (Quick Sort)**

#### 動畫
![](\gif\quickSort.gif)

