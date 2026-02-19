#include<iostream>
using namespace std;

int main()
{
    char repeat;

    do{
        cout<<"Monthly Sales Summary";

        double sales[5][4] = {0}; //array for sale(5 for product and 4 for salespeople);

        char add;

        do{
            int salesperson, product;
            double amount;

            cout<<"\nEnter Salesperson Number [1-4]: ";
            cin>>salesperson;

            while(salesperson < 1 || salesperson > 4){
                cout<<"Invalid! Enter Salesperson Number [1-4]: ";
                cin>>salesperson;
            }

            cout<<"Enter Product Number [1-5]: ";
            cin>>product;

            while(product < 1 || product > 5){
                cout<<"Invalid! Enter Product Number [1-5]: ";
                cin>>product;
            }

            cout<<"Enter Amount: ";
            cin>>amount;

            sales[product - 1][salesperson - 1] = sales[product - 1][salesperson - 1] + amount;

            cout<<"Add Another Sale? [y/n]: ";
            cin>>add;
        }while (add == 'y' || add == 'Y');
        cout<<"\n\t\t\t\t[Sales Person]";
        cout<<"\nProduct\t\t";
        for(int j = 1; j <= 4; j++){
            cout<<j<<"\t\t";
        }cout<<"Total\n";

        for(int i = 0; i < 7; i++){
            cout<<"--------------";
        }cout<<endl;

        double totaltotal = 0;

        for(int i = 0; i < 5; i++){
            cout<<"Product "<<(i + 1)<<"\t";

            double totalproduct = 0;

            for(int j = 0; j < 4; j++){
                cout<<sales[i][j]<<"\t\t";
                totalproduct = totalproduct + sales[i][j];
            }
            cout<<totalproduct <<endl;
            totaltotal = totaltotal + totalproduct;
        }

        for(int i = 0; i < 7; i++){
            cout<<"--------------";
        }cout<<endl;

        cout<<"Total\t\t";
        double totalsalesperson = 0;

        for(int j = 0; j < 4; j++){
            totalsalesperson = 0;
            for(int i = 0; i < 5; i++){
                totalsalesperson = totalsalesperson = sales[i][j];
            }cout<<totalsalesperson <<"\t\t";
        }
        cout<<totaltotal<<endl;

        cout<<"\nRepeat? [y/n]: ";
        cin>>repeat;
    }while(repeat == 'y' || repeat == 'Y');
}