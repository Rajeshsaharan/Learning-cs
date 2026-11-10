
int maximumRows(int** matrix, int matrixSize, int* matrixColSize,
                int numSelect) {
    int * result = malloc(sizeof(int) * (1 << matrixColSize[0]));
    int j = 0;
    for (int mask = 0; mask < (1 << matrixColSize[0]); mask++) {
        if (__builtin_popcount(mask) == numSelect) {
            result[j++] = mask;
        }
    }
    int max = INT_MIN;
    int i = 0;
    while(i < j){
        int k = 0 ;
        int count = 0;
        while(k < matrixSize){
            int z = 0;
            while( z < matrixColSize[0]){
                if(matrix[k][z] == 0) { z++; continue;}
                else if (matrix[k][z] == ((result[i] >> z) & 1)){ z++; continue;}
                else break;
                z++;
            }
            if(z == matrixColSize[0]) count++;
            k++;
        }
        max = max > count ? max : count;
        i++;
    }
    return max;
}