#!/bin/bash

cat << 'EOF' >> ~/.bashrc

TEMPLATE=/workspaces/DevcontainerTemplate/.devcontainer/template.cpp

new() {
    cp $TEMPLATE ${1}.cpp
    echo "Created ${1}.cpp"
    code ${1}.cpp
}

gpp() {
    g++ ${1} -o ./a.out
}

EOF