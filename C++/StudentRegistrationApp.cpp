#include <iostream>

using namespace std;

class Student {
	
private:
	
	int id;
	string name;
	string surname;
	int age;
	string lecture;
	int grade;
	
public:
	
	Student()
	{
	}		
	
	void setID(int id) {this->id = id;}
	void setName(string name) {this->name = name;}
	void setSurname(string surname) {this->surname = surname;}
	void setAge(int age) {this->age = age;}
	void setLecture(string lecture) {this->lecture = lecture;}
	void setGrade(int grade) {this->grade = grade;}
	
	int getID(){ return id;}
	string getName(){ return name;}
	string getSurname(){ return surname;}
	int getAge(){ return age;}
	string getLecture(){ return lecture;}
	int getGrade(){ return grade;}

	void list(Student []);
	
};

void Student::list(Student stu[] )
{
	for(int i = 0; i<3;i++)
	{
		cout << "The " << i+1 << ". student information: " << endl;
		cout << "ID	: " 		<< stu[i].getID() << endl; 
		cout << "Name	: " 	<< stu[i].getName() << endl; 
		cout << "Surname	: " << stu[i].getSurname() << endl; 
		cout << "Age	: " 	<< stu[i].getAge() << endl; 
		cout << "Lecture	: " << stu[i].getLecture() << endl; 
		cout << "Grade	: " 	<< stu[i].getGrade() << endl; 
	}
	
	cout << "Student infos has updated." << endl;
}

void sortingByName(Student stu[])
{
	system("cls");
	
	Student temp;
	for(int i = 0; i<3;i++)
	{
		for(int j = 0; j<2; j++)
		{
			if(stu[j].getName().compare(stu[j+1].getName()) > 0)
			{
				temp = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = temp;
			}
		}
	}
	
	cout << "The list has sorted." << endl;
	
	for(int i = 0; i<3;i++)
	{
		cout << "The " << i+1 	<< ". student information: " << endl;
		cout << "ID	: " 		<< stu[i].getID() << endl; 
		cout << "Name	: " 	<< stu[i].getName() << endl; 
		cout << "Surname	: " << stu[i].getSurname() << endl; 
		cout << "Age	: " 	<< stu[i].getAge() << endl; 
		cout << "Lecture	: " << stu[i].getLecture() << endl; 
		cout << "Grade	: " 	<< stu[i].getGrade() << endl; 
	}
}

void searchByName(Student stu[])
{
	bool result = false;
	string name;
	cout << "Enter the name of the student you are searching for: "; cin>>name;
	Student temp;

	
	for(int i = 0; i<3; i++)
	{
		if(stu[i].getName().compare(name) == 0)
		{
			temp = stu[i];
			result = true;
			break;
		}

	}
	
	if(result)
	{
		cout << "The information of the student you are searching with the name " << name << ": " << endl;	
		cout << "ID	: " 		<< temp.getID() << endl; 
		cout << "Name	: " 	<< temp.getName() << endl; 
		cout << "Surname	: " << temp.getSurname() << endl; 
		cout << "Age	: " 	<< temp.getAge() << endl; 
		cout << "Lecture	: " << temp.getLecture() << endl; 
		cout << "Grade	: " 	<< temp.getGrade() << endl; 
	}
	else
	{
		cout << "There is no student with the name of " << name << endl;
	}
	
		
	cout << endl;
		
}

void highestGrade(Student stu[])
{

	int grade=0;
	Student temp;

	
	for(int i = 0; i<3; i++)
	{
		if(grade < stu[i].getGrade())
		{
			temp = stu[i];
			grade = stu[i].getGrade();
		}

	}
	
	cout << "Information of the student with the highest average: " << endl;
	cout << "ID	: " 		<< temp.getID() << endl; 
	cout << "Name	: " 	<< temp.getName() << endl; 
	cout << "Surname	: " << temp.getSurname() << endl; 
	cout << "Age	: " 	<< temp.getAge() << endl; 
	cout << "Lecture	: " << temp.getLecture() << endl; 
	cout << "Grade	: " 	<< temp.getGrade() << endl; 
		
	cout << endl;
		
}

int main() {
	
	Student stu[3];
	
	int id;
	string name;
	string surname;
	int age;
	string lecture;
	int grade;
	
	for(int i = 0; i<3;i++)
	{
		cout << "Enter the " << i+1 << ". student informations: " << endl;
		cout << "ID	: "; 			cin>>id;
		cout << "Name	: "; 		cin>>name;
		cout << "Surname	: ";	cin>>surname;
		cout << "Age	: "; 		cin>>age;
		cout << "Lecture	: "; 	cin>>lecture;
		cout << "Grade	: "; 		cin>>grade;
		
		stu[i].setID(id);
		stu[i].setName(name);
		stu[i].setSurname(surname);
		stu[i].setAge(age);
		stu[i].setLecture(lecture);
		stu[i].setGrade(grade);
	}
	
	cout << "Student registration has completed" << endl;
	cout << "The entered information is listed." << endl;
	
	stu[0].list(stu);
	
	cout << endl;
	
	sortingByName(stu);
	
	cout << endl;
	
	searchByName(stu);
	
	cout << endl;
	
	highestGrade(stu);
	
	
	return 0;
}
