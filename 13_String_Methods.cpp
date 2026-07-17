#include <iostream>
using namespace std;

int main()
{

    string name;
    cout << "Enter your name ";
    cin >> name;

    //(name.length() > 12)
    /*
   if (name.length() > 12)
   {
       cout << "Your name can t be over 12 characters";
   }
   else
   {
       cout << "Welcome " << name;
   }

   */



    // name.clear();

    // cout << "HEllo " << name;


    

    name.append("@gmail.com");

    cout << "You user is now " << name;

    return 0;
}