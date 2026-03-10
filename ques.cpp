#include<iostream>
using namespace std;
class addition{
    private:
    int number1,number2;
    int sum;
    public:
    void getdata();
    void displaysum();
   };

void addition::getdata(){
    cout<<"enter first no.";
    cin>>number1;
    cout<<"enter second no.";
    cin>>number2;
}
void addition::displaysum(){
    sum = number1 + number2;
    cout<<"the sum of 2 no. is"<<sum;
}
int main()
{
    addition a1;
    a1.getdata();
    a1.displaysum();
    return 0;
}

