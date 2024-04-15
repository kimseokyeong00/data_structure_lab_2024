#include <cstdio>
#include "lectangle.h"
#include "Smarthome.h"
#include "music.h"
//#include"Car.h"

void main() {
	/*
		Car myCar(50, "k3", 4);
		Car yourCar(100, "k5", 3);
		myCar.speedUp();
		myCar.display();
		yourCar.display();
		myCar.whereAmI();
		yourCar.whereAmI();
		SportsCar()*/
		/*
		Rectangle r(10, 20);
		double perimeter = r.getPerimeter();
		std::cout << "Rectangle 1:" << std::endl;
		std::cout << "Area:" << r.getArea() << std::endl;
		std::cout << "perimeter:" << perimeter << std::endl;
		std::cout << "is square?:" << std::boolalpha << r.isSquare() << std::endl;
		*/


		//Smarthome 
		//Smarthome myHome("김석영", 23, 40, ture);
		//myHome.printStatus();

		//뮤직 스트리밍 서비스
		//Music Streaming Service 
	MusicStreamingService myService("Spotify");
	myService.addMusic("VIBE", "Taeyang", "Album", 2023);
	myService.addMusic("Ditto", "NewJeans", "Album", 2023);
	myService.addMusic("Attention", "NewJeans", "Album", 2023);

	string music_title;
	cout << "Enter the Music Title : ";
	cin >> music_title;

	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "found: " << result->getTitle() << " by " << result->getArtist() << endl;

	}
	else {
		cout << "Not found" << endl;
	}

	string artist_name;
	cout << "Enter the Artist Name : ";
	cin >> artist_name;

	vector<Music*> artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found " << artistResult.size() << " songs by " << artist_name << " : " << endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}
	}
	else {
		cout << "not found" << endl;
	}
}
