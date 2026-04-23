#!/bin/bash

# テンプレートをホームディレクトリに固定パスでコピー
cp "$(pwd)/.devcontainer/template.cpp" ~/.cpp_template

cat << 'EOF' >> ~/.bashrc

new() {
    cp ~/.cpp_template "${1}.cpp"
    echo "Created ${1}.cpp"
    code "${1}.cpp"
}

gpp() {
    g++ "${1}" -o ./a.out
}

EOF