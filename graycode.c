
int* grayCode(int n, int* returnSize) {
    int cap = 1 << n; //left shift
    int * result = malloc(sizeof(int) * cap);
    for(int i = 0; i < cap; i++){
        result[i] = i ^ (i >> 1);
    }
    *returnSize = cap;
    return result;
}