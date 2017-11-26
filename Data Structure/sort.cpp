#include <iostream>
using namespace std;
void BubbleSort(int *arr, int len);
void SelectSort(int *arr, int len);
void InsertSort(int *arr, int len);
void ShellSort(int *arr, int len);
void HeapSort(int *arr, int len);
void HeapAdjust(int *arr, int i, int len);
void MergeSort(int *arr, int len);
void MergePass(int *arr, int gap, int len);
void Merge(int *arr, int low, int mid, int high);
void QuickSort(int *arr, int len);
void QSort(int *arr, int low, int high);
int Partition(int *arr, int low, int high);
void swap(int *arr, int i, int j);
void print(int *arr, int len);
int main() {
	int arr1[10] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	//冒泡排序
	BubbleSort(arr1, 10);
	print(arr1, 10);

	//选择排序
	int arr2[10] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	SelectSort(arr2, 10);
	print(arr2, 10);

	//插入排序
	int arr3[10] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	InsertSort(arr3, 10);
	print(arr3, 10);

	//希尔排序
	int arr4[10] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	ShellSort(arr4, 10);
	print(arr4, 10);

	//堆排序
	int arr5[10] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	ShellSort(arr5, 10);
	print(arr5, 10);

	//归并排序
	int arr6[10] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	ShellSort(arr6, 10);
	print(arr6, 10);

	//快速排序
	int arr7[10] = { 9, 1, 5, 8, 3, 7, 4, 6, 2 };
	ShellSort(arr7, 10);
	print(arr7, 10);
	return 0;
}

void swap(int *arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void print(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

/*
 * 冒泡排序
 * 时间复杂度：
 * 最好的情况：排序的表本身就是有序的，需要n-1次比较，没有数据交换，时间复杂度为O(n)
 * 最坏的情况：排序的表示逆序，需要1+2+3+……+n-1次=n(n-1)/2次比较，时间复杂度为o(n^2)
 * */
void BubbleSort(int *arr, int len) {
	bool flag = true;
	for (int i = 0; i < len && flag; i++) {
		flag = false;
		for (int j = len - 2; j >= i; j--) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j, j + 1);
				flag = true;
			}
		}
	}
}

/*
 * 选择排序
 * 时间复杂度：
 * 比较次数：第i次排序需要n-i次比较，总共需要比较1+2+3+……+n-1 = n(n-1)/2次
 * 交换次数：最好情况为0次；最差情况为n-1次
 * 总的时间复杂度为o(n^2)
 * */
void SelectSort(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		int min = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			swap(arr, min, i);
		}
	}
}

/*
 * 插入排序
 * 最好的情况：排序的表本来就是有序的，一共比较n-1次，移动的次数为0
 * 最坏的情况：排序的表是逆序的，需要比较2+3+……+n = (n+2)*(n-1)/2次
 * 时间复杂度为O(n^2)
 * */
void InsertSort(int *arr, int len) {
	for (int i = 1; i < len; i++) {
		if (arr[i] < arr[i - 1]) {
			int temp = arr[i];
			int j = i - 1;
			for (; j >= 0 && arr[j] > temp; j--) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

/*
 * 希尔排序
 * 时间复杂度：O(n*log(n)~n^2)
 * */
void ShellSort(int *arr, int len) {
	for (int incre = len / 3 + 1; incre > 0; incre--) {
		for (int i = incre; i < len; i++) {
			if (arr[i] < arr[i - incre]) {
				int temp = arr[i];
				int j = i - incre;
				for (; j >= 0 && arr[j] > temp; j -= incre) {
					arr[j + incre] = arr[j];
				}
				arr[j + incre] = temp;
			}
		}
	}
}

/*
 * 堆排序
 * 构建堆的时间复杂度为O(n)
 * 重建堆的时间复杂度为O(nlogn)
 * */
void HeapSort(int *arr, int len) {
	//建立堆
	for (int i = len / 2; i >= 0; i--) {
		HeapAdjust(arr, i, len);
	}
	//排序
	for (int i = len - 1; i > 0; i--) {
		swap(arr, i, 0);
		HeapAdjust(arr, 0, i);
	}
}

void HeapAdjust(int *arr, int i, int len) {
	int temp = arr[i];
	for (int j = 2 * i; j < len; j *= 2) {
		if (j + 1 < len && arr[j] < arr[j + 1]) {
			j++;
		}
		if (temp >= arr[j])
			break;
		arr[i] = arr[j];
		i = j;
	}
	arr[i] = temp;
}

/*
 * 归并排序
 * 时间复杂度：O(nlogn) 归并排序的形式是二叉树，需要遍历的次数为二叉树的深度
 * 空间复杂度：O(n)
 * 稳定排序
 * */
void MergeSort(int *arr, int len) {
	for (int gap = 1; gap < len; gap *= 2) {
		MergePass(arr, gap, len);
	}
}

/*在某趟归并中，设各子表的长度为gap，则归并前R[0,n-1]中共有n/gap个有序的子表：R[0…gap-1],R[gap…2*gap-1],……R[(n/gap)*gap…n-1]
 若子表个数为奇数，则最后一个子表无须和其他子表归并（即本趟处理轮空）：若子表个数为偶数，则要注意到最后一对子表中后一个子表区间的上限为n-1
 */
void MergePass(int *arr, int gap, int len) {
	for (int i = 0; i + 2 * gap - 1 < len; i += 2 * gap) {
		Merge(arr, i, i + gap - 1, i + 2 * gap - 1);
	}
}

//合并两个子表
void Merge(int *arr, int low, int mid, int high) {
	int arr2[high - low + 1];
	int i = low;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= high) {
		if (arr[i] <= arr[j]) {
			arr2[k++] = arr[i++];
		} else {
			arr2[k++] = arr[j++];
		}
	}
	while (i <= mid) {
		arr2[k++] = arr[i++];
	}
	while (j <= high) {
		arr2[k++] = arr[j++];
	}
	for (k = 0, i = low; i <= high; i++, k++) {
		arr[i] = arr2[k];
	}
}

//快速排序
void QuickSort(int *arr, int len) {
	QSort(arr, 0, len - 1);
}

void QSort(int *arr, int low, int high) {
	int pivot;
	if (low < high) {
		pivot = Partition(arr, low, high);
		QSort(arr, low, pivot - 1);
		QSort(arr, pivot + 1, high);
	}
}

int Partition(int *arr, int low, int high) {
	int pivot = arr[low];
	while (low < high) {
		while (low < high && arr[high] >= pivot)
			high--;
		arr[low] = arr[high];
		while (low < high && arr[low] <= pivot)
			low++;
		arr[high] = arr[low];
	}
	arr[low] = pivot;
	return low;
}
