# 1일차
### 알고리즘 문제 풀이 방법
1. 문제를 읽고 이해한다.
2. 문제를 구조화한다.(Naive(무식한) 접근법)
   - 구조화: 문제를 논리적으로 분석하고, 효율적인 알고리즘을 설계한 후, 체계적으로 코드를 구성하는 과정
   - ✅ 가독성 향상 → 코드를 더 쉽게 이해할 수 있음.
   - ✅ 유지보수 용이 → 수정이 필요한 경우 쉽게 변경할 수 있음.
   - ✅ 효율적 실행 → 불필요한 계산을 줄이고 성능을 개선할 수 있음.
   - ✅ 재사용성 증가 → 함수와 모듈화를 통해 다른 문제에서도 활용 가능.
3. 문제 이해 + 발상 + 시간복잡도(30분) / 구현(20분) / 디버깅(20분)
   - 만약 30분 안에 발상이 안되면 그냥 답지 봐라..

### Debugging
- 디버깅
  - 코드의 틀린 부분을 찾아 고치는 것
  - 조사식을 이용하여 각 상황마다 각각의 변수에 어떤 값이 들어있는지 계속 따라가는 것이 중요하다.

### 개발환경 세팅
1. C++ : https://goodgodgd.github.io/ian-flow/archivers/vscode-tutorial
2. Python : https://m.blog.naver.com/stonefly2001/221726597995

### Coding Test
- 프로그래밍 실력을 평가하기 위해 주어진 문제를 제한된 시간 내에 해결하는 테스트
### 코딩 테스트 문제 해결 순서
- 주어진 예제의 답이 어떻게 나오는지 확실하게 계산한다.
- 알고리즘을 떠올리고 시간복잡도를 계산한다.
- 제한시간 내에 올바른 답이 나올 거 같다면 코드를 작성한다.
- 예제를 넣어본다, 올바른 답이 나올 때까지 코드를 수정한다.(디버깅)
- 예제가 나왔음에도 만점이 나오지 않는다면, 각 에러 메세지에 따라 생각을 한다.
   - Wrong Answer: 스스로 테스트 케이스를 만들어서 풀어본다.
   - Runtime Error: 수행 도중 프로그램이 죽었다는 뜻(언어 by 언어)
   - Time Limit Exceed: 현재 코드의 시간복잡도를 계산하고, 시간 안에 나오는 방법이 맞는 지 확인한다.
   - Memory Limit Exceed: 메모리 초과로 인한 에러
   - Compile Error: 에러 내용을 확인하여 수정한다.
### 만약 너무 어려운 문제가 나왔다?
1. 코드를 싹! 지우고 다시 짜기
2. 다음 문제로 넘긴다.

### Counting Array 기법(색칠하기)
- 배열의 특정 값들의 등장 횟수를 세어 저장하는 방법
- 어떤 데이터 값이 몇 번 등장했는지를 저장하는 배열을 만들어 빠른 조회 및 연산을 가능하게 하는 기법
- 값의 등장 횟수를 저장하여 빠르게 조회, 정렬, 존재 여부 확인을 가능하게 하는 기법
### 🛠 Counting Array의 기본 원리
- 입력 값의 범위를 기준으로 크기가 고정된 배열을 생성
- 각 값이 등장할 때마다 해당 인덱스의 값을 증가
- 필요한 연산(조회, 정렬, 존재 여부 확인 등)에 활용

- ✅ 장점
  - 빠른 연산 가능 (O(N) 시간 복잡도)
  - 공간 복잡도가 적절하면 매우 효율적
  - 특정 값의 개수, 존재 여부 확인이 빠름 (O(1))
- ❌ 단점
  - 값의 범위가 너무 클 경우 메모리 낭비(예: 1~10억까지 숫자가 있으면, 크기 10억짜리 배열이 필요함.)
  - 음수 값 처리가 까다로움
  - count[arr[i]]를 인덱스로 활용하므로 음수는 배열 인덱스에 직접 사용 불가.
  - 해결 방법: 음수도 저장할 수 있도록 배열을 두 개로 나누거나, offset을 추가.

### Q&A

![image](https://github.com/user-attachments/assets/a10db638-4743-44b8-8495-a2c0f629e05b)
![image](https://github.com/user-attachments/assets/08307e7c-5c81-4a4d-9dd9-246d975d93f4)
![image](https://github.com/user-attachments/assets/8f8dafb4-b959-488f-840f-3291dd6bc673)
![image](https://github.com/user-attachments/assets/dca6e799-9773-4df6-ac99-27cf2261b71c)
![image](https://github.com/user-attachments/assets/0d012400-b1da-450f-be1d-53a0f91a41b7)

![image](https://github.com/user-attachments/assets/eab2002c-fdd0-434a-9c6e-517b77956798)

# 2일차
## SimulationⅠ
### Time to Time
### Date to Date
### 블럭쌓는 명령2
### 구간 칠하기Ⅱ


