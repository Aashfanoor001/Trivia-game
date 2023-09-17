#include<iostream>
#include<fstream>
#include<string>
#include "Question.h"
using namespace std;
void displayQuestion(Question);
void displayResult(int,int);
int main(){
    string answer;
	int numQuestions=10;
	int player1points=0;
	int player2points=0;
//create array of 10 Question objects,one for each trivia question.
	Question questions[numQuestions];
//Reading data from file.
	ifstream infile;
	infile.open("Question.txt");
	if(!infile){
	cout<<"error"<<endl;
	exit(0);} 
    string line;
	int index=0; 
    while(getline(infile,line))
    
	{ questions[index].setQuestionText(line); 
        getline(infile,line);
        questions[index].setPossibleAnswer1(line); 
        getline(infile,line);
        questions[index].setPossibleAnswer2(line); 
        getline(infile,line);
        questions[index].setPossibleAnswer3(line); 
        getline(infile,line);
        questions[index].setPossibleAnswer4(line); 
        getline(infile,line);
        questions[index].setCorrectAnswer(line);
        index++;
    }
    infile.close(); 
int choice=0; 
cout<<"*******221017   AASHFA NOOR***********"<<endl; 
while(choice!=2){
cout<<"1-To play game"<<endl;
cout<<"2-Exit"<<endl;
cout<<"Enter Choice: ";
cin>>choice;	
   if (choice==1){
   	
	 int num=0;
	while(num<numQuestions){
		if(num<5){
		if(num==0){	
		cout<<"Question for Player1"<<endl;}
		cout<<"***************************"<<endl;
		displayQuestion(questions[num]);
		cout<<"Enter Correct Option: ";
		cin>>answer; 
		while(answer!="1" && answer!="2" && answer!="3" && answer!="4"){
			cout<<"This option is not mentioned in question."<<endl;
			cout<<"Enter again ";
			cin>>answer;
		}	
		if(answer==questions[num].getCorrectAnswer()){
			cout<<"correct!"<<endl;
			player1points++;
		}
		else{
			cout<<"Incorrect"<<endl;
		}
		num++;}
		else{
			if(num==5){
		cout<<"Question for Player2"<<endl;}
		cout<<"***************************"<<endl;
		displayQuestion(questions[num]);
		cout<<"Enter Correct Option: ";
		cin>>answer;
		while(answer!="1" && answer!="2" && answer!="3" && answer!="4"){
			cout<<"This option is not mentioned in question."<<endl;
			cout<<"Enter again ";
			cin>>answer;
		} 
		
		if(answer==questions[num].getCorrectAnswer()){
			cout<<"correct!"<<endl;
			player2points++;
		}
		else{
			cout<<"Incorrect"<<endl;
		}
		num++;
	}
}	displayResult(player1points,player2points);}
else if(choice==2){
cout<<"Thank You"<<endl;
}
else{
	cout<<"invalid choice"<<endl;
	cout<<"enter again"<<endl;
	
}	}
		
cout<<"**********221017 AASHFA NOOR************"<<endl;}
void displayQuestion(Question ques){
	
	cout<<ques.getQuestionText()<<endl;
	cout<<"1."<<ques.getPossibleAnswer1()<<endl;
	cout<<"2."<<ques.getPossibleAnswer2()<<endl;
	cout<<"3."<<ques.getPossibleAnswer3()<<endl;
	cout<<"4."<<ques.getPossibleAnswer4()<<endl;	
}
void displayResult(int player1,int player2){
	cout<<"_____________________________________"<<endl<<endl;
	cout<<"PLAYER1 POINTS = "<<player1<<endl;
	cout<<"PLAYER2 POINTS = "<<player2<<endl;
	if(player1>player2){
		cout<<"Player1 is Winner"<<endl;
	}
	else if(player1<player2){
		cout<<"Player2 is winner"<<endl;
	}
	else{
		cout<<"It's a tie!"<<endl;
	}
	cout<<"________________________________________"<<endl<<endl;
}

