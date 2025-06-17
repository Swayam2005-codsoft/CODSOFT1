#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void guesstheno(){
	srand(time(0));
	int notoguess=rand()%100+1;
	int guess;
	int attempts=0;
	cout<<"welcome to the number guessing game!"<<endl;
	cout<<" i am thinking of a number between 1 and 100."<<endl;
	while(true){
		cout<<"take a guess: ";
		cin>>guess;
		attempts++;
		if(guess<notoguess){
			cout<<"your guess is too low. try again!"<<endl;
		}
		else if (guess>notoguess){
			cout<<"your guess is too high.Try again!"<<endl;
		}
		else{
			cout<<"congratulations!you have guess the number in"<<attempts<<"attempts."<<endl;
			break;
		}
	}
}
int main(){
	char playagain;
	do{
		guesstheno();
		cout<<"would you like to play again?(y/n): ";
		cin>>playagain;
	}
	while(playagain=='y'|| playagain=='Y');
	return 0;
}
