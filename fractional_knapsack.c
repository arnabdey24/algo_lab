#include <stdio.h>

typedef struct element{
    int p;
    int w;
    double pricePerUnit;
}Element;

void insertionSort(Element array[], int size) {
    for(int i = 1; i < size; ++i){
        int j = i - 1;
        Element x = array[i];
        while (j >= 0 && array[j].pricePerUnit > x.pricePerUnit){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = x;
    }
}

int main(){
    int n=4;
    int w[]={18,15,20,10};
    int p[]={25,14,20,15};
    int knapsackSize=10;

    Element elements[n];
    for(int i = 0; i < n; ++i){
        elements[i].p=p[i];
        elements[i].w=w[i];
        elements[i].pricePerUnit=(double)w[i]/p[i];
    }

    double totalPrice=0;
    int sizeLeft=knapsackSize;

    for(int i = n-1; i >= 0; --i){
        if(sizeLeft>=elements[i].w){
            totalPrice+=elements[i].p;
            sizeLeft-=elements[i].w;
        }
        else{
            totalPrice+=sizeLeft*elements[i].pricePerUnit;
            sizeLeft=0;
        }
    }

    printf("%lf\n",totalPrice);
}


