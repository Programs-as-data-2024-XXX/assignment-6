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

    int freq[7];

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

    int i;
    i = 0;

    while (i < 128) {
        memo[i] = 0;
        i = i + 1;
    }

    i = 0;
    while (i < n) {
        memo[ns[i]] = memo[ns[i]] + 1;
        i = i + 1;
    }

    i = 0;
    while (i < max+1) {
        freq[i] = memo[i];
        i = i + 1;
    }
}
