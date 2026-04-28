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











// Example #2 : Functions that hasreturn value but doesn’t have argument

#include<iostream>
using namespace std;
int square(void); 


int main()
{

cout<<"***SQUARE OF A NUMBER***"; square();
cout<<"\n***TRY ANOTHER ONE***"; square();

}



int square(void)  // Does not have an argument - because it is void
{

int a, sq;
cout<<"\nEnter a number: "; cin>>a;
sq = a * a;
cout<<"\nThe square of "<<a<<" is "<<sq;

}





