#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256
#define NUMBERS_PER_BATCH 24  // 配列に格納する数字の数

// 数字の抽出と配列への収納
void extract_numbers(FILE *file) {
    char line[MAX_LINE_LENGTH];
    int numbers[NUMBERS_PER_BATCH];  // 24個の数字を格納する配列
    int count = 0;  // 配列に格納された数字の個数
    int num1, num2, num3, num4;

    while (fgets(line, sizeof(line), file)) {
        // 数字が含まれている行を処理（数字とカンマのみが含まれている場合）
        // 行がカンマ区切りの4つの数字で構成されている場合
        if (sscanf(line, "%d,%d,%d,%d,", &num1, &num2, &num3, &num4) == 4) {
            // 配列に数字を格納
            numbers[count] = num1;
            numbers[count + 1] = num2;
            numbers[count + 2] = num3;
            numbers[count + 3] = num4;
            count += 4;  // 4つの数字を追加
            // 配列が24個に達した場合、表示
            if (count == NUMBERS_PER_BATCH) {
                for (int i = 0; i < NUMBERS_PER_BATCH; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("\n");
                count = 0;  // カウントをリセット
            }
        }
    }

    // 残りの数字があれば表示（24個未満）
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
    }
}

int main() {
    FILE *file = fopen("test1.txt", "r");  // ファイルを開く

    if (file == NULL) {
        printf("ファイルを開けませんでした。\n");
        return 1;
    }

    extract_numbers(file);  // 数字の抽出と表示

    fclose(file);  // ファイルを閉じる
    return 0;
}