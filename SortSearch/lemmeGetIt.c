#include <stdio.h>

int binarySearch(int target, int list[], int len);
int bubbleSort(int list[], int len);

int main(void){
    int list[] = {35,32,2,15,1,6,1,6,12,62,6,2,216,1613,163,114,1634,74845,8534,372,28,69,45};
    int len = sizeof(list) / sizeof(list[0]);

    bubbleSort(list, len); //dk why cannot find size of array in fn. Hence, passing it as an arg
    binarySearch(74845, list, len); //seems like the list in main got sorted after passing it into bubbleSort
}

int binarySearch(int target, int list[], int len){
    int low=0, high=len, mid;
    while(low<=high){
        mid = (low+high) / 2;
        printf("%d\n", list[mid]);
        if(list[mid]==target){
            printf("found %d\n", target);
            return 0;
        }
        else if(list[mid]<target) low = mid+1;
        else high = mid-1;
    }
    printf("not found\n");
    return 1;
}

int bubbleSort(int list[], int len){
    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if(list[j] > list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    for(int i=0; i<len; i++){
        printf("%d ", list[i]);
    }
    putchar('\n');
}