#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <fstream>

using namespace std;

class Song {
    public:
        string name;
        string artist;
        int rating;
    Song(string _name, string _artist, int rating) {
        name = _name;
        artist = _artist;
        rating = rating;
    }
    void print() {
        cout << name << " is played\n";
    }

};

char menu() {
    char choice;
    cout << "\n--- Music Player Menu ---\n";
    cout << "F - Play First Song\n";
    cout << "N - Play Next song\n";
    cout << "P - Play Previous song\n";
    cout << "A - Add and play a new Song at the current location\n";
    cout << "L - List the current playlist\n";
    cout << "Q - Quit\n";
    cout << "Choose an option: ";
    cin >> choice;
    return choice;

}
int main() {

     vector<Song> songs = {
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pray For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris & Grey", 5},
        {"Wait", "Maroon 5", 4},
        {"Whatever It Takes", "Imagine Dragons", 3}
    };

    vector<Song> :: iterator it = songs.begin();

    while(true) {
        char choice = menu();
        switch(choice) {
            case 'F' :
                it = songs.begin();
                it ->print(); break;
            case 'N' :
                it++;
                if (it != songs.end())
                    it ->print(); break;
            case 'P' :
                it--;
                if (it != songs.begin())
                    it ->print(); break;

             case 'Q' :
                return 0; break;

            case 'A' :
                string name, artist;
                int rating;
                cin >> name >>artist;
                cin >>rating;
                    it = songs.insert(it, Song(name, artist, rating));
                    it->print(); break;


        }

    }






    return 0;
}
