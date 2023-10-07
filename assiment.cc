#include<iostream>
using namespace std;

class LectureDetails 
{
	private:
		string lecturerName;
		string subjectName;
		string courseName;
		int numOfLectures;
		
	public:
		
		LectureDetails() : numOfLectures(0){}
		
		void assignIntialValues(string lecturer, string subject, string course)
		{
			lecturerName = lecturer;
			subjectName = subject;
			courseName = course;
			
		}
		
		void displayDetails()
		{
			cout << "Lecturer Name:" <<lecturerName <<endl;
			cout << "Subject Name:" <<subjectName <<endl;
			cout << "Course Name:" <<courseName <<endl;
			cout << "Number of Lectures:" <<numOfLectures <<endl;
		}
};

int main()
{
	LectureDetails lecturers[5];
	
	for (int i=0; i<5; ++i)
	{
		string lecturer, subject, course;
		int lectures;
		
		cout << "enter lecturer's name:";
		cin >>lecturer;
		
		cout << "enter subject name:";
		cin >>subject;
		
		cout << "enter course name:";
		cin >>course;
		 
		cout << "enter number of lectures:";
		cin >>lectures;
		
		lecturers[i].assignIntialValues(lecturer, subject, course);
		lecturers[i].addLecturerDetails(lectures);
	}
	
	for (inti=0; i<5; ++i)
	{
		cout << "Lecturer"<<i+1<<"Details:"<<endl;
		lecturers[i].displayDetails();
		cout <<endl;
	}
	
	return;
}
