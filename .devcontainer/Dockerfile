FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    git \
    build-essential \
    clangd \
    clang-format \
    gdb \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

    