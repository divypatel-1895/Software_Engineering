#include<iostream>
using namespace std;

class Playlist {
public:
    string name;

    // Default Constructor
    Playlist() {
        name = "My Favourites";
        cout << "Welcome! Playlist Created Successfully." << endl;
    }

    void display() {
        cout << "Playlist Name: " << name << endl;
    }
};

int main() {
    Playlist p;
    p.display();

    return 0;
}
