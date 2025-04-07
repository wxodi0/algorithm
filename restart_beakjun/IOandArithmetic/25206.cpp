#include <iostream>
#include <string>
using namespace std;

int main() {
  string sub, grade;
  float allScore = 0, allGrade = 0, score, gradeScore;

  for(int i = 0; i < 20; i++) {
    cin >> sub >> score >> grade;

    if(grade == "A+") {
      gradeScore = 4.5;
    } else if(grade == "A0") {
      gradeScore = 4.0;
    } else if(grade == "B+") {
      gradeScore = 3.5;
    } else if(grade == "B0") {
      gradeScore = 3.0;
    } else if(grade == "C+") {
      gradeScore = 2.5;
    } else if(grade == "C0") {
      gradeScore = 2.0;
    } else if(grade == "D+") {
      gradeScore = 1.5;
    } else if(grade == "D0") {
      gradeScore = 1.0;
    } else if(grade == "P") {
      continue;
    } else {
      gradeScore = 0;
    }
    allScore += score;

    allGrade += score * gradeScore;
  }

  cout << allGrade/allScore;
}

//score = 학점 | grade = 과목평점