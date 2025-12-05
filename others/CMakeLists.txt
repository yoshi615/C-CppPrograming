# 1. このプロジェクトに必要な最低限の CMake バージョンを指定します
cmake_minimum_required(VERSION 3.10)

# 2. プロジェクト名を定義します。'CXX'はC++言語を使用することを示します。
project(myapp CXX)

# 3. C++ 標準バージョンを指定 (例: C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 4. 実行可能ターゲットの定義
# add_executable(目標名 ソースファイルのリスト)
# CMake は依存関係とリンクを自動的に処理します
add_executable(
    main
    main.cpp
    Account.cpp
)
