# Devcontainer Template

このリポジトリは高知工科大学のサークル、KUTPGの新入生の環境構築に使うテンプレート用リポジトリです。

VS Code の Dev Container を使って、競技プログラミング（AtCoder など）の C++ 開発環境をワンクリックで構築できます。

## 含まれるもの

| ファイル/ディレクトリ | 内容 |
|---|---|
| `.devcontainer/` | Dev Container の設定ファイル一式 |
| `.devcontainer/Dockerfile` | Ubuntu 24.04 ベースのコンテナ定義 |
| `.devcontainer/devcontainer.json` | VS Code 拡張機能・設定 |
| `.devcontainer/setup.sh` | コンテナ作成後に実行されるセットアップスクリプト |
| `.devcontainer/template.cpp` | 新規ファイル作成時のテンプレート |
| `.clang-format` | コードフォーマット設定（タブ幅4） |
| `abs/` | AtCoder Beginners Selection の解答例 |

## 環境

- **OS**: Ubuntu 24.04
- **コンパイラ**: g++ (build-essential)
- **デバッガ**: gdb
- **フォーマッタ**: clang-format
- **言語サーバー**: clangd

### VS Code 拡張機能（自動インストール）

- `vscode-clangd` — C++ 言語サーバー（補完・エラー表示）
- `cpptools-extension-pack` — C++ 開発ツール群
- `clang-format` — 保存時自動フォーマット

## 使い方

### 1. Dev Container を起動する

VS Code でこのリポジトリを開き、左下の `><` アイコン → **「Reopen in Container」** を選択します。

初回はイメージのビルドが行われます（数分かかる場合があります）。

### 2. シェル関数を使う

コンテナ起動後、以下のシェル関数が使えます。

```bash
# テンプレートから新しい cpp ファイルを作成して VS Code で開く
new ABC001A

# cpp ファイルをコンパイルする（出力は ./a.out）
gpp ABC001A.cpp
```

### 3. Makefile を使う

```bash
# テンプレートから cpp ファイルを生成する
make ABC001A.cpp

# コンパイルして実行ファイルを生成する
make ABC001A
```

## テンプレート (`template.cpp`)

新規ファイル作成時に使われる雛形です。競技プログラミングでよく使う型エイリアスやマクロが定義済みです。

```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	return 0;
}
```

## abs/ — AtCoder Beginners Selection 解答例

`abs/` ディレクトリには [AtCoder Beginners Selection](https://atcoder.jp/contests/abs) の解答が含まれています。環境が正しく動作するかの動作確認や、解き方の参考にしてください。
