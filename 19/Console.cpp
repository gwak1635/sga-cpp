// Console.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "stdafx.h"

struct tagMonster { //몬스터 구조체
    string  strName;
    int     nHp;
    int     nMp;
    int     nAtt;
    int     nDef;
};

int main()
{
    tagMonster stMonster; //구조체 선언 

    //구조체 값 설정
    stMonster.strName = "오우거";
    stMonster.nHp = 100;
    stMonster.nMp = 30;
    stMonster.nAtt = 10;
    stMonster.nDef = 5;
    
    cout << stMonster.strName.c_str() << "의 공격력은" << stMonster.nAtt << "이다." << endl;


    
    return 0;
}
