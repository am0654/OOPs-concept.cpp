#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}


Input:
Enter information of students:
For roll number1
Enter name: Kiara
Enter marks: 85

Enter information of students:
For roll number2
Enter name: Sid
Enter marks: 99

Enter information of students:
For roll number3
Enter name: Alia
Enter marks: 85

Enter information of students:
For roll number4
Enter name: Kriti
Enter marks: 83

Enter information of students:
For roll number5
Enter name: Priyanka
Enter marks: 84

Enter information of students:
For roll number6
Enter name: Pari
Enter marks: 90

Enter information of students:
For roll number7
Enter name: Vani
Enter marks: 90

Enter information of students:
For roll number8
Enter name: Arjun
Enter marks: 95

Enter information of students:
For roll number9
Enter name: Kartik
Enter marks: 92

Enter information of students:
For roll number10
Enter name: Varun
Enter marks: 98

Output:
Displaying Information: 

Roll number: 1
Name: Kiara
Marks: 85

Roll number: 2
Name: Sid
Marks: 99

Roll number: 3
Name: Alia
Marks: 85

Roll number: 4
Name: Kriti
Marks: 83

Roll number: 5
Name: Priyanka
Marks: 84

Roll number: 6
Name: Pari
Marks: 90

Roll number: 7
Name: Vani
Marks: 90

Roll number: 8
Name: Arjun
Marks: 95

Roll number: 9
Name: Kartik
Marks: 92

Roll number: 10
Name: Varun
Marks: 98

