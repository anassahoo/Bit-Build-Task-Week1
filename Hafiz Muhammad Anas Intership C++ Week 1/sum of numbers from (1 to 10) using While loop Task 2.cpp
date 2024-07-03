#include<iostream>
using namespace std;
int main()
{
    //Declaring variables
    int num=10,sum=0;
    //Using while loop to calculate the sum of numbers(1 to 10)
    while(num>=1)
    {
        sum+=num;
        num--;
    }
    //Printing the result
    cout<<"The sum of num from(1 to 10) is = "<<sum;
    //Ending the program
    return 0;

}