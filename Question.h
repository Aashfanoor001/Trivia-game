#ifndef QUESTION_H
#define QUESTION_H 
#include <string>
using namespace std;
class Question{
	private:
		string questionText;
		string possibleAnswer1;
		string possibleAnswer2;
		string possibleAnswer3;
		string possibleAnswer4;
		string correctAnswer;
	public:
		//Default constructor
		Question(){
	    questionText="";
		possibleAnswer1="";
		possibleAnswer2="";
	    possibleAnswer3="";
		possibleAnswer4="";
		correctAnswer="";
		}
		//Parametrized constructor
		Question(string ques,string a1,string a2,string a3,string a4,string c){
	    questionText=ques;
		possibleAnswer1=a1;
		possibleAnswer2=a2;
	    possibleAnswer3=a3;
		possibleAnswer4=a4;
		correctAnswer=c;
		}
		//Mutators
		void setQuestionText (string ques ){
			questionText=ques;
		}
		void setPossibleAnswer1 (string ans ){
			possibleAnswer1=ans;
		}
			void setPossibleAnswer2 (string ans ){
			possibleAnswer2=ans;
		}
			void setPossibleAnswer3 (string ans ){
			possibleAnswer3=ans;
		}	
		void setPossibleAnswer4 (string ans ){
			possibleAnswer4=ans;
		}
			void setCorrectAnswer (string correct_ans ){
			correctAnswer=correct_ans;
		}
		//Accessors
			string getQuestionText ()const{
			return questionText;
		}
			string getPossibleAnswer1 ()const{
			return possibleAnswer1;
		}
			string getPossibleAnswer2 ()const{
			return possibleAnswer2;
		}
			string getPossibleAnswer3 ()const{
			return possibleAnswer3;
		}
			string getPossibleAnswer4 ()const{
			return possibleAnswer4;
		}
			string getCorrectAnswer ()const{
				return correctAnswer;
		}	
};
#endif
