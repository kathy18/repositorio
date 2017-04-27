#include <iostream>
using namespace std;
bool palindrome(char pal[],int tamanio){
	for(int i=0;i<tamanio/2;i++){
		if(pal[i]!=pal[tamanio-1-i])
			return false;
	}
	return true;

}
int main() {
	char palabra[]="anitalavalatina";
	int tama=15;
	//cout<<palindrome(palabra,tama);
	if(palindrome(palabra,tama)==1)
		cout<<"true";
	else
		cout<<"false";
	return 0;
}

