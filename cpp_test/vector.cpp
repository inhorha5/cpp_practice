#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
    Vector
      - 배열의 마지막에서 삽입 및 삭제
      - 메모리가 연속적이고 동적으로 크기가 변하기에 resize 및 유연한 추가 삭제 가능
      - 중간에서도 데이터의 삭제 및 삭제가 가능하나 빈번히 일어나면 Linked List 구조가 적합
      - ex)
        vector <데이터 타입> 벡터이름;
        vector<int> v;            # int형 vector 선언
        vector<int> v(10);        # 10개 int형 공간을 갖는 vector 선언
        vector<int> v(10,1);    # 10개 int형 공간을 1로 초기화한 vector 선언
        멤버함수
        [조회]
            1) v[index]: v[idx] 형태로 index번째의 원소를 참조
                ex) vector[idx]
            2) v.at(index): 벡터 v의 index번째 원소를 참조합니다.
                ex) v.at(1)
        3) v.front(), v.back()
            ex)    v.front()    # Vector의 첫번째 원소를 참조
                v.back()     # Vector의 마지막 원소를 참조
        4) v.begin(), v.end()
            ex) v.begin()    #  iterator로 접근 시 vector의 맨 첫번째 데이터 주소
                v.end()        #  iterator로 접근 시 vector의 맨 마지막 데이터 위치의 다음 주소
        [데이터 추가 및 삭제]
        1) v.push_back(데이터)
            벡터 v의 맨 끝에 데이터 삽입
            복사생성자를 호출
            내부적으로 template의 생성자 호출을 지원하지 않음
            ex) v.push_back(10);
        2) v.emplace_back(데이터)
            push_back과 동일
            단, 복사생성자를 호출하지 않음
            template의 생성자 호출을 지원
            ex) v.emplace_back(10);
        3) v.pop_back()
            벡터 v의 맨 끝 데이터를 삭제
            ex) v.pop_back();
        4) v.insert(index, 데이터)
            벡터 v의 원하는 위치에 데이터 삽입
            복사생성자 호출
            ex)    v.insert(1,4);    # 1번째 위치에 4 삽입
        5) v.emplace(삽입할 위치의 주소 값, 변수 값)
            insert와 동일
            단, 복사생성자를 호출하지 않음
            ex)    v.implace(1,4);    # 1번째 위치에 4 삽입
        6) v.erase(iter)
            iter을 통해 원소에 접근하여 벡터의 데이터 삭제
            ex)    auto iter = v.begin();
                v.erase(iter);        # 벡터의 시작 위치 데이터 삭제
        [Resize]
        1) v.size(): 벡터의 원소 개수 반환
        2) v.capacity(): 할당된 벡터의 크기 반환
        3) v.resize(n), v.resize(n,10)
            벡터의 크기 조절
            ex)    v.resize(n)    : 벡터 크기를 n으로 변경
                v.resize(n,10) : 벡터 크기를 n으로 변경 후 10으로 초기화
        4) v.empty()
            벡터가 비어있는 지 확인
            비어있는 경우 True, 비어있지 않으면 False 반환
        5)  v.shrink_to_fit()
            capacity의 크기를 백터의 실제 크기에 맞춤
        [Pair]
            데이터를 쌍으로 저장하고자 할 때 사용
            ex)
            vector<pair<첫번째 원소 데이터 타입, 두번째 원소 데이터 타입>> v;
            1) 데이터 삽입
            v.push_back(make_pair(첫번째 원소, 두번째 원소))
            ex) vector<pair<int,int>> v;
                v.push_back(make_pair(1, 2));
            2) 데이터 접근
            v[i].first : i번째 원소의 첫번째 요소 접근
            v[i].second  : i번째 원소의 두번째 요소 접근
            ex)    vector<pair<int, int>> v;
                v.push_back(make_pair(1, 2));
                for(int i=0; i<v.size(); i++)
                    cout << v[i].first << “, “ << v[i].second << endl;
        [Tuple]
        Tuple은 세 개의 묶음으로 저장할 때 사용
        tuple 헤더를 선언해야 사용 가능
            ex)    #include <tuple>
                vector<tuple<1번째 원소 데이터 타입, 2번째 원소 데이터 타입, 3번째 원소 데이터 타입 >> v;
        1) 데이터 삽입
            v.push_back(make_tuple(첫번째 원소, 두번째 원소, 세번째 원소));
            ex)    vector<tuple<int, int, int>> v;
                v.push_back(make_tuple(1, 2, 3));
        2) 데이터 접근
            get<0>(v[i]) : i번째 원소의 첫번째 요소 접근
            get<1>(v[i])  : i번째 원소의 두번째 요소 접근
            get<2>(v[i])  : i번째 원소의 세번째 요소 접근
            ex)    vector<pair<int, int>> v;
                v.push_back(make_pair(1, 2));
                for(int i=0; i<v.size(); i++)
                    cout << get<0>(v[i]) << “, “ << get<1>(v[i]) << “, ” << get<2>(v[i]) << endl;
*/

int main_vector() {
    vector<int> v;          // vector 선언
    vector<int> v1(10);     // 10개 int형 공간 vector 선언
    vector<int> v2(10,10);  // 10으로 초기화된 10개 int형 공간
    
    cout << v.size() << endl;
    for(int i = 0; i< v1.size(); i++)
        cout << v1[i] << endl;
    cout << endl;
    
    // new way to get item
    for (auto item : v2)
        cout << item << " ";
    cout << endl;
    
//    cout << v1.at(-10) << endl; // 조건검사
    cout << v2.front() << endl;
    cout << v2.back() << endl;
    
    printf("%p\n", v2.begin());
    printf("%p\n", v2.end());
    
    cout << "---------------------" << endl;
    v1.emplace_back(10);
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;
    
    // 공간이 꽉 차면 새로운 공간 할당
    v.emplace_back(10);
    printf("%p\n", v.begin());
    v.emplace_back(20);
    printf("%p\n", v.begin());
    
    // resize
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    cout << v1.empty() << endl;
    v1.shrink_to_fit();
    cout << v1.capacity() << endl;
    
    // pair
    vector<pair<int,int>> v4;
    v4.push_back(make_pair(1,2));
    for(int i = 0; i < v4.size(); i++)
        cout << v4[i].first << ", " << v4[i].second << endl;
    
    return 0;
}
