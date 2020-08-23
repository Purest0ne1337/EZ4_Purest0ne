#include <iostream>
#define MaxSize 10
typedef struct {
    char data[MaxSize];
    int top;
}SqStack;

void InitStack(SqStack& S) {
    S.top = -1;
}

bool StackEmpty(SqStack S) {
    return S.top == -1;
}

bool Push(SqStack& S, char ndata) {
    if (S.top == MaxSize-1) return false;
    S.data[++S.top] = ndata;
    return true;
}

bool Pop(SqStack& S, char& retElem) {
    if (StackEmpty(S)) return false;
    retElem = S.data[S.top--];
    return true;
}

bool bracketCheck(char str[], int length) {
    SqStack S;
    InitStack(S);
    for (int i = 0; i < length; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') Push(S, str[i]);
        else {
            if (StackEmpty(S)) return false;
            char topElem;
            Pop(S, topElem);
            if (str[i] == ')' && topElem != '(') return false;
            if (str[i] == ']' && topElem != '[') return false;
            if (str[i] == '}' && topElem != '{') return false;
        }
    }
    return StackEmpty(S);
}

int main()
{
  return 0;
}
