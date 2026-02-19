#include<iostream>
using namespace std;

int main()
{
    char repeat;

    do{
        cout<<"Student Quiz Average\n";

        int numstud, numquiz;

        cout<<"Enter Number of Student: ";
        cin>>numstud;
        cout<<"Enter Number of Quizzes: ";
        cin>>numquiz;

        int quiz[numstud][numquiz];

        for(int i = 0; i < numstud; i++){
            cout<<"\nStudent "<<(i + 1)<<":\n";
            for(int j = 0; j < numquiz; j++){
                cout<<"Enter Quiz "<<(j + 1)<<" score: ";
                cin>>quiz[i][j];
            }

        }

        cout<<"\n\nStudent\t";
        for(int j = 0; j < numquiz; j++){
            cout<<"\tQ"<<(j + 1);
        }
        
        cout<<"\tAverage\n";

        for(int i = 0; i < numquiz; i++){
            cout<<"------------";
        }
        cout<<endl;

        for(int i = 0; i < numstud; i++){
            cout<<"Student "<<(i + 1);

            double sum = 0;

            for(int j = 0; j < numquiz; j++){
                cout<<"\t"<<quiz[i][j];
                sum = sum + quiz[i][j];
            }

            double average = sum / numquiz;
            cout<<"\t"<<average << endl;
        }
        cout<<"Repeat? [y/n]: ";
        cin>>repeat;
    }while(repeat == 'y' || repeat == 'Y');
}