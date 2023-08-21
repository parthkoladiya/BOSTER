#include <iostream.h>
#include <conio.h>

class boom
 {
    int num;
    public:
     void setdata()
     {
	cout << "Enter a number: ";
	cin >> num;

	if (num % 2 == 0)
	 {
	  cout << num << " is Even." << endl;
	 }
	 else
	 {
	   cout << num << " is Odd." << endl;
	 }
     }
 };
 void main()
 {
 boom obj;
 clrscr();
 obj.setdata();
 getch();
 }