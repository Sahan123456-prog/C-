#include <iostream>
using namespace std;

int main()
{
    const int rows = 13;
    const int cols = 6;

    char seats[rows][cols];

    // initialize all seats as available (*)
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            seats[i][j]='*';
        }
    }

    cout<<"Rows 1 and 2 are first class (FC)"<<endl;
    cout<<"Rows 3 through 7 are business class (BC)"<<endl;
    cout<<"Rows 8 through 13 are economy class (EC)"<<endl;

    cout<<"\n* = Available"<<endl;
    cout<<"X = Occupied"<<endl<<endl;

    cout<<"     A B C D E F"<<endl;

    for(int i=0;i<rows;i++)
    {
        cout<<"Row "<<i+1<<"  ";
        for(int j=0;j<cols;j++)
        {
            cout<<seats[i][j]<<" ";
        }
        cout<<endl;
    }

    string type;
    int row;
    char seat;

    cout<<"\nEnter Ticket type (FC, BC, or EC): ";
    cin>>type;

    cout<<"Enter desired row (1-13): ";
    cin>>row;

    cout<<"Enter seat letter (A-F): ";
    cin>>seat;

    int col = seat - 'A';

    if(seats[row-1][col]=='*')
    {
        seats[row-1][col]='X';
        cout<<"Seat Reserved Successfully!"<<endl;
    }
    else
    {
        cout<<"Seat already occupied!"<<endl;
    }

    cout<<"\nUpdated Seating Arrangement\n";
    cout<<"     A B C D E F"<<endl;

    for(int i=0;i<rows;i++)
    {
        cout<<"Row "<<i+1<<"  ";
        for(int j=0;j<cols;j++)
        {
            cout<<seats[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
