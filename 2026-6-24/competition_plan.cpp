#include <afxres.h>
#include <stdbool.h>
#include <stdio.h>

bool in(char* selected, int len, char current) {
    for (int i = 0; i < len; ++i) {
        if (selected[i] == current) return true;
    }
    return false;
}

// 3v3
void CompetitionPlan(char* competitor_list1, char* competitor_list2) {
    char selected[4];
    selected[3] = '\0';
    for (int i = 0; i < 3; ++i) {
        int selected_size         = 0;
        selected[selected_size++] = competitor_list2[i];
        for (int j = 0; j < 3; ++j) {
            if (in(selected, selected_size, competitor_list2[j])) continue;
            selected[selected_size++] = competitor_list2[j];
            for (int k = 0; k < 3; ++k) {
                if (in(selected, selected_size, competitor_list2[k])) continue;
                selected[selected_size++] = competitor_list2[k];
                printf("%s\n", selected);
                selected_size--;
            }
            selected_size--;
        }
    }
}

void CompetitionPlanCommon(char* comp);

int main() {
    char competitor_list1[] = {'a', 'b', 'c'};
    char competitor_list2[] = {'d', 'e', 'f'};
    CompetitionPlan(competitor_list1, competitor_list2);
    return 0;
}
