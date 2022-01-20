#include <iostream>

using namespace std;

struct Marks
{
    int stud_id;
    string name;
    double chem_marks;
    double maths_marks;
    double phy_marks;
};

int main() {

    Marks m[3];

    for(int i=0; i<=2; i++)
    {
        cout << endl << "Enter name : ";
        cin.clear();
        cin.sync();
        getline(cin,m[i].name);

        cout << "Enter ID : ";
        cin >> m[i].stud_id;

        cout << "Chemistry Mark : ";
        cin >> m[i].chem_marks;

        cout << "Mathematics Mark : ";
        cin >> m[i].maths_marks;

        cout << "Physics Mark : ";
        cin >> m[i].phy_marks;

        m[i].chem_marks = (m[i].chem_marks/80) * 100;
        m[i].maths_marks = (m[i].maths_marks/80) * 100;
        m[i].phy_marks = (m[i].phy_marks/80) * 100;

    }


    for(int i=0; i<=2; i++)
    {
        cout << endl << m[i].name << " " << m[i].stud_id;
        cout << endl << "-----------------------------------" << endl;
        cout << "Chemistry : " << m[i].chem_marks << "%" << endl;
        cout << "Mathematics : " << m[i].maths_marks<< "%" << endl;
        cout << "Physics : " << m[i].phy_marks<< "%" << endl << endl;
    }

    return 0;
}
