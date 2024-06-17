// code for basics, lec 1, WHILE LOOP
#include<iostream>
using namespace std;

int main()
{
    // printing a number in rverse order
    // inputting a number from user 
    int n;
    cout<<"\n Enter the number u wish to get the reverse table for = "<< "\n";
    cin>>n;
    //printing the table in revrse :-
    int t;
    
    while(n>0)
    {
        for(int i=10; i>=1; i--)
        {
            t=i*n;
            cout<< i << " time(s) "<< n<<" = "<< t<< "\n";
        }
        
        n=0; //updating the value of n, because otherwie the while loop will get iteretated for infinte number of times, and we dont want that ;)
    }
    
}
