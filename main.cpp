#include <bits/stdc++.h>
using namespace std;

void display(string name,long long regno);
void display(string name,long long regno,int subjects){
    cout << "The Following CGPA is Calculated and sent to the File..." << endl;
    // FILE;
    ofstream file("Student-CGPA-Report.txt");
    if(!file){
    cout << "File creation failed\n";
    return;
}
    file << "Name of the Student : " << name << endl;
    file << "Registeration number of the Student : " << regno << endl;

    string str[subjects];
    for(int i=0;i<subjects;i++){
        cout << "Enter the Name of Subject " << i+1 << endl;
        cin >> str[i];
    }
    int arr[subjects];
    for(int i=0;i<subjects;i++){
        cout << "Enter marks for subject " << i+1 << endl;
        cin >> arr[i];
    }
    cout << endl << endl;
    for(int i=0;i<subjects;i++){
        cout << "Subject : " << str[i] << "\t" << "Marks : " << arr[i] << endl;
        file << "Subject : " << str[i] << "\t" << "Marks : " << arr[i] << endl;
    }
    file.close();
}
int main(){
    cout << "Hello and Welcome to the Student-CGPA Calculator" << endl;
    cout << "Disclaimer this Software is Copyrighted by RamFlynn" << endl << endl;
    string name;
    cout << "Enter the Name of the Student : " << endl;
    getline(cin,name);
    long long regno;
    cout << "Enter the Registeration Number of the Student : " << endl;
    cin >> regno;
    cout << "Please keep in mind the Semester as this program does not calculate with respect to the semester number" << endl;
    int subjects;
    cout << "Enter the Number of Subjects";
    cin >> subjects;
    display(name,regno,subjects);
    return 0;
}