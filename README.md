# 一日一問C言語クイズ

2021夏休みで開催

## 始め方

1. このリポジトリをクローンする
2. 自分のフォルダを作る(your_nameフォルダみたいな感じで)
3. ブランチを切る（ブランチ名は被らないように自分の名前とか）
4. 日付がわかるようなファイル名で解く(例：quiz_0815.c)
5. add, commit, push
6. masterブランチへ、プルリクエストを作る
7. LGTM貰ったらマージ
8. 自身のmasterを更新、自分のブランチを削除
9. 毎日問題が出るので、3〜8を繰り返す

詳しくは[こちら](https://github.com/kyutech-programming-club/c_quiz_2021/blob/master/how_to_start/README.md)から

## 問題

8月16日(月): "Hello World" を出力してください。
<br><br>
8月17日(火): キーボードからの入力(整数)に1を足した値を出力してください。
<br><br>
8月18日(水): キーボードからの入力(整数)が偶数なら0、奇数なら1を出力してください。
<br><br>
8月19日(木): 二つキーボードから入力(整数)し、一つ目の整数が二つの整数で割り切れたら"Y"、そうでないなら"N"を出力してください。
<br><br>
8月20日(金): キーボードからの入力(実数)を半径とする、球体の体積を出力してください。ただし、pi = 3.14とする。
<br><br>
8月21日(土): 身長[m]と体重[kg]を入力し、BMI(= 体重kg ÷ (身長m)^2)が18.5未満なら"痩せ型"　、25以上なら"肥満"、18.5以上25未満なら"普通"と出力してください。
<br><br>
8月22日(日): 二つキーボードから入力(整数)し、一つ目の数(num1)から二つめの数(num2)までの総和を出力してください。ただし、num1 < num2とする。
<br><br>
8月23日(月): 二つキーボードから入力(整数)し、一つ目の数(num1)から二つめの数(num2)までの整数の積を出力してください。ただし、num1 < num2とする。 
<br><br>
8月24日(火): キーボードからの入力(整数)の各桁の総和を出力してください。(ex. 1234 -> 10)
<br><br>
8月25日(水): 1〜100までの数字を一つずつ出力してください。ただし、数字が3の倍数の時は"Fizz"、5の倍数の時は"Buzz"、3の倍数でも5の倍数でもあるときは"FizzBuzz"と数字の代わりに出力してください。
<br><br>
8月26日(木): キーボードからの入力(整数)の約数の総和を出力してください。
<br><br>
8月27日(金): キーボードからの入力(整数)以下の整数のうち、素数がいくつあるかを出力してください。
<br><br>
8月28日(土): キーボードからの入力(整数)以下の整数のうち、最も約数の多い数を出力してください。ただし、約数の数が同じ数字が複数個あった場合には数が大きい方を優先する。
<br><br>
8月29日(日): 3桁の整数をキーボードから受け取り、桁を入れ替えた値を整数として出力してください。(ex. 123 -> 321) 
<br><br>
8月30日(月): キーボードからの入力(文字列)の長さを出力してください。
<br><br>
8月31日(火): ベクトルX(x1, x2, x3)とベクトルY(y1, y2, y3)の内積を出力してください。 (入力例: 1 2 3 3 2 1 -> 出力: 10)
<br><br>
9月1日(水): ベクトルX(x1, x2, x3)とベクトルY(y1, y2, y3)の外積を出力してください。 (入力例: 1 2 3 3 2 1 -> 出力: -4 8 -4)
<br><br>
9月2日(木): 整数nのm乗を返す関数 int power(int n, int m) を作成して、二つの入力値からnのm乗を出力してください。
<br><br>
9月3日(金): 1からnまでの5乗の和は、`n^2 * (n+1)^2 * (2n^2 + 2n - 1) / 12`で表せますが、これが正しい値を示すか0902分の関数を用いて試してみてください。 (int型だと n == 32 くらいで死ぬので注意)
<br><br>
9月4日(土): long rondom(void)を呼び出すととても大きい正の整数がランダムで返ってくる。これを用いて0以上n未満の正の整数をランダムで返す関数int my_rand(int n)を作成してください。ここでmainの最初などで`srandom(getpid());`を実行しないと毎回同じような乱数が返ってくるので注意。また、random(), srandom(), getpid()を使うには`#include <unistd.h>`と`#include <stdlib.h>`を加える必要がある。
<br><br>
9月5日(日): 9/5の関数を使って、0.0 <= x < 1.0 の浮動小数点乱数を返す関数 float randf(void)を作成してください。
<br><br>
