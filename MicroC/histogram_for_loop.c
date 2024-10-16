// micro-C histogram

void main(int n) {
    int ns[7];
    ns[0] = 1;
    ns[1] = 2;
    ns[2] = 1;
    ns[3] = 1;
    ns[4] = 1;
    ns[5] = 2;
    ns[6] = 0;

    int freq[10];

    histogram(7, ns, 3, freq);
    print freq[0];
    print freq[1];
    print freq[2];
    print freq[3];
    println;
}

// histogram using memoization
void histogram(int n, int ns[], int max, int freq[]) {
    // max size is 128 using memoization
    int memo[128];
    int i, j, k;

    for(i=0;i<128;i=i+1) {
        memo[i] = 0;
    }

    for(j=0;j<n;j=j+1) {
        memo[ns[j]] = memo[ns[j]] + 1;
    }

    for(k=0;k<max+1;k=k+1) {
        freq[k] = memo[k];
    }
}
