#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    if (file.is_open()) {
        file << "Believer" << endl;
        file << "Shape of You" << endl;
        file << "Perfect" << endl;
        file << "On My Way" << endl;
        file << "Senorita" << endl;

        file.close();
        cout << "5 songs have been written to my_fav_songs.txt successfully." << endl;
    }
    else {
        cout << "Error: Unable to create the file." << endl;
    }

    return 0;
}
