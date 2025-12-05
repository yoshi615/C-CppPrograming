@echo off
set "EXE=C:\Users\yoshi\OneDrive\デスクトップ\autumn\C-CppPrograming\build\ex10_2.exe"

if not exist "%EXE%" (
  echo 実行ファイルが見つかりません: %EXE%
  exit /b 1
)

"%EXE%" %*
