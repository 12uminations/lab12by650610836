#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
    int rg;
    string grade;
void ranG(){
    rg = rand() % 9;
}
int futl(int x){
        if(x == 0) grade = "A";
        else if(x == 1) grade = "B+";
        else if(x == 2) grade = "B";
        else if(x == 3) grade = "C+";
        else if(x == 4) grade = "C";
        else if(x == 5) grade = "D+";
        else if(x == 6) grade = "D";
        else if(x == 7) grade = "F";
        else if(x == 8) grade = "W";
    return 0;
}

int main()
{
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    ranG();
    futl(rg);
    cout << "You will get "<< grade<<" in this 261102.";
}