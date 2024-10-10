// micro-C arrsum

void main(int n) {
    int arr[20];    

    initarray(n, arr);

    int sump;
    sumarr(n, arr, &sump);
    
    print sump;
    println;
}

void initarray(int n, int* arr[]) {
    // Ensure that we "only" use the needed steps
    // Like this we can check when the arr is done
    // based on -1
    int i;
    i = 0; 
    while (i < 20) {
        arr[i] = -1;
        i = i + 1;
    }

    int j;
    j = 0;
    while (j < n) {
        arr[j] = j * j;
        j = j + 1;
    }
}

void sumarr(int n, int *arr[], int *sump) {
    int l;
    int tmp;
    l = 0;
    while (l < n) {
        tmp = *sump;
        *sump = tmp + arr[l];
        l = l + 1;
    }
}