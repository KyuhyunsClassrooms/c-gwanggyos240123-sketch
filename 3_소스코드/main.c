#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    1. 설계에서 정의한 변수 선언
    
int answer;   // 랜덤 정답 숫자
int guess;    // 사용자 입력 숫자
int count = 0; // 시도 횟수

*/


/*
    2. [알고리즘]에서 설계한 핵심 기능 함수들을 여기에 선언하세요.


// 정답 숫자를 생성하는 함수
void generateAnswer() {
    srand(time(NULL));     // 랜덤 시드 설정
    answer = rand() % 100 + 1; // 1~100 사이 정답 생성
}

// 입력 숫자를 비교하는 함수
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




*/

    /*
        3. [알고리즘]에서 설계한 main 함수의 흐름을
           여기에 C언어로 자유롭게 구현하세요.

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


    */
