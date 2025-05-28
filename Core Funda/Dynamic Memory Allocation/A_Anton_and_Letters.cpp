#include <stdio.h>

int main() {
    char str[1005];
    int freq[26] = {0};
    int uniqueCount = 0;

  
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            if (freq[index] == 0) {
                freq[index] = 1;
                uniqueCount++;
            }
        }
    }

    printf("%d\n", uniqueCount);
    return 0;
}
