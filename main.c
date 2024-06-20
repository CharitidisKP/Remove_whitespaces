#include<stdio.h>
#include<string.h>

void removeSpacesAndNewlines(char *str) {
    int count = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\r') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[5000];
    printf("Enter a multi-line sequence: \n");

    int c;
    int index = 0;
    while ((c = getchar()) != EOF) {
        if (index >= sizeof(str) - 1) {
            printf("Input too long!\n");
            return 1;
        }
        str[index++] = c;
    }
    str[index] = '\0';

    removeSpacesAndNewlines(str);
    printf("Sequence as a continuous single line:\n%s\n", str);
    return 0;
}
