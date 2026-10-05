# my-classnotes-and-classwork

> 我的 C / C++ 课堂笔记与课程作业
> 起始：2026-10-05

## 目录结构

| 路径 | 内容 |
|---|---|
| [`classwork/`](classwork/) | 课程练习（6 个程序） |
| [`C语言速查卡.md`](C语言速查卡.md) | 自己整理的 C 语言速查卡：骨架、`scanf`/`printf` 配对、快捷键、报错查询 |

## classwork 索引

| 文件 | 功能 | 用到 |
|---|---|---|
| `01-reverse-digits.cpp` | 输入整数，倒序打印各位数字 | `while` |
| `02-factorial-while.cpp` | 输入 n，算 n 的阶乘 | `while` |
| `03-factorial-for.cpp` | 输入 n，算 n 的阶乘，输出 `n!=结果` | `for` |
| `04-first-50-primes.cpp` | 输出前 50 个素数 | 双重 `for` + `break` |
| `05-coin-combination.cpp` | 凑硬币（1角+2角+5角 = x 元） | 三重 `for` + `goto` |
| `06-harmonic-sum.cpp` | 输入 n，算 `f(n) = 1 + 1/2 + ... + 1/n` | `for` + `double` |

详见 [`classwork/README.md`](classwork/README.md)。

## 编译运行

后缀是 `.cpp`，用 **g++**：

```powershell
g++ -Wall -finput-charset=UTF-8 文件名.cpp -o 文件名.exe
```

> 所有源码是 **UTF-8** 编码。如果从 Dev-C++ 拷文件过来，注意它默认存 GBK，
> 需要先转成 UTF-8，否则 gcc/g++ 会报 `Illegal byte sequence`。

## 提交历史说明

这个仓库的内容来自 `c-study`，保留了完整的提交历史。
`lesson1~3`（C 语言入门练习）留在 `c-study`，这里有 `classwork/` 和速查卡。

## 日常 Git 流程

```powershell
git status
git add .
git commit -m "做了什么"
git push
```
