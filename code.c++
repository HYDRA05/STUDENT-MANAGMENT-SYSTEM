#include<iostream>
using namespace std;
string sutudent(){
    string name;
    cout<<"Enter your name :";
    cin>>name;
    return name;
}
int rollno(){
    int roll;
    cout<<"Enter roll number of the student :";
    cin>>roll;
    return roll;
}
int mathmark(){
    int math;
    cout<<"Enter math mark:";
    cin>>math;
    return math;
}
int  englishmark(){
    int english;
    cout<<"Enter english mark:";
    cin>>english;
    return english;
}
int  milmark(){
    int mil;
    cout<<"Enter mil mark:";
    cin>>mil;
    return mil;

}
int computermark(){
    int computer;
    cout<<"Enter computer mark:";
    cin>>computer;
    return computer;
}



int main(){
    string ads=sutudent();
    cout<<"welcome "<<ads<<endl;

    int df=rollno();
    cout<<"The roll no of the student is :"<<df<<endl;

int val=mathmark();
cout<<val<<endl;

int sal=englishmark();
cout<<sal<<endl;

int gal=milmark();
cout<<gal<<endl;

int lal=computermark();
cout<<lal<<endl;


int total=val+sal+gal+lal;
cout<<total<<endl;
 
if (total>=20){
    cout<<"pass"<<endl;
}else{
    cout<<"fail"<<endl;
}

    return 0;
}
