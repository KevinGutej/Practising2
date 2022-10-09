#include <iostream>
#include <vector>
#include <time.h>
#include <windows.h>
#include <fstream>

using namespace std;

void first_part(vector<int>&Homework)
{
    srand(time(NULL));
    for(int i=0; i < 10;i++)
    {
        Homework[i] = rand()%41+1;
    }
}

void second_part(vector<int>&Homework)
{
        for (int i = 10; i <= 19; i++){
        cout << "Enter element number " << i << ": ";
        cin >> Homework[i];
    }
}

void counting_part(vector<int>&Homework,int &counter_even, int &i)
{
    if(i%2==0)
    {
        cout << "Your number is even! " << endl;
        counter_even++;
    }
}

int main()
{
    vector<int>Homework(20);
    fstream file;
    int counter_even = 0;
    int i;
    first_part(Homework);
    second_part(Homework);
    counting_part(Homework,counter_even,i);
    for(int i=0; i<Homework.size(); i++)
    {
        cout << "Element number " << i << ": " << Homework[i] << endl;
    }
    return 0;
}
