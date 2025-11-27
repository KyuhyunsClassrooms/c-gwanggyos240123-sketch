#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1. 전역 변수 선언
int answer;   // 랜덤 정답 숫자
int guess;    // 사용자 입력 숫자
int count = 0; // 시도 횟수


// 정답 숫자를 생성하는 함수
void generateAnswer() {
    srand(time(NULL));     // 랜덤 시드 설정
    answer = rand() % 100 + 1; // 1~100 사이 정답 생성
}

// 입력 숫자 비교
void compareGuess(int guess) {
    if (guess > answer) {
        printf("너무 큽니다.\n");
    } 
    else if (guess < answer) {
        printf("너무 작습니다.\n");
    } 
    else {
        printf("정답입니다!\n");
    }
}


int main() {

    printf("--- 숫자 맞추기 게임 시작! ---\n");

    generateAnswer();    // 정답 생성

    while (1) {
        printf("숫자를 입력하세요 (1~100): ");
        scanf("%d", &guess);

        count++;      // 시도 횟수 증가

        compareGuess(guess); // 비교 함수 호출

        if (guess == answer) {
            break;     // 정답이면 반복 종료
        }
    }

    printf("총 %d번 만에 맞추셨습니다!\n", count);
    printf("--- 게임 종료 ---\n");

    return 0;
}
