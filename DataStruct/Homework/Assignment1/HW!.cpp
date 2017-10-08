#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Student{
	string name;
	char gender;
	float grade;
	
public:
	string getName(){
		return this->name;
	}	
	char getGender(){
		return this->gender;
	}
	float getGrade(){
		return this->grade;
	}
	void setName(string name){
		this->name = name;
	}	
	void setGender(char gender){
		this->gender = gender;
	}
	void setGrade(float grade){
		this->grade = grade;
	}
};

class ListStudents{
	Student *listStudent;
	int amount;
	int size;
	string type;

public:	
	void setType(string type){
		this->type = type;
	}
	void setAmount(){
		this->amount = 0;
	}
	void setSize(int size){
		this->size = size;
	}
	void setList(int size){
		this->listStudent = new Student[size];
	}
	Student getByIndex(int index){
		return this->listStudent[index];
	}

	void add(Student student){
		this->listStudent[amount] = student;
		amount++;
	}
	string getType(){
		return this->type;
	}
	int getAmount(){
		return amount;
	}
	
	void sort(){
		for(int i = 0; i < amount-1;i++){
			for(int j = i+1 ; j < amount; j++){
				if(listStudent[i].getGrade() > listStudent[j].getGrade() ){
					Student temp;
					temp = listStudent[i];
					listStudent[i] = listStudent[j];
					listStudent[j] = temp;
				}
			}
		}
	}
};

main(){
	ifstream file("student.txt");
    string line;    
	stringstream linestream;
	int numberClass;
	getline(file, line);
   	linestream << line;   	
  	linestream >> numberClass;  
  	linestream.str("");
	linestream.clear(); 

	ListStudents listClass[numberClass];
	int numberStudents;
	string type;
	string name;
	char gender;
	float grade;
		
	for(int i= 0;i < numberClass;i++){
			getline(file, line);
		   	linestream << line;   	
		  	linestream >> type >> numberStudents;  
		  	linestream.str("");
			linestream.clear();
			listClass[i].setAmount();
			listClass[i].setSize(numberStudents);
			listClass[i].setList(numberStudents);
			listClass[i].setType(type);
			
			for(int j = 0 ; j < numberStudents ;j++){
				getline(file, line);
			   	linestream << line;   	
			  	linestream >> name >> gender >> grade;  
			  	linestream.str("");
				linestream.clear();
				Student stu;
				stu.setGender(gender);
				stu.setGrade(grade);
				stu.setName(name);
				listClass[i].add(stu);
			}
	}
	for(int i = 0 ;i < numberClass;i++){
		cout << listClass[i].getType() << " field has " << listClass[i].getAmount() << " member:\n";
		for(int j = 0; j < listClass[i].getAmount();j++){
			cout << listClass[i].getByIndex(j).getName();
			cout << " " << listClass[i].getByIndex(j).getGender();
			cout << " " <<  listClass[i].getByIndex(j).getGrade() << endl;
		}
	}
	cout << "===============================\n";
	cout << "       0,1,2,3,4 Swap Phase!\n";
	cout << "===============================\n";
	for(int i = 0 ; i < numberClass;i++){
		listClass[i].sort();
	}
	for(int i = 0 ;i < numberClass;i++){
		cout << listClass[i].getType() << " field has " << listClass[i].getAmount() << " member:\n";
		for(int j = 0; j < listClass[i].getAmount();j++){
			cout << listClass[i].getByIndex(j).getName();
			cout << " " << listClass[i].getByIndex(j).getGender();
			cout << " " <<  listClass[i].getByIndex(j).getGrade() << endl;
		}
	}
	cout << "===============================\n";
	cout << " 1,3,5,7,9 Select Gender Phase!\n";
	cout << "===============================\n";
	int numGender[numberClass];
	int number;
	for(int i = 0 ;i < numberClass;i++){
		number = 0;
		for(int j = 0; j < listClass[i].getAmount();j++){
			if(listClass[i].getByIndex(j).getGender() == 'M'){
				number++;
			}
		}
		numGender[i] = number;
	}
	for(int i = 0 ;i < numberClass;i++){
		cout << listClass[i].getType() << " field has " <<  numGender[i] << " member:\n";
		for(int j = 0; j < listClass[i].getAmount();j++){
			if(listClass[i].getByIndex(j).getGender() == 'M'){
				cout << listClass[i].getByIndex(j).getName();
				cout << " " << listClass[i].getByIndex(j).getGender();
				cout << " " <<  listClass[i].getByIndex(j).getGrade() << endl;
			}
		}
	}	
 }
