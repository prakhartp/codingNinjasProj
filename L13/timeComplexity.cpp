//#include <iostream>
#include <sys/time.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
using namespace std;

void selectionSort(int a[], int n) {
    for(int j = 0; j < n-1; j++) {
        int min = a[j];
        int pos = j;
        for(int i = j+1; i < n; i++) {
            if(a[i] < min) {
                min = a[i];
                pos = i;
            }
            int temp = a[j];
            a[j] = min;
            a[pos] = temp;
        }                                                    }
}


void merge(int arr[], int start, int mid, int end) {
    int temp[end-start];
    int i = start;
    int j = mid+1;
    int k = 0;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } 
        else {
            temp[k++] = arr[j++];
        }
    }
    if (i <= mid) {
        while(i <= mid) {
            temp[k++] = arr[i++];
        }
    }
    else if (j <= end) {
        while( j <= end) {
            temp[k++] = arr[j++];
        }
    }
    k=0;
    for(int l = start; l <=end ; l++) {
            arr[l] = temp[k++];
    }
}
void mergesort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (end+start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    merge(arr, start, mid, end);
}


long getTimeinMicroSeconds() {
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec * 1000000 + start.tv_usec;
}



int main() {
    int n;
    cin >> n;
    int arr[1000000];
    long starttime, endtime;

    // Merge Sort
    for(int i = 0; i < n; i++) {
        arr[i] = n-i;
    }
    starttime = getTimeinMicroSeconds();
    mergesort(arr, 0 , n-1);
    endtime = getTimeinMicroSeconds();

    cout << "Merge Sort time = " <<endtime -starttime << endl;

    // Selection Sort
    for(int i = 0; i < n; i++) {
        arr[i] = n-i;
    }
    starttime = getTimeinMicroSeconds();
    selectionSort(arr, n);
    endtime = getTimeinMicroSeconds();

    cout << "Selection Sort time = " <<endtime -starttime << endl;
}






