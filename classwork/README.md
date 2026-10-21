# classwork — 课程练习

> 从 Dev-C++ 里"未命名1a~6a.cpp"整理而来
> 整理日期：2026-10-05
> 全部已转为 **UTF-8** 编码（原来 1a、5a 是 GBK，会导致 gcc 报 `Illegal byte sequence`）

## 文件索引

| 文件 | 功能 | 用到 | 备注 |
|---|---|---|---|
| [`01-reverse-digits.cpp`](01-reverse-digits.cpp) | 输入一个整数，**倒序打印各位数字** | `while` + `%` `/` | ⚠️ 见下方说明 |
| [`02-factorial-while.cpp`](02-factorial-while.cpp) | 输入 n，算 **n 的阶乘** | `while` | 用 while 累乘 |
| [`03-factorial-for.cpp`](03-factorial-for.cpp) | 输入 n，算 **n 的阶乘**，输出 `n!=结果` | `for` 递减 | 同一问题的另一种写法 |
| [`04-first-50-primes.cpp`](04-first-50-primes.cpp) | 输出**前 50 个素数** | 双重 `for` + `break` | 用 `isprime--` 当标志位 |
| [`05-coin-combination.cpp`](05-coin-combination.cpp) | **凑硬币**：1角+2角+5角 = x 元 | 三重 `for` + `goto` | ⚠️ 见下方说明 |
| [`06-harmonic-sum.cpp`](06-harmonic-sum.cpp) | 输入 n，算 **f(n) = 1 + 1/2 + ... + 1/n** | `for` + `double` | 注意 `1.0/i` 的写法 |
| [`07sijieshudu.cpp`](07sijieshudu.cpp) | **四阶数独**：4×4 填 1~4，每行/每列/每个 2×2 宫都不重复，统计解的个数 | **回溯 DFS** | 共 **288 个解**（对拍标准） |
| [`08bahuangho.cpp`](08bahuangho.cpp) | **八皇后**（洛谷 P1219）：N 个皇后互不攻击，输出前 3 个解 + 解的总数 | **回溯 DFS** + `abs` 判断对角线 | n=8 → **92 个解** |

## 编译运行

后缀是 `.cpp`，所以用 **g++**：

```powershell
g++ -Wall -finput-charset=UTF-8 文件名.cpp -o 文件名.exe
```

在 VS Code 里直接按 **`Ctrl+F5`** 即可（配置见 `.vscode\tasks.json`）。

## 知识点小结

| 知识点 | 出现在 |
|---|---|
| `while` 循环 | 01、02 |
| `for` 循环 | 03、04、05、06 |
| 嵌套循环 | 04（两层）、05（三层） |
| `break` 跳出内层循环 | 04 |
| `goto` 跳出多层循环 | 05 |
| 整数取位（`% 10` 和 `/ 10`） | 01 |
| 浮点除法（`1.0/i`） | 06 |
| **回溯 DFS（放 → 递归 → 撤销）** | **07、08** |
| **`abs()` 判断对角线** | 08 |
| **二维转一维：`pos/4`（行）、`pos%4`（列）** | 07 |
| **2×2 宫起点：`(r/2)*2`** | 07 |

## ⚠️ 两个待改进的地方

### 01-reverse-digits.cpp：只打印了，没算出结果

```c
int ret = 0;
while(x > 0){
    digit = x%10;
    printf("%d", digit);       // 打印出来了
    ret = ret*10 + digit;      // 算出来了，但没输出
    x /=10;
}
//printf("%d", ret);           // ← 这行被注释掉了
```

现在只输出"倒序的数字串"，没有输出**倒序后的整数**。想输出的话，把最后那行取消注释。

### 05-coin-combination.cpp：只找到一组解

```c
if(one+two*2+five*5 == x*10){
    printf(...);
    goto out;                  // ← 找到第一组就跳出去了
}
```

`goto out` 让程序**找到一个解就退出**。如果题目要求"列出所有可能的组合"，应该去掉 `goto`，让它继续循环。

> 💡 顺带一提：`goto` 在 C 里是**少用**的关键字（会破坏代码结构），
> 但"跳出多层嵌套循环"是它少数合理的用法之一。你这里用得没问题。

---

*这个目录里的文件都来自课程练习，保留原始代码，只改编码和文件名。*
