FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-ubuntu-20.04

# Install Google Test
RUN apt-get update && \
    apt-get install -y git cmake build-essential && \
    git clone https://github.com/google/googletest.git /usr/src/googletest && \
    cd /usr/src/googletest && \
    cmake . && \
    make && \
    make install