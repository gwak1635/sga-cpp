﻿// Console.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "stdafx.h"



// 매개변수가 포인터를 가지고 있다면 주소값을 요구하는 것이다.
int Add(int* a, int* b) {

    *a += 10;
    *b -= 5;

    return *a + *b;
}
    
/*
포인터란?
주소값을 가리키는(pointing) 값
*/
void Suffle(int* arrData) {
    int nSrc;
    int nDest;
    int nTemp;

    for (int i = 0; i < 100; i++)
    {
        nSrc = rand() % 10;
        nDest = rand() % 10;

        nTemp = arrData[nSrc];
        arrData[nSrc] = arrData[nDest];
        arrData[nDest] = nTemp;
    }
}

int main()
{
    srand(time(NULL));
    rand();

    int nA, nB, nC;

    //new 연산을 통해 메모리에 공간을 할당한다.
    // * 변수가 그 할당된 메모리 공간을 가리킨다.
    int* pA = new int;
    int* pB = new int;

    *pA = 10;
    *pB = 5;

    nC = Add(pA, pB);


    cout << *pA << ", " << *pB << endl;

    // & 변수가 들어있는 메모리 주소 값을 보여준다.
    cout << nC << endl;
    
    delete pA;//할당 해제 명령어인데 이거 안쓰면 메모리 누수된다잉
    delete pB;

    int nArray[10];

    for (int i = 0; i < 10; i++)
    {
        nArray[i] = i + 1;
    }

    Suffle(nArray); //배열 이름은 배열 첫 번째 목록의 주소와 같다

    for (int i = 0; i < 10; i++)
    {
        cout << nArray[i] << endl;
    }

    system("pause");

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
