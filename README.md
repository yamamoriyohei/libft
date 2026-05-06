*This project has been created as part of the 42 curriculum by yyamamor*

## Description
Libftは、42カリキュラムの最初のプロジェクトです。このプロジェクトの目的は、標準Cライブラリの多くの関数を再実装し、さらに文字列操作やメモリ操作に役立つ独自のユーティリティ関数を加えたCライブラリ（`libft.a`）を作成することにあります。作成したライブラリは、標準関数の使用が制限される今後の42プロジェクトにおいて、基礎ツールとして活用されます。

## Instructions

### Compilation
リポジトリのルートディレクトリで以下のコマンドを実行することで、ライブラリ `libft.a` が作成されます。
```bash
make
```

### Cleanup
オブジェクトファイル（`.o`）のみを削除する場合：
```bash
make clean
```
オブジェクトファイルと生成されたライブラリ（`libft.a`）の両方を削除する場合：
```bash
make fclean
```
一度すべてを削除してから再コンパイルを行う場合：
```bash
make re
```

### Usage
自作プログラムでこのライブラリを使用するには、ヘッダーファイルをインクルードし、コンパイル時にライブラリをリンクします。
```c
#include "libft.h"
```
コンパイル例：
```bash
cc　-Wall -Wextra -Werror --.c -L. -lft
```

## Resources

### References
- Man pages - 標準関数の動作および仕様の確認に使用。
- [en.subject.pdf] - プロジェクトの要件および規約の確認に使用。

### AI Usage
このプロジェクトの開発において、学習補助のために AI（Gemini）を使用しました。使用した具体的なタスクと箇所は以下の通りです：
- **理解のため**: `iterate` や `mapped` といったプログラミング用語の概念、および `calloc` の引数などの理解。
- **テストケースの作成**:　作成した関数の挙動を確認するために必要な関数の作成に使用した。
- **README.md の作成**:　作成した関数の説明の記述に使用した。


## Library Functions

### Part 1: Libc functions
以下の標準Cライブラリ関数を、`ft_` プレフィックスを付けて再実装しています：
- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`
- `strlen`, `memset`, `bzero`, `memcpy`, `memmove`
- `strlcpy`, `strlcat`, `toupper`, `tolower`
- `strchr`, `strrchr`, `strncmp`, `memchr`, `memcmp`, `strnstr`, `atoi`
- `calloc`, `strdup`

### Part 2: Additional functions
標準ライブラリを補完するために実装した追加の関数群です：
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3: Bonus functions
連結リスト（Linked List）を操作するための関数群です：
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`
- `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`