#include <stdio.h>
#include <memory.h>


void insertionSort(int array[], int size) {
    for(int i = 1; i < size; ++i){
        int j = i - 1;
        int x = array[i];
        while (j >= 0 && array[j] > x){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = x;
    }
}

int partition(int array[], int l, int h) {
    int pivot = array[h];
    int i = l - 1;
    for(int j = l; j < h; ++j){
        if(array[j] < pivot){
            i++;
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
    int tmp = array[i + 1];
    array[i + 1] = array[h];
    array[h] = tmp;

    return i + 1;
}

void quickSort(int array[], int l, int h) {
    if(l < h){
        int pi = partition(array, l, h);
        quickSort(array, l, pi - 1);
        quickSort(array, pi + 1, h);
    }
}

void merge(int array[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int tmp[h + 5];
    while (i <= mid && j <= h){
        if(array[i] < array[j]){
            tmp[k++] = array[i++];
        }
        else{
            tmp[k++] = array[j++];
        }
    }
    while (i <= mid)tmp[k++] = array[i++];
    while (j <= h)tmp[k++] = array[j++];

    for(int x = l; x <= h; ++x){
        array[x] = tmp[x];
    }
}

void mergeSort(int array[], int l, int h) {
    if(l < h){
        int mid = (l + h) / 2;
        mergeSort(array, l, mid);
        mergeSort(array, mid + 1, h);
        merge(array, l, mid, h);
    }
}


int main() {
    int arr[] = {2, 5, 1, 7, 1, 7, 9, 4};
    memset(arr,-1,sizeof arr);
    mergeSort(arr, 0, 7);
    for(int i = 0; i < 8; ++i){
        printf("%d ", arr[i]);
    }
    return 0;
}


