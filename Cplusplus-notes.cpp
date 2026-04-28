// C++


// Functions that doesnt return


#include<iostream>
using namespace std;
void twobeep(void); //function prototype
int main()
{ char ch;

twobeep();
cout<<"Type any character";
cin>>ch;
twobeep();

//function call

//2nd function call

}
void twobeep(void)
{
cout<<"\a";

//function definition
//1st alarm
cout<<"\a"; //2nd alarm
}
