#include<iostream>
using namespace std;

class Student{
//	private:
		int rollno;
		string name;
		string subject;
		
	public:
		void putData(){
			cout<<"\nenter your Roll no :";
			cin>>rollno;
			cin.ignore();
			cout<<"enter your Name :";
			getline(cin, name);
			cout<<"enter your Subject :";
			getline(cin, subject);
			
		}
		void getData(){
			cout<<"Roll no : "<<rollno;
			cout<<"\nName : "<<name;
			cout<<"\nSubject : "<<subject;
		}
};

int main()
{
	Student user;
	Student s1;
	
	user.putData();
	user.getData();
	
	s1.putData();
	s1.getData();
	
	return 0;
}
