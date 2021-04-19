#include<iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius; 
   
    cout << " enter the temperature in celsius : ";
    cin >> celsius;
    
    fahrenheit = (celsius * 9.0) / 5.0 + 32;    
    
    cout << " the temperature in fahrenheit is : " << fahrenheit << endl;  

    return 0;
}
