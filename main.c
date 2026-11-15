#include <stdio.h>

int main(void)
{
    int upper_limit;
    long total_sum = 0;

    scanf("%d", &upper_limit);

    if (upper_limit < 0) {
        printf("NG");
        return 0;
    }

    for (int current_number = 1; ; current_number++) {
        if (current_number > upper_limit) {
            break;
        }

    
        if (current_number % 3 == 0 || current_number % 5 == 0) {
            continue;
        }

        total_sum += current_number;
    }

    printf("%ld", total_sum);
    return 0;
}