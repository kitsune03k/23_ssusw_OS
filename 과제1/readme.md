# 과제 1 - xv6상 user program 만들기

xv6의 초기 설정은 https://oslab.kaist.ac.kr/xv6-install/ 참고

## 사용되는 header들

xv6에서는 c언어에서 흔히 사용하던 프로그래밍 된 헤더파일들이 없고, xv6에서 정의한 헤더와 함수들을 사용해야 한다.

이번 과제에서 사용될 header들은 아래와 같다.


    defs.h : .c파일들에서 실행되는 함수들

    types.h : xv6에서 지원하는 자료형의 정의

    user.h : user가 kernel에 요청할 수 있는 system call, library 함수들 선언


## 생각해 봐야할 점

1. 간단한 프로그램이지만, 우리가 원래 알고있던 함수와는 매개변수등이 다르기에 함수의 원형을 살펴보고 사용해야 한다.


    printf를 써야하는데, 이는 user.h를 보면 ulib.c에 정의되어 있다
    
    함수의 원형은


2. user program은 어떤 특징을 가지고있는가?

## 생각의 결과

1. 