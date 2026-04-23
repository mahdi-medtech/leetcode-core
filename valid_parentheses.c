bool isValid(char* s) {
    char stack[100];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++){
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{'){
            stack[++top] = ch;
        }

        else if(ch == ')' || ch == ']' || ch == '}'){
            if(top == -1){
                return false;
            }

            char topChar = stack[top--];

            if((ch == ')' && topChar != '(') ||
               (ch == ']' && topChar != '[') ||
               (ch == '}' && topChar != '{')){
            return false;
            }
        }
    }
    return(top == -1);
}
