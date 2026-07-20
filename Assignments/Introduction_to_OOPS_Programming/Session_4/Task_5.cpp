#include<iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;

    SocialMediaUser(string u, int f) {
        username = u;
        followers = f;
    }
};

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(string u, int f)
        : SocialMediaUser(u, f) {}

    void postStory(string storyTitle) {
        cout << username
             << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer insta("DivyPatel", 15000);

    insta.postStory("My Goa Trip");

    return 0;
}
