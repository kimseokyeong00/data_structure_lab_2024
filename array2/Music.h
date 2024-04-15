#pragma once //헤더파일에 적용하면 이미 적용된 인클루드 제외함 유용
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Music class
class Music {
private:
    string title;
    string artist;
    string album;
    int year;

public:
    //생성자 constructor
    Music(string title, string artist, string album, int year) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }
    // 소멸자 destructor
    ~Music() {}


    // Getters
    string getTitle() { 
        return title; 
    }
    string getArtist() { 
        return artist;
    }
    string getAlbum() {
        return album; 
    }
    int getYear() {
        return year; 
    }
};

// MusicStreamingService class
class MusicStreamingService {
private:
    string serviceName;
    vector<Music> musicList;    //여러개의 음원 즉 리스트가 필요 벡터사용
                                //음원 하나하나에 Music 객체가 적용된다/객체 하나에 year album artist title
                                //stl 사용
public:
    MusicStreamingService(string serviceName) {
        this->serviceName = serviceName;
    }

    // Adds a music to the service
    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year); //새로운 객체 생성
        musicList.push_back(newMusic);  //새로운 객체를 벡터 뒤에다 붙여줌
        cout << title << " by " << artist << " added to " << serviceName << endl;
    }

    // Searches for music by title
    Music* searchByTitle(string title) { //*는 포인터는 입력된 값을 주소에 저장
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) {  //대괄호안에 숫자로 클래스 찾음
             //클래스의 타이틀을 얻은다음 입력한 값과 같은지 확인 다르면 i를 더함
                return &musicList[i]; //&는 주소값을 반환
            }
        }
        return NULL;
    }

    // Searches for music by artist
    vector<Music*> searchByArtist(string artist) {
        vector<Music*> result;
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {
                result.push_back(&musicList[i]); //리절트 리스트에 주소값 저장
            }
        }
        return result;
    }

};
