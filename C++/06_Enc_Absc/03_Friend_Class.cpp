#include<iostream>
using namespace std;

 class Rajveer{
	private:
		int money = 10000000;
	public:
	    friend class Roshan;	
    };
 class Roshan : public Rajveer{
 	public:
 		void data(Rajveer r){
 			cout<<"Roshan Your Money : "<<r.money;
		 }
 };   
    
int main()
{
	Rajveer obc;
	Roshan st;
    st.data(obc);
	
	return 0;
}
