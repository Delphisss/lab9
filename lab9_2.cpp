#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double x){
	char g ;
	if (x > 90)
		g = 'A';
	else if(x > 75)
		g = 'B';
	else if(x > 60)
		g = 'C';
	else if(x > 45)
		g = 'D';
	else if(x <= 45)
		g = 'F';
	return g;
}

int main(){
	//ถามหาจำนวนนักเรียน
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//ถามหาชื่อและคะแนน
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//แสดงชื่อ คะแนน เกรด
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}


//setw(ระยะห่างจากจอซ้ายสุดของเทอมินอล)
//                     Name   Score   Grade
//12345678901234567890123451234567812345678
// ตัวสุดท้ายของตัวหนังสือจะตรงกับตัวเลขสูงสุดใน(_) ของ setw(_)

//Kong >w<