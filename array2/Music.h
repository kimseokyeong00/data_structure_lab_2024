#pragma once //������Ͽ� �����ϸ� �̹� ����� ��Ŭ��� ������ ����
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
    //������ constructor
    Music(string title, string artist, string album, int year) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }
    // �Ҹ��� destructor
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
    vector<Music> musicList;    //�������� ���� �� ����Ʈ�� �ʿ� ���ͻ��
                                //���� �ϳ��ϳ��� Music ��ü�� ����ȴ�/��ü �ϳ��� year album artist title
                                //stl ���
public:
    MusicStreamingService(string serviceName) {
        this->serviceName = serviceName;
    }

    // Adds a music to the service
    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year); //���ο� ��ü ����
        musicList.push_back(newMusic);  //���ο� ��ü�� ���� �ڿ��� �ٿ���
        cout << title << " by " << artist << " added to " << serviceName << endl;
    }

    // Searches for music by title
    Music* searchByTitle(string title) { //*�� �����ʹ� �Էµ� ���� �ּҿ� ����
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) {  //���ȣ�ȿ� ���ڷ� Ŭ���� ã��
             //Ŭ������ Ÿ��Ʋ�� �������� �Է��� ���� ������ Ȯ�� �ٸ��� i�� ����
                return &musicList[i]; //&�� �ּҰ��� ��ȯ
            }
        }
        return NULL;
    }

    // Searches for music by artist
    vector<Music*> searchByArtist(string artist) {
        vector<Music*> result;
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {
                result.push_back(&musicList[i]); //����Ʈ ����Ʈ�� �ּҰ� ����
            }
        }
        return result;
    }

};
