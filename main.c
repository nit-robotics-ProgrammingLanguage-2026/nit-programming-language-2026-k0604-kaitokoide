#include <stdio.h>

int main(void)
{
    int upper_limit;
    long total_sum = 0;

    // 入力された整数を受け取る
    scanf("%d", &upper_limit);

    // 負の数が入力された場合はNGを表示する
    if (upper_limit < 0) {
        printf("NG");
        return 0;
    }

    // 1から入力値までの整数を順番に調べる
    for (int current_number = 1; ; current_number++) {

        // 入力値を超えたら繰り返しを終了する
        if (current_number > upper_limit) {
            break;
        }

        // 3の倍数または5の倍数は合計に含めない
        if (current_number % 3 == 0 || current_number % 5 == 0) {
            continue;
        }

        // 3の倍数でも5の倍数でもない整数を合計する
        total_sum += current_number;
    }

    printf("%ld", total_sum);
    return 0;
}