#include<iostream>
using namespace std;

class Roshan{
	private:
		int money=5000;
	public:
		friend class Rajveer;
	};

class Rajveer : public Roshan{
	public:
		void data(Roshan r){
			cout<<"Your money = "<<r.money;
		}
   }; 
int main()
{
    Roshan obj;
    Rajveer ob;
    ob.data(obj);
	
	return 0;
}
