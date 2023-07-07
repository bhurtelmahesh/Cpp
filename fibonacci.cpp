#include <iostream>
#include <vector>

int fibonacci(int n) {
  std::vector<int> dp(n + 1, 0);  // ダイナミックプログラミングのテーブル

  dp[0] = 0;  // ベースケース: fib(0) = 0
  dp[1] = 1;  // ベースケース: fib(1) = 1

  for (int i = 2; i <= n; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];  // フィボナッチ数列の再帰関係
  }

  return dp[n];  // n番目のフィボナッチ数を返す
}

int main() {
  int n;
  std::cout << "数値を入力してください: ";
  std::cin >> n;

  int result = fibonacci(n);
  std::cout << "第" << n << "項のフィボナッチ数は: " << result << std::endl;

  return 0;
}
