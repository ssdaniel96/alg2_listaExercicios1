#include <iostream>
#include <vector>
#include <string>

struct grades{
	float grade[2];
};

using namespace std;

float doQuestion(bool firstGrade, int counter){
	float value = 0;
	string ordinario;
	firstGrade ? ordinario = "primeira" : ordinario = "segunda";

	do {
		if (value != 0) cout << "Valor incorreto (deve ser entre 0 a 10)" <<endl;
		cout << "Digite o valor da " << ordinario <<" nota do " << counter << ".st aluno: "<<endl;
		cin >> value;
	}
	while((value < 0 || value > 10) && (value != 50 && firstGrade || !firstGrade));
}

struct vector<grades> doQuestions(){
	struct vector<grades> studentGrades;
	bool cond = true;
	int counter = 1;
	while(cond) {
		struct grades grade;
		for (int i=0; i < 2; i++){
			float value =  doQuestion(i == 0, counter);
			if (i == 0 && value == 50){
				cond = false;
				break;
			}
			grade.grade[i] = value;
		}
		if (cond){ studentGrades.push_back(grade); }
		counter++;
		cout << endl;
	}

	return studentGrades;
}

void printVector(vector<grades> studentGrades){
	cout << "Gostei tanto de aprender sobre os vectores que vou imprimir todas as notas por aluno!" << endl;
	int size = studentGrades.size();
	for(int i = 0; i < size; i++){
		cout << "=============" << i+1 <<".st aluno =========="<<endl;
		for(int j=0; j<2;j++){
			cout << "Nota " << j << ": " << studentGrades[i].grade[j] << endl;
		}

	}
	cout << "=================== FIM ================" << endl;
}

int main(int argc, char *argv[])
{
	struct vector<grades> grades = doQuestions();
	cout << "Finalizado" << endl;
	printVector(grades);
}

