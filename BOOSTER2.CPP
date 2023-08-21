#include <iostream.h>
#include <conio.h>
class lipe
 {
    int year;
    public:
	  void setdata()
	  {
	  cout << "Enter a year: ";
	  cin >> year;

	  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	  {
	  cout << year << " is a leap year.";
	  }
	   else
	  {
	   cout << year << " is not a leap year.";
	  }
    }
};
  void main()
  {
  clrscr();
  lipe obj;
  obj.setdata();
  getch();
  }