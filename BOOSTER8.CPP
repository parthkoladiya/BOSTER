#include <iostream.h>
#include <conio.h>
class Demo
{
 public:
   int Cube(int num)
   {
    return num * num * num;
   }
 };
 void main()
 {
    int num, result;
    clrscr();
    cout << "Enter a number: ";
    cin >> num;
      Demo obj;
     result = obj.Cube(num);

    cout << "The cube of " << num << " is " << result << ".";
    getch();
  }