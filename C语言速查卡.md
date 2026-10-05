# C 语言速查卡（我自己的）

> 放在 `c-study\` 旁边，忘了就打开看。持续更新。

---

## 一、新文件骨架（每个 .c 文件开头照抄这 6 行）

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    // 下面写你的代码
    return 0;
}
```

**两条必须记住的**：
- `#include <stdlib.h>` + `system("chcp 65001 > nul");` → **不加，中文就乱码**
- 是 **`nul`**（空设备），**不是** `num1`、`null`、`nul1`

> 💡 记忆：**"要输出中文，就先 chcp"**

---

## 二、输入输出配对（最容易漏的地方）

```c
int a, b;
scanf("%d %d", &a, &b);        // 读入 2 个变量
//     ↑    ↑   ↑ ↑
//   格式符  两个 & 都不能少

printf("a=%d, b=%d\n", a, b);  // 输出 2 个变量
//        ↑     ↑      ↑ ↑
//      几个 %d，后面就跟几个变量
```

### 🔴 自查口诀

> **`scanf` 读了几个变量，就要有 `&` 几个，`printf` 就要输出几个。**
> 写完从上往下数一遍——**我最大的毛病就是漏 `printf`**。

### 常见格式符

| 类型 | 格式符 |
|---|---|
| `int` | `%d` |
| `float` / `double` | `%f` / `%lf`（`scanf` 读 `double` 必须用 `%lf`） |
| `char` | `%c` |
| 字符串 | `%s` |

---

## 三、三种基本结构

### 顺序
从上往下依次执行。

### 选择（`if`）

```c
if (a > b) {
    printf("a 大\n");
} else if (a < b) {
    printf("b 大\n");
} else {
    printf("一样大\n");       // ← 别忘了处理"相等"这种边界情况
}
```

### 循环（后面会学）

```c
while (条件) { ... }              // 先判断，再执行
do { ... } while (条件);          // 先执行一次，再判断（课程进度到这儿）
for (初始; 条件; 步进) { ... }    // 次数已知时最方便
```

---

## 四、VS Code 快捷键

| 快捷键 | 作用 |
|---|---|
| **`Ctrl+F5`** | 编译 + 运行（**最常用**） |
| **`Ctrl+Shift+B`** | 只编译，不运行 |
| **`F5`** | 编译 + 调试（能打断点） |
| **`F9`** | 在光标行打断点 |
| **`Ctrl+S`** | 保存（**编译前必须先保存！**） |

---

## 五、Git 四条命令（每完成一次练习就跑一遍）

```powershell
cd C:\Users\23709\Documents\deepseek-harness\default-workspace\c-study
git status                     # 1. 我改了什么
git add .                      # 2. 放进待存档区
git commit -m "做了什么"        # 3. 存档
git push                       # 4. 传到 GitHub
```

### 验证有没有推上去

```powershell
git status --branch --short
```

| 看到 | 含义 |
|---|---|
| `## main...origin/main [ahead 1]` | ❌ 还没推上去 |
| `## main...origin/main` | ✅ 同步了 |

仓库地址：https://github.com/QJD11-Q/c-study

---

## 六、报错速查（我踩过的坑）

| 报错 / 现象 | 原因 | 解决 |
|---|---|---|
| `Permission denied` + `cannot open output file` | **`.exe` 还在运行** | 关掉那个黑窗口，再重新编译 |
| `Illegal byte sequence` | 源码存成了 **GBK** | VS Code 右下角 → `Save with Encoding` → `UTF-8` |
| 输出 `????????` / `璇疯緭鍏` | 源码没加 `chcp`，或编码不匹配 | 加 `system("chcp 65001 > nul");` |
| `'x' undeclared` | 用了没声明的变量 | 先 `int x;` 再使用 |
| `expected ';'` | 上一行漏了分号 | 看报错行**的上一行** |
| 编译通过但**零输出** | 漏了 `printf` | 数一遍：输入了几个变量，就要输出几个 |
| `%d` 位置出现奇怪数字 | `scanf` 漏了 `&` | 每个变量前都加 `&` |
| 目录里莫名多出 `num1` 文件 | `> nul` 写成了 `> num1` | 改回 `nul`，删掉那个文件 |

---

## 七、现在我学到哪了

| 已掌握 | 待学 |
|---|---|
| 变量、`printf`、`scanf` | `while` / `do-while` 循环 |
| `if` / `else if` / `else` | `switch` |
| 编译运行流程 | 函数、数组 |
| Git 提交推送 | 指针、结构体 |

**已完成练习**：`lesson1.c`、`lesson2.c`、`lesson3.c`（全部零警告）
**下一题**：`lesson4.c` —— `while` 循环，反复输入直到输入 `0` 退出

---

*最后更新：2026-10-04*
