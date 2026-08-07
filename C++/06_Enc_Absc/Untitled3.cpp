#include<iostream>
using namespace std;

class Roshan{
	private:
		int Paisa = 90000;
	public:
	  friend class Divy;	
    };

class Divy : public Roshan{
	public:
		void data(Roshan r){
			cout<<"Tara Paisa : "<<r.Paisa;
		}
    };    

int main()
{
	Roshan obc;
	Divy ge;
    ge.data(obc);
	 
	return 0;
}
