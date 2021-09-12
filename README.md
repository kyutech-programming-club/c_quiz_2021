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
9月5日(日): 9/4の関数を使って、0.0 <= x < 1.0 の浮動小数点乱数を返す関数 float randf(void)を作成してください。
<br><br>
9月6日(月): フィボナッチ数列の第n項を返す関数 int fibo(int n) を作成してください。ここで、`fibo(0) = 0, fibo(1) = 1, fibo(2) = 1 `で、 一般的に`fibo(n) = fibo(n-1) + fibo(n-2)` で表される。
<br><br>
9月7日(火): 文字列 s1 と文字列 s2 が等しいかどうかを判定する関数(0 or 1) int str_eql(char* s1, char* s2) を作成してください。
<br><br>
9月8日(水): 正の整数nをnの最初と最後にnの桁数分1を付け足した数に変化させる関数 void interrupt_with_one(int \*n) を作成してください。 (ex.1: 23 -> 112311, ex.2: 123 -> 111123111) (4桁以上で死ぬので注意)
<br><br>
9月9日(木): 0 ~ n-1のn個の整数が重複なくランダムに入った配列を戻り値とする関数、int \*shuffle(int n)を作成してください。
<br><br>
9月10日(金):<br>
  > **問題文**<br>
  > 水色のボールが **A** 個容器に入っています。高橋くんはこの容器に対し、以下の操作を 0 回以上好きなだけ繰り返します。
  > 
  > - 水色のボール **B** 個と赤色のボール **C** 個を容器に追加する。
  > 
  > 高橋くんの目標は、容器に入っている水色のボールの個数が赤色のボールの個数の **D** 倍以下になるようにすることです。<br>
  > 目標が達成可能かを判定し、可能なら必要な操作回数の最小値を求めてください。
  > 
  > **制約**
  > - 1 <= A, B, C, D <= 10^5
  > - 入力は全て整数である
  > 
  > **入力**<br>
  > 入力は以下の形式で標準入力から与えられる。<br>
  > 
  > ```
  > A B C D
  > ```
  >  
  > **出力**<br>
  > 高橋くんの目標が達成可能なら、操作回数の最小値を出力せよ。そうでなければ、`-1` を出力せよ。
  > 
  > [ABC207 B問題](https://atcoder.jp/contests/abc207/tasks/abc207_b)より
<br><br>

9月11日(土):<br>
  > **問題文**<br>
  > 縦 H マス、横 W マスのマス目があります。上から i 行目、左から j 列目のマスには、ブロックが A_i,j個あります。
  > どのマスにも同じ個数のブロックがある状態にするには、最小で何個のブロックを取り除けばよいでしょうか？
  > 
  > **制約**
  > - 1<= H, W <= 100
  > - 0 <= A_i,j <= 100
  > 
  > **入力**<br>
  > 入力は以下の形式で標準入力から与えられる
  > 
  > ```
  > H W
  > A_1,1 A_1,2 ... A_1,W
  > : 
  > A_H,1 A_H,2 ... A_H,W
  > ```
  > 
  > **出力**<br>
  > 取り除くブロックの個数の最小値を出力せよ。
  > 
  > [ABC186 B問題](https://atcoder.jp/contests/abc186/tasks/abc186_b)より
<br><br>

9月12日(日):<br>
> **問題文**<br>
> 1 以上 N 以下の整数からなる長さ N の数列 A=(A_1, A_2,...,A_N) が与えられます。
> A が (1,2,...,N) の並び替えによって得られるかどうか判定してください。
> 
>**制約**<br> 
> - 1 <= N <= 10^3
> - 1 <= A_i <= N
> - 入力は全て整数である。
> 
> **入力**<br>
> 入力は以下の形式で標準入力から与えられる。
> ```
> N
> A_1 A_2 ... A_N
> ```
> 
> **出力**<br>
> A が (1,2,…,N) の並び替えによって得られるなら `Yes`、そうでないなら `No` と出力せよ。
>  
> [ABC205 B問題](https://atcoder.jp/contests/abc205/tasks/abc205_b)より
<br><br>

9月13日(月):<br>
> **問題文**<br>
> 高橋君はお酒を N 杯飲みました。
> i 番目に飲んだお酒は、量が V_i[ml]、アルコール度数が P_i[%] です。
> 高橋君はアルコールの摂取量が X [ml] を超えると酔っ払います。
> 高橋君が酔っ払ったのは何杯目のお酒を飲んでいるときですか。ただし、N 杯全てのお酒を飲んだあとでも酔っ払っていない場合は、かわりに `-1` を出力してください。
> 
> **制約**<br>
> - 入力は全て整数
> - 1 <= N <= 10^3
> - 0 <= X <= 10^6
> - 1 <= V_i <= 10^3
> - 0 <= P_i <= 10^2
> 
> **入力**<br>
> 入力は以下の形式で標準入力から与えられる。
> 
> ```
> N X
> V_1 P_1
> V_2 P_2
> ：
> V_N P_N
> ```
> 
> **出力**<br>
> 高橋君が酔っ払ったのが何杯目のお酒を飲んでいるときか出力せよ。ただし、N 杯全てのお酒を飲んだあとでも酔っ払っていない場合は、かわりに `-1` を出力せよ。
> 
> [ABC189 B問題](https://atcoder.jp/contests/abc189/tasks/abc189_b)より
<br><br>
