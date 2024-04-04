## 추상 자료형: ADT(Abstract Data Type)

- ### 자료구조에서의 추상 자료형(Wallet의 ADT)

  - 구조체를 기반으로 Wallet이라는 자료형 정의

        typedef struct _wallet  // 동전 및 지폐 일부만을 대상으로 표현한 지갑
        {
            int coin100Num; // 100원짜리 동전의 수
            int bill5000Num; // 5,000원짜리 지폐의 수
        } Wallet;

  - Wallet이 제공할 수 있는 기능 관련 연산

        // 돈을 꺼내는 연산
        int TakeOutMoney(Wallet * pw, int coinNum, int billNum);
        /*
        - 첫 번째 인자로 전달된 주소의 지갑에서 돈을 꺼낸다.
        - 두 번째 인자로 꺼낼 동전의 수, 세 번째 인자로 꺼낼 지폐의 수를 전달한다.
        - 꺼내고자 하는 돈의 총액이 반환된다. 그리고 그만큼 돈은 차감된다.
        */

        // 돈을 넣는 연산
        void PutMoney(Wallet * pw, int coinNum, int billNum);
        /*
        - 첫 번째 인자로 전달된 주소의 지갑에 돈을 넣는다.
        - 두 번째 인자로 넣을 동전의 수, 세 번째 인자로 넣을 지폐의 수를 전달한다.
        - 넣은 만큼 동전과 지폐의 수가 증가한다.
        */

  <br/>

## 배열을 이용한 리스트(List)의 구현

- ### 리스트(List)의 이해

  - **리스트 자료구조는 데이터를 나란히 저장한다. 또한 중복된 데이터의 저장을 막지 않는다.**
  - **순차 리스트:** 배열을 기반으로 구현된 리스트
  - **연결 리스트:** 메모리의 동적 할당을 기반으로 구현된 리스트

- ### 리스트(List) 자료구조의 ADT

        void ListInit(List * plist);
        /*
        - 초기화할 리스트의 주소 값을 인자로 전달.
        - 리스트 생성 후 제일 먼저 호출되어야 하는 함수.
        */

        void LInsert(List * plist, LData data);
        /*
        - 리스트에 데이터를 저장. 매개변수 data에 전달된 값을 저장.
        */

        int LFirst(List * plist, LData * pdata);
        /*
        - 첫 번째 데이터가 pdata가 가리키는 메모리에 저장.
        - 데이터의 참조를 위한 초기화가 진행.
        - 참조 성공 시 TRUE(1), 실패 시 FALSE(0) 반환.
        */

        int LNext(List * plist, LData * pdata);
        /*
        - 참조된 데이터의 다음 데이터가 pdata가 가리키는 메모리에 저장.
        - 순차적인 참조를 위해서 반복 호출 가능.
        - 참조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 함.
        - 참조 성공 시 TRUE(1), 실패 시 FALSE(0) 반환.
        */

        LData LRemove(List * plist);
        /*
        - LFirst 또는 LNext 함수의 마지막 반환 데이터를 삭제.
        - 삭제된 데이터는 반환.
        - 마지막 반환 데이터를 삭제하므로 연이은 반복 호출을 허용하지 않음.
        */

        int LCount(List * plist);
        /*
        리스트에 저장되어 있는 데이터의 수를 반환.
        */

<br/>

## 연결 리스트(Linked List)의 개념적인 이해

<br/>

## 단순 연결 리스트의 ADT와 구현

<br/>

## 연결 리스트의 정렬 삽입의 구현

<br/>

## 원형 연결 리스트(Circular Linked List)

<br/>

## 양방향 연결 리스트(Doubly Linked List)
