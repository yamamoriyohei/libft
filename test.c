#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

int main()
{
    // メモリ領域を2つ用意します（初期状態はどちらも "abcdef"）
    char str_for_cpy[] = "abcdef";
    char str_for_move[] = "abcdef";

    printf("=== コピー前の元のデータ ===\n");
    printf("str_for_cpy  : %s\n", str_for_cpy);
    printf("str_for_move : %s\n\n", str_for_move);

    // 'a'の位置(src)から、1バイト隣の'b'の位置(dst)へ、3文字('abc')コピーする
    
    // 1. ft_memcpy の場合（前からコピー）
    ft_memcpy(&str_for_cpy[1], &str_for_cpy[0], 3);
    printf("=== ft_memcpy（前からコピー）の結果 ===\n");
    printf("期待する結果: aabcef\n");
    printf("実際の結果  : %s\n\n", str_for_cpy);

    // 2. ft_memmove の場合（後ろからコピー）
    ft_memmove(&str_for_move[1], &str_for_move[0], 3);
    printf("=== ft_memmove（後ろからコピー）の結果 ===\n");
    printf("期待する結果: aabcef\n");
    printf("実際の結果  : %s\n", str_for_move);

    return 0;
}
