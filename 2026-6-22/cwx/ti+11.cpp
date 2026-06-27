#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int  score;
};

// C/C++/Java/Python/数据结构/面向对象(面向过程)/计算机网络/
void MaxScore(Student stu[], int len, char name[], int* score) {
    int tmp = 0;  // index of result
    for (int i = 1; i < len; ++i) {
        if (stu[i].score > stu[tmp].score) tmp = i;
    }
    strcpy(name, stu[tmp].name);
    *score = stu[tmp].score;
}

int main() {
    Student stu[20] = {{"WS", 98},  {"MXY", 59}, {"ZSY", 61},
                       {"LYH", 10}, {"CSP", 45}, {"CH", 90},
                       {"YXT", 66}, {"NZN", 88}};
    char    name[20];
    int     score;
    MaxScore(stu, 20, name, &score);
    printf("Name = %s, Score: %d\n", name, score);
    return 0;
}
