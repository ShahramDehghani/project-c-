/*#include <iostream>
using namespace std;
main()
{
    cout << "shahram\n";
    char name = 'shahram' ;
    cout << name ;
    cout << "\nage : " << name ;
    
}*/





/*#include <iostream>
using namespace std;
main()
{
    
    string name = name;
    string lastname = lastname;

    cout <<"Enter name : ";
    cin >> name;
    cout <<"Enter Lastname : ";
    cin >> lastname;

    cout <<name<<'\t' << lastname;

}*/














/*#include <iostream>
using namespace std;

main()
{
    int x,y ;
    cout << "Enter Number for X:";
    cin >> x;
    cout << "Enter Number for Y:";
    cin >> y;

    cout <<"X + Y = "<< x+y << endl;
    cout <<"X - Y = "<< x-y << endl;
    cout <<"X * Y = "<< x*y << endl;
    cout <<"X / Y = "<< x/y << endl;
    cout <<"X % Y = "<< x%y << endl;



}*/




/*#include <iostream>
using namespace std;

main()

{
    int x,y;
    cout <<"Enter plese X Numbers :";
    cin >> x;
    cout <<"Enter plese Y Numbers :";
    cin >> y;

    cout <<"X + Y = " << x + y << endl;
    if (x <= y) {
        cout <<"X bozorgtar Y ast";
    }
    else {
        cout <<"X - Y = " << x - y << endl;
    }
    cout <<endl<<"X * Y = " << x * y << endl;

}*/








#include <iostream>
using namespace std;

main()

{
    int x,y;
    cout <<"Enter plese X Numbers :";
    cin >> x;
    cout <<"Enter plese Y Numbers :";
    cin >> y;

    cout <<"X + Y = " << x + y << endl;
    if (x <= y) {
        int temp = x;
        x = y;
        y = temp;
        cout <<"X - Y = " << x - y << endl;
        cout << "shahram";
    }
    cout <<"X * Y = " << x * y << endl;

}