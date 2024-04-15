s#pragma once
#pragma once  
#include <iostream> // cout 사용 하기 위해 input output 사용가능
#include <string> //문자열 사용
using namespace std;  //std;;vector 를 vector만 적어도 간능

// SmartHome 클래스
class SmartHome {
private:   
    //클래스 변수들 시험내용(member variable, attribute, field)
    string owner;    //문자열
    int temperature;   //정수형
    int humidity;   
    bool security;  //ture or false
public:
    //클래스 함수들(member fuction, method)
    //생성자 초기값 설정하기 위해 this 오너는 현재 객체의 오너를 지정
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner; //this 현재 객체 의미 현재만들려는 스마트홈 오너에 오너를 넣어라
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    //같은 생성자   /temperatur 매개변수 (parameter), o, t 인수(argument) 
    // 
    //SmartHome(string o, int t, int h, bool sec)
    //    : temperature(t), humidity(h), security(sec) {
    //    strcpy(owner, o);
    //}
        

    //소멸자
    //각 멤버베리어블에 원하는 값을 넣기위해 아래 코딩 사용 temperature는 매개변수, 20도는 인수
    ~SmartHome(){}
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) { //void 입력은 받고 반환값은 없다 따라서 return 필요없다
        this->security = security;
    }
    string getOwner() {     //입력은 안받아도 된다 하지만 바환값을 있다 리턴은 필요
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {
        cout << "집주인: " << this->owner << endl;  //<<는 옆에 계속 프린트, endl은 줄바꿈
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};
