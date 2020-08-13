#include <iostream>
#include <cmath>

using namespace std;
//e.g.5-4
int str_to_int(char str[]) {
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++)
        n = n * 10 + (str[i] - '0');
    return n;
}
//e.g.5-5
int find_substr(char str[], char sub_str[]) {
    int len, sub_len;
    for (len = 0; str[len] != '\0'; len++);
    for (sub_len = 0; sub_str[sub_len] != '\0'; sub_len++);
    for (int i = 0; i <= len - sub_len; i++) {
        int j = 0;
        while (j < sub_len && sub_str[j] == str[i + j])j++;
        if (j == sub_len) return i;
    }
    return -1;
}

//e.g.5-6
void str_reverse() {
    const int MAX_LEN = 100;
    char str[MAX_LEN];
    int len;
    cin >> str;
    for (len = 0; str[len] != '\0'; len++);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << str << endl;
}

//quick sort
int split(int x[], int first, int last) {
    int split_point, pivot;
    pivot = x[first];
    split_point = first;
    for (int unknown = first + 1; unknown <= last; unknown++)
        if (x[unknown] < pivot) {
            split_point++;
            int temp = x[split_point];
            x[split_point] = x[unknown];
            x[unknown] = temp;
        }
    x[first] = x[split_point];
    x[split_point] = pivot;
    return split_point;
}

void quick_sort(int x[], int first, int last) {
    if (first < last) {
        int split_point;
        split_point = split(x, first, last);
        quick_sort(x, first, split_point - 1);
        quick_sort(x, split_point + 1, last);
    }
}

//5.8.6
void int_to_str(int n, char str[]) {
    int i = 0;
    while (n != 0) {
        str[i++] = n % 10 + '0';
        n /= 10;
    }
    str[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char c = str[i - j - 1];
        str[i - j - 1] = str[j];
        str[j] = c;
    }
}

//5.8.7
int find_root(double a, double b, double c, double& x1, double& x2) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) return 0;
    else if (delta == 0) {
        x1 = x2 = -b / 2 * a;
        return 1;
    }
    else {
        x1 = (-b - sqrt(delta)) / 2 * a;
        x2 = (-b + sqrt(delta)) / 2 * a;
        return 2;
    }
}

//5.8.8
void string_type_counter(){
    char str[100];
    cin >> str;
    int lower_c = 0, upper_c = 0, number_c = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') lower_c++;
        else if (str[i] >= 'A' && str[i] <= 'Z') upper_c++;
        else if (str[i] >= '0' && str[i] <= '9') number_c++;
    }
    cout << lower_c << '\t' << upper_c << '\t' << number_c << endl;
}

//5.8.10
void swap(int a[], int m, int n) {
    int temp;
    for (int i = 0; i < m; i++) {
        temp = a[0];
        for (int j = 1; j < m + n; j++)
            a[j - 1] = a[j];
    }
    a[m + n - 1] = temp;
}

//5.8.14
bool is_in_s2(char c, char s2[]) {
    for (int i = 0; s2[i] != '\0'; i++) {
        if (c == s2[i]) return 1;
    }
    return 0;
}

void del(char s1[], int i) {
    int j;
    for (j = i; s1[j + 1] != '\0'; j++) {
        s1[j] = s1[j + 1];
    }
    s1[j] = '\0';
}

int squeeze(char s1[], char s2[]) {
    int count = 0;
    for (int i = 0; s1[i] != '\0';) {
        if (is_in_s2(s1[i], s2)) {
            del(s1, i);
            count++;
        }
        else i++;
    }
    return count;
}

int main()
{
    return 0;
}
