#include<iostream.h>
#include<conio.h>
class perant
{
 char day;
 public:
 void setdata()
 {
 cout<<"Enter Your Day";
 cin>>day;
 switch(day)
  {
  case 'm':
	 cout<<"Monday";
	 break;
  case 't':
	cout<<"Tuesday";
	break;
  case 'w':
	cout<<"wednesday";
	break;
  case 'T':
	cout<<"Thasday";
	break;
  case 'f':
	cout<<"Friday";
	break;
  case 's':
	cout<<"saterday";
	break;
  case 'S':
	cout<<"Sunday";
	break;
  default:
	cout<<"invlide day";
	break;
  }
 }
};
void main()
{
 perant obj;
 clrscr();
 obj.setdata();
 getch();
}