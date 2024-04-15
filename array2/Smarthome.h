s#pragma once
#pragma once  
#include <iostream> // cout ��� �ϱ� ���� input output ��밡��
#include <string> //���ڿ� ���
using namespace std;  //std;;vector �� vector�� ��� ����

// SmartHome Ŭ����
class SmartHome {
private:   
    //Ŭ���� ������ ���賻��(member variable, attribute, field)
    string owner;    //���ڿ�
    int temperature;   //������
    int humidity;   
    bool security;  //ture or false
public:
    //Ŭ���� �Լ���(member fuction, method)
    //������ �ʱⰪ �����ϱ� ���� this ���ʴ� ���� ��ü�� ���ʸ� ����
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner; //this ���� ��ü �ǹ� ���縸����� ����ƮȨ ���ʿ� ���ʸ� �־��
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }
    //���� ������   /temperatur �Ű����� (parameter), o, t �μ�(argument) 
    // 
    //SmartHome(string o, int t, int h, bool sec)
    //    : temperature(t), humidity(h), security(sec) {
    //    strcpy(owner, o);
    //}
        

    //�Ҹ���
    //�� ���������� ���ϴ� ���� �ֱ����� �Ʒ� �ڵ� ��� temperature�� �Ű�����, 20���� �μ�
    ~SmartHome(){}
    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) { //void �Է��� �ް� ��ȯ���� ���� ���� return �ʿ����
        this->security = security;
    }
    string getOwner() {     //�Է��� �ȹ޾Ƶ� �ȴ� ������ ��ȯ���� �ִ� ������ �ʿ�
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
        cout << "������: " << this->owner << endl;  //<<�� ���� ��� ����Ʈ, endl�� �ٹٲ�
        cout << "�µ�: " << this->temperature << "��" << endl;
        cout << "����: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};
