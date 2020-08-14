#include <iostream>
using namespace std;

int my_strlen(const char* s) {
    int count=0;
    while (s[++count] != '\0') {
    }
    return count;
}

void my_strcpy(char* new_string, const char* origin_string) {
    int i;
    for (i = 0; origin_string[i] != '\0'; i++) {
        new_string[i] = origin_string[i];
    }
    new_string[i] = '\0';
}

void my_strncpy(char* new_string, const char* origin_string, int n) {
    int i;
    for (i = 0; origin_string[i] != '\0' && i < n; i++) {
        new_string[i] = origin_string[i];
    }
    new_string[i] = '\0';
}

//imitate Microsoft's code, Microsoft is a genius, but these ez 4 me.
char* my_strcat(char* former, const char* latter) {
    char* p = former;
    while (*p) p++;
    while (*latter) *p++ = *latter++;
    return former;
}

char* my_strncat(char* former, const char* latter, int n) {
    char* p = former;
    while (*p) p++;
    int i = 0;
    while (*latter && i++ < n) *p++ = *latter++;
    return former;
}

int my_strcmp(const char* s1, const char* s2) {
    while (*s1 == *s2) {
        if ('\0' == *s1) return 0;
        s1++; s2++;
    }
    return *s1 - *s2;
}

int my_strncmp(const char* s1, const char* s2, int n) {
    int i = 0;
    while (i++ < n-1 && *s1 == *s2) {
        if ('\0' == *s1) return 0;
        s1++; s2++;
    }
    return *s1 - *s2;
}

int main()
{
    return 0;
}
