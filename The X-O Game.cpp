#include<Windows.h>
#include <stdlib.h>  
#include<iostream>
#include<conio.h>//getch
#include<vector>
#include<string>
using namespace std;
string player1, player2;
char x[3][3];
int book[10] = {0,1,2,3,4,5,6,7,8,9};
void select(string& player1, string& player2);
void style();
void open()
{
    cout << "\t\tWelcome To X-O Game .\n"
        << "\t\t---------------------\n"
        << "\n\t\tPress Enter To Start. \n:";
    cin.get();
    system("cls");
    select(player1, player2);
    cout << "\t [1] - Continue \n "
         << "\t [2] - ReEnter Names \n"
         << "Enter Your Answer : ";
    int edit;
    cin >> edit;
    while (edit != 1)
    {
        select(player1, player2);
        cout << "\t [1] - Continue \n "
             << "\t [2] - ReEnter Names \n"
             << "Enter Your Answer : ";
        cin >> edit;
    }
    if (edit == 1)
    {
        system("cls");
    }
}
void select(string& player1, string& player2)
{
    cout << "\t\t~Entering Data~\n"
         << "\t\t---------------\n\n";
    cout << "Enter Player 1 Name : ";
    cin >> player1;
    cout << "Enter Player 2 Name : ";
    cin >> player2;
    cout << endl;
    cout << player1 << ",\t You Can =>" << " Sign With ~ X ~ Character \n"
         << player2 << ",\t You Can =>" << " Sign With ~ O ~ Character \n";
    //
    //
    //system("cls");
}
bool condition()
{
    if (x[0][0] == 'X' && x[0][1] == 'X' && x[0][2] == 'X')// 1 X
    {
        return true;
    }
    else if (x[0][0] == 'O' && x[0][1] == 'O' && x[0][2] == 'O')//1 O
    {
        return true;
    }
    else if (x[1][0] == 'X' && x[1][1] == 'X' && x[1][2] == 'X')//2 X
    {
        return true;
    }
    else if (x[1][0] == 'O' && x[1][1] == 'O' && x[1][2] == 'O')//2 O
    {
        return true;
    }
    else if (x[2][0] == 'X' && x[2][1] == 'X' && x[2][2] == 'X')//3 X
    {
        return true;
    }
    else if (x[2][0] == 'O' && x[2][1] == 'O' && x[2][2] == 'O')//3 O
    {
        return true;
    }
    else if (x[0][0] == 'X' && x[1][0] == 'X' && x[2][0] == 'X') //4 X
    {
        return true;
    }
    else if (x[0][0] == 'O' && x[1][0] == 'O' && x[2][0] == 'O')//4 O
    {
        return true;
    }
    else if (x[0][1] == 'X' && x[1][1] == 'X' && x[2][1] == 'X')//5 X
    {
        return true;
    }
    else if (x[0][1] == 'O' && x[1][1] == 'O' && x[2][1] == 'O')//5 O
    {
        return true;
    }
    else if (x[0][2] == 'X' && x[1][2] == 'X' && x[2][2] == 'X')//6 X
    {
        return true;
    }
    else if (x[0][2] == 'O' && x[1][2] == 'O' && x[2][2] == 'O')//6 O
    {
        return true;
    }
    else if (x[0][0] == 'X' && x[1][1] == 'X' && x[2][2] == 'X')//7 X
    {
        return true;
    }
    else if (x[0][0] == 'O' && x[1][1] == 'O' && x[2][2] == 'O')//7 O
    {
        return true;
    }
    else if (x[0][2] == 'X' && x[1][1] == 'X' && x[2][0] == 'X')//8 X
    {
        return true;
    }
    else if (x[0][2] == 'O' && x[1][1] == 'O' && x[2][0] == 'O')//8 O
    {
        return true;
    }
    else return false;
}
void game()
{
    int queries = 9;
    while (queries--)
    {
        int index;
        for (int i = 0; i < 9; i++)
        {
            style();
            if (i % 2 == 0)
                cout << player1 << " Enter The Possion : ";
            else
                cout << player2 << " Enter The Possion : ";
            cin >> index;
            if (index == 1 && book[1]==index)
            {
                if (i % 2 == 0)
                    x[0][0] = 'X';
                else
                    x[0][0] = 'O';
                book[index]=0;
            }
            else if (index == 2 && book[2])
            {
                if (i % 2 == 0)
                    x[0][1] = 'X';
                else
                    x[0][1] = 'O';
                book[index] = 0;
            }
            else if (index == 3 && book[3])
            {
                if (i % 2 == 0)
                    x[0][2] = 'X';
                else
                    x[0][2] = 'O';
                book[index] = 0;
            }
            else if (index == 4 && book[4])
            {
                if (i % 2 == 0)
                    x[1][0] = 'X';
                else
                    x[1][0] = 'O';
                book[index] = 0;
            }
            else if (index == 5 && book[5])
            {
                if (i % 2 == 0)
                    x[1][1] = 'X';
                else
                    x[1][1] = 'O';
                book[index] = 0;
            }
            else  if (index == 6 && book[6])
            {
                if (i % 2 == 0)
                    x[1][2] = 'X';
                else
                    x[1][2] = 'O';
                book[index] = 0;
            }
            else if (index == 7 && book[7])
            {
                if (i % 2 == 0)
                    x[2][0] = 'X';
                else
                    x[2][0] = 'O';
                book[index] = 0;
            }
            else if (index == 8 && book[8])
            {
                if (i % 2 == 0)
                    x[2][1] = 'X';
                else
                    x[2][1] = 'O';
                book[index] = 0;
            }
            else if (index == 9 && book[9])
            {
                if (i % 2 == 0)
                    x[2][2] = 'X';
                else
                    x[2][2] = 'O';
                book[index] = 0;
            }
            else
            {
               // cout << "Enter Empty Possion : ";
               // cin >> index;
                i--;
            }
            system("cls");
            if (condition())
            {
                style();
                cout << "\t\t";
                if (i % 2 == 0)
                {
                    cout << player1;
                }
                else
                {
                    cout << player2;
                }
                cout << ", Won ^_^, Congratulation \n\n";
                break;
            }
            else if (!condition() && i == 8)
            {
                cout << "\t\tThe Two Players Tied\n\n";
                queries = 0;
                break;
            }
        }
        if (condition())
        {
            break;
        }
    }
}
void style()
{
    //select(player1, player2);
    cout << "\t ________________________________________________________\n"
        << "\t|                                                        |\n";
    cout << "\t| \t\t\t" << " " << x[0][0] << " | " << x[0][1] << " | " << x[0][2] << "\t\t\t |\n"
        << "\t| \t\t\t" << "---|" << "---" << "|" << "---" << "\t\t\t |\n";
    cout << "\t| \t\t\t" << " " << x[1][0] << " | " << x[1][1] << " | " << x[1][2] << "\t\t\t |\n"
        << "\t| \t\t\t" << "---" << "|" << "---" << "|" << "---" << "\t\t\t |\n";
    cout << "\t| \t\t\t" << " " << x[2][0] << " | " << x[2][1] << " | " << x[2][2] << "\t\t\t |\n"
        << "\t|                                                        |\n";
    cout << "\t|________________________________________________________|\n";
    //game();
    //system("cls");
}
int main()
{
    system("color 0F");
    int tru = 0;
    do
    {
        int increase = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                x[i][j] = '1' + increase;
                increase++;
            }
        }
        open();
        //style();
        game();
        cout << "[1]-Play Again\n"
             << "[2]-CLose\n"
             << "Enter The Answer : ";
        cin >> tru;
    } 
    while (tru == 1);
    return 0;
}