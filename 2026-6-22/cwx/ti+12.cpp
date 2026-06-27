#include <stdio.h>
int main() {
    char ch;
    int  letter = 0, space = 0, number = 0, other = 0;
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            letter++;
        else if (ch == ' ')
            space++;
        else if (ch >= '0' && ch <= '9')
            number++;
        else
            other++;
    }
    printf("英文字母：%d\n", letter);
    printf("空格：%d\n", space);
    printf("数字：%d\n", number);
    printf("其他字符：%d", other);
    return 0;
}
