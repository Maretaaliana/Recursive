#include <iostream>
#include <conio.h>
#include <stdio.h> 

using namespace std;

void rekursif(int argc, char *argv[])
{

  int t,y,x;

  cout << “Masukkan tinggi segitiga : “;
  cin  >> t;
  cout << “—————————-\n”;

  for(y=1;y<=t;y++)
  {
    cout<<” “;
    for(x=1;x<=y;x++)
  {
    cout << “*”;
  }
    cout << ” ” << endl;
  }

  cout<<endl<<endl;
  system(“PAUSE”);
  return EXIT_SUCCESS;
}
