# 実行ファイルのフルパス（必要なら修正する）
$exe = 'C:\Users\yoshi\OneDrive\デスクトップ\autumn\C-CppPrograming\build\ex10_2.exe'

if (-not (Test-Path $exe)) {
    Write-Error "実行ファイルが見つかりません: $exe"
    exit 1
}

# 引数をそのまま渡して実行
& "$exe" @args
