// micro-C arrsum

int arr[4];

void main(int n) {
    arr[0] = 7;
    arr[1] = 13;
    arr[2] = 9;
    arr[3] = 8;

    int* sump;
    *sump = 0;

    sumarr(n, arr, sump);
    print *sump;
    println;
}

void sumarr(int n, int arr[], int *sump) {
    int l;
    int tmp;
    l = 0;
    while (l < n) {
        tmp = *sump;
        *sump = tmp + arr[l];
        l = l + 1;
    }
}