char* stack[3001];
int top;
// stack is data structure where we can use to elementate error
// or recursive calls
// becasue we can check on previous proccessed value;

int my_strlen(const char * str){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){ count++;
    return count;
}


char * my_strdup(const char * str){
    int len_of_str = my_strlen(str);
    char * return_string =  malloc(sizeof(char)  * (len_of_str + 1));
    for(int i = 0; str[i] != '\0'; i++) return_string[i] = str[i];
    return_string[i] = '\0';
    return return_string;

}


char* simplifyPath(char* path) {
    int top = -1;
    int i = 0;
    while (path[i] != '\0') {
        if (path[i] == '/') {
            i++;
            continue;
        };
        char temp[100];
        int j = 0;
        while (path[i] != '\0' && path[i] != '/') {
            temp[j++] = path[i];
            i++;
        }

        temp[j] = '\0';
        if (strcmp(temp, ".") == 0) {
            continue;
        }

        else if (strcmp(temp, "..") == 0) {
            if(top >=0) top--;
        }
        else {
            stack[++top] = strdup(temp);
            printf("%s\n", stack[top]);
        }

        
    }
    char *result = malloc(3001);
    int pos = 0;

    result[pos++] = '/';

    for (int k = 0; k <= top; k++) {
        int len = strlen(stack[k]);

        memcpy(result + pos, stack[k], len);
        pos += len;
        if(k < top) result[pos++] = '/';
        

        free(stack[k]);
    }
    result[pos] = '\0';

    return result;
    
}