#include <iostream.h>
#include <conio.h>

class result
   {
   float s1, s2, s3;
    public:
	void setdata()
	{

	 cout << "Enter marks for Subject 1: ";
	 cin >> s1;

	 cout << "Enter marks for Subject 2: ";
	 cin >> s2;

	 cout << "Enter marks for Subject 3: ";
	 cin >> s3;

	 if (s1 >=37  && s2 >= 37 && s3 >= 37)
	 {
	  cout << "Result: Passed";
	 }
	 else
	 {
	  cout << "Result: Failed";
	 }
	}
};
void main()
{
 result obj;
 clrscr();
 obj.setdata();
 getch();
}
