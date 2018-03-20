#include<iostream>
#include<string.h>
using namespace std;
class marks
{
	string subject_name;
	float cat_mark,assignment_mark,mcq_mark,total;
	float calculate_total()
	{
		float calculated=((cat_mark*1.4)+(assignment_mark+mcq_mark))*1.4;
		if(calculated>100)
			calculated=100;	
			return calculated;	
	}
	
public:
 void get_input()
{ bool valid=false;
	cout<<"subject: ";
	cin>>subject_name;
      while(!valid)
{
caterror:	cout<<"CAT: ";
	cin>>cat_mark;
	if((cat_mark>=0.0&&cat_mark<=50.0))
        valid=true;
    else{
		cout<<"error"<<endl;
goto caterror;
	  }
	
asserror:	cout<<"assignment: ";
	cin>>assignment_mark;
	if((assignment_mark>=0.0&&assignment_mark<=40.0))
		valid=true;
	else
	{
		cout<<"error"<<endl;
		goto asserror;;
	}
mcqerror:	cout<<"MCQ: ";
	cin>>mcq_mark;
	if((mcq_mark>=0.0&&mcq_mark<=10.0))
	valid=true;
	else
	{
		cout<<"error"<<endl;
		goto mcqerror;
	}
}
}
void get_marks()
{
	float a;
	a=calculate_total();
	//calculate_total();
	cout<<subject_name<<" \t"<<a;	
}
};
int main()
{
	marks m;
	m.get_input();
	m.get_marks();
	//m.calculate_total();
	return 0;
}
