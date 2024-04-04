# Data-Structure-C

<p align="center">
<img src="https://github.com/sepang2/Data-Structure-C/assets/95029317/b3e559af-6765-4481-b518-c34e18044c19" width="350" height="500">
</p>

## Error handling

- Undefined symbols for architecture arm64:

  ...

  ld: symbol(s) not found for architecture arm64
  clang: error: linker command failed with exit code 1 (use -v to see invocation)

  => mac 환경에서 vscode를 사용할 때 파일 간 link를 자동으로 해주지 않아서 오류 발생. 아래 명령어로 해결.

  ```
  clang 소스파일명 메인함수소스파일명 -o main
  ```
