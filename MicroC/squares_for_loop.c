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
    for(i=0; i<20; i=i+1) {
        arr[i] = -1;
    }

    int j;
    for(j=0; j<n; j=j+1) {
        arr[j] = j * j;
    }
}

void sumarr(int n, int *arr[], int *sump) {
    int l;
    int tmp;
    for(l=0; l<n; l=l+1) {
        tmp = *sump;
        *sump = tmp + arr[l];
    }
}