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
        // 行の先頭に日時情報があるので、それをスキップして数字の部分だけを取り出す
        // 日時部分をスキップするために、「]」以降をチェック
        if (strchr(line, ']')) {
            // 日時部分を無視して、カンマ区切りの数字のみをチェック
            if (sscanf(strchr(line, ']') + 1, "%d,%d,%d,%d,", &num1, &num2, &num3, &num4) == 4) {
                // 配列に数字を格納
                numbers[count] = num1;
                numbers[count + 1] = num2;
                numbers[count + 2] = num3;
                numbers[count + 3] = num4;
                count += 4;  // 4つの数字を追加

                // 配列が24個に達した場合、表示
                if (count == NUMBERS_PER_BATCH) {
                    for (int i = 0; i < NUMBERS_PER_BATCH; i++) {
                        printf("%d", numbers[i]);
                    }
                    printf("\n");
                    count = 0;  // カウントをリセット
                }
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

    printf("ファイルを読み込み中...\n");  // ファイルの読み込み開始を表示

    extract_numbers(file);  // 数字の抽出と表示

    fclose(file);  // ファイルを閉じる
    return 0;
}