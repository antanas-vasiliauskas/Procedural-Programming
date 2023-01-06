#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 50000
#define SAMPLE_SIZE 1


void swap(int* a, int* b);
void fill_arr(int *arr, int n);
void print_arr(int *arr, int n);
char is_sorted(int *arr, int n);
void bubble_sort(int *arr, int n);
void insert_sort(int *arr, int n);
void selection_sort(int *arr, int n);
void merge_sort(int *arr, int n);
void quicksort(int *arr, int low, int high);
void quick_sort(int *arr, int n){
    quicksort(arr, 0, n);
}

void test_sort_algorithm(void (*fun[])(int*, int), int n, char** names);




int main(){
    srand((time(NULL)));
    char* names[] = {"bubble sort", "insert sort", "selection sort", "merge sort", "quick sort"};
    void (*fun[])(int*, int) = {bubble_sort, insert_sort, selection_sort, merge_sort, quick_sort};
    test_sort_algorithm(fun, 5, names);
}

int assigments = 0;
int comparrisons = 0;
int time_took = 0;


void test_sort_algorithm(void (*fun[])(int*, int), int n, char** names){
    int *assigments_sum = calloc(n, sizeof(int));
    int *comparrisons_sum = calloc(n, sizeof(int));
    int *time_sum = calloc(n, sizeof(int));
    for(int i = 0; i < SAMPLE_SIZE; i++){
        int *arr = malloc(sizeof(int) * SIZE);
        fill_arr(arr, SIZE);
        for(int j = 0; j < n; j++){
            
            int *cpy = malloc(sizeof(int) * SIZE);
            memcpy(cpy, arr, SIZE * sizeof(int));
            clock_t start = clock();
            (*fun[j])(cpy, SIZE);
            clock_t end = clock();
            time_took = end - start;
            if(!is_sorted(cpy, SIZE)){
                printf("Not sorted\n");
                return;
            }
            assigments_sum[j] += assigments;
            assigments = 0;
            comparrisons_sum[j] += comparrisons;
            comparrisons = 0;
            time_sum[j] += time_took;
            time_took = 0;
            free(cpy);
        }
        free(arr);
    }

    for(int i = 0; i < n; i++)
        printf("%s performance: assigments: %d, comparrisons: %d, time: %d milisec\n", names[i], assigments_sum[i]/SAMPLE_SIZE, comparrisons_sum[i]/SAMPLE_SIZE, time_sum[i]/SAMPLE_SIZE);
    
}

void swap(int* a, int* b){
    if(a == b) 
        return;
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
    comparrisons+=1;
    assigments+=3;
}

void fill_arr(int *arr, int n){
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 900 + 100;
    }
}

void print_arr(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

char is_sorted(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]){
            goto other;
        }
    }
    return 1;
    other:
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}

void quicksort(int *arr, int lo, int hi){
    if(lo >= 0 && hi >= 0 && lo < hi){
        int pivot = lo;
        int i = lo;
        int j = hi;
        int temp;
        while(i < j){
            while(arr[i] <= arr[pivot] && i < hi)
                i++, comparrisons++;
            while(arr[j] > arr[pivot])
                j--, comparrisons++;
            if(i < j)
                swap(&arr[i], &arr[j]);
        }
        
        swap(&arr[pivot], &arr[j]);
        quicksort(arr,lo,j-1);
        quicksort(arr,j+1,hi);

    }
}

void merge_sort(int *arr, int n){

    if(n <= 1)
        return;

    int *tmp = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        tmp[i] = arr[i], assigments++;

    int *left = tmp;
    int *right = tmp + n/2;

    assigments += 2;
    
    merge_sort(left, n/2);
    merge_sort(right, n - n/2);
    
    int left_index = 0;
    int right_index = 0;
    int arr_index = 0;

    while(left_index < (n/2) && right_index < (n - n/2)){
        if(left[left_index] <= right[right_index])
            arr[arr_index++] = left[left_index++];
        else
            arr[arr_index++] = right[right_index++];
        comparrisons += 1;
        assigments++;
    }

    while(left_index < (n/2))
        arr[arr_index++] = left[left_index++], assigments++;
    while(right_index < (n - n/2))
        arr[arr_index++] = right[right_index++], assigments++;

    free(tmp);
}

void bubble_sort(int *arr, int n){
    char swaped = 1;
    while(swaped != 0){
        swaped = 0;
        for(int i = 0; i < n-1; i++){
            comparrisons++;
            if(arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
                swaped = 1;
            }
        }
    }
}

void selection_sort(int *arr, int n){
    for(int i = 0; i < n; i++){
        int min = -1;
        for(int j = i; j < n; j++){
            comparrisons++;
            if(min == -1 || arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != -1 && i != min)
            swap(&arr[i], &arr[min]);
    }
}

void insert_sort(int *arr, int n){
    int key = 0, j = 0;
    for(int i = 1; i < n; i++){
        key = arr[i];
        j = i - 1; 
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            assigments++;
            comparrisons++;
            j--;
        }
        arr[j+1] = key;
    }
}