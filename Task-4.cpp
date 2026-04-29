#include <iostream>
#include<string>
using namespace std;

template <class T>
class TestScores
{
private:
    string participantName;
    T marks[10];

public:
    void input();
    void display();
    T totalMarks();
    float averageMarks();
    T highestMark();
    int FindMark(T value);
    void sortMarks();
};

template <class T>
void TestScores<T>::input()
{
    cout << "Enter Name: ";
    cin >> participantName;

    cout << "Enter 10 marks:\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<i+1<<". ";
        cin >>marks[i];
    }
}

template <class T>
void TestScores<T>::display()
{
    cout << "\nParticipant: " << participantName << endl;
    cout << "Marks: ";
    for (int i = 0; i < 10; i++)
    {
        cout<<i+1<<". ";
        cout << marks[i] << " ";
    }
    cout << endl;
}

template <class T>
T TestScores<T>::totalMarks()
{
    T total = 0;
    for (int i = 0; i < 10; i++)
    {
        total += marks[i];
    }
    return total;
}

template <class T>
float TestScores<T>::averageMarks()
{
    return totalMarks() / 10.0;
}

template <class T>
T TestScores<T>::highestMark()
{
    T highest = marks[0];
    for (int i = 1; i < 10; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}

template <class T>
int TestScores<T>::FindMark(T value)
{
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] == value)
        {
            return i;
        }
    }
    return -1;
}

template <class T>
void TestScores<T>::sortMarks()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (marks[i] > marks[j])
            {
                T temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    cout << "Sorted Marks: ";
    for (int i = 0; i < 10; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
}


int main()
{
    TestScores<int> p1, p2, p3; // int datatype
    TestScores<float> p4, p5;   // float datatype

    cout << "\nEnter Data for Participant 1 (int marks)\n";
    p1.input();

    cout << "\nEnter Data for Participant 2 (int marks)\n";
    p2.input();

    cout << "\nEnter Data for Participant 3 (int marks)\n";
    p3.input();

    cout << "\nEnter Data for Participant 4 (float marks)\n";
    p4.input();

    cout << "\nEnter Data for Participant 5 (float marks)\n";
    p5.input();

    
    TestScores<int>* intParticipants[3] = {&p1, &p2, &p3}; // arry object
    TestScores<float>* floatParticipants[2] = {&p4, &p5};

    // int participants
    for (int i = 0; i < 3; i++)
    {
        intParticipants[i]->display();
        cout << "Total: " << intParticipants[i]->totalMarks() << endl;
        cout << "Average: " << intParticipants[i]->averageMarks() << endl;
        cout << "Highest: " << intParticipants[i]->highestMark() << endl;

        int value;
        cout << "Enter value to find: ";
        cin >> value;

        int index = intParticipants[i]->FindMark(value);
        if (index != -1)
            cout << "Found at index: " << index << endl;
        else
            cout << "Not Found\n";

        intParticipants[i]->sortMarks();
        cout << endl;
    }

    // float participants
    for (int i = 0; i < 2; i++)
    {
        floatParticipants[i]->display();
        cout << "Total: " << floatParticipants[i]->totalMarks() << endl;
        cout << "Average: " << floatParticipants[i]->averageMarks() << endl;
        cout << "Highest: " << floatParticipants[i]->highestMark() << endl;

        float value;
        cout << "Enter value to find: ";
        cin >> value;

        int index = floatParticipants[i]->FindMark(value);
        if (index != -1)
            cout << "Found at index: " << index << endl;
        else
            cout << "Not Found\n";

        floatParticipants[i]->sortMarks();
        cout << endl;
    }

    return 0;
}
