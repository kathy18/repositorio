#include <iostream>

using namespace std;

int main()
{
   cout<<"grados fahrenhei"<<"----->"<<"grados celcius"<<endl;
   double celcius;
   for(double f=0;f<=300;f=f+20){
        celcius=(f-32)*0.55555556;
        cout<<f<<"---------------->"<<celcius<<endl;
   }
   return 0;
}
