
#include<iostream>
using namespace std;
#include<vector>

class Train {

private:
    int train_no;
    string train_name;
    string source;
    string destination;
    string time;

    static int Traincount;

public:
    Train()
    {
        train_no = 0;
        train_name = "Not set";
        source = "Not set";
        destination = "Not set";
        time = "Not set";
        Traincount++;
    }

    Train(int no, string name, string src, string dest, string t)
    {
        train_no = no;
        train_name = name;
        source = src;
        destination = dest;
        time = t;
        Traincount++;
    }

    Train(const Train &t)
    {
        train_no = t.train_no;
        train_name = t.train_name;
        source = t.source;
        destination = t.destination;
        time = t.time;
        Traincount++;
    }

    ~Train()
    {
        Traincount--;
    }

    void TrainDetails()
    {
        cout << "Enter Train No: ";
        cin >> train_no;
        cin.ignore();

        cout << "Enter Train Name: ";
        getline(cin, train_name);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Time: ";
        getline(cin, time);
    }

    int getTrainNo() {
        return train_no;
    }

    void display()
    {
        cout << "Train No      : " << train_no << endl;
        cout << "Train Name    : " << train_name << endl;
        cout << "Source        : " << source << endl;
        cout << "Destination   : " << destination << endl;
        cout << "Time          : " << time << endl;
    }

    static int getCount()
    {
        return Traincount;
    }
};

int Train::Traincount = 0;

class RailwayReservationSystem
{
private:
    vector<Train> trains;

public:
    void addtrain()
    {
        Train t;
        t.TrainDetails();
        trains.push_back(t);

        cout << "Train Added Successfully!" << endl;
    }

    void displaytrains()
    {
        if(trains.empty())
        {
            cout << "No Trains Available!" << endl;
            return;
      }

        for(int i = 0; i < trains.size(); i++)
        {
            cout << "\nTrain " << i + 1 << endl;
            trains[i].display();
        }

        cout << "Total Trains : " << Train::getCount() << endl;
    }

    void SearchTrains(int train_no)
    {
        for(int i = 0; i < trains.size(); i++)
        {
            if(trains[i].getTrainNo() == train_no)
            {
                cout << "\nTrain Found!" << endl;
                trains[i].display();
                return;
            }
        }
        cout << "Train Not Found!" << endl;
    }
};

int main()
{
    RailwayReservationSystem RailwaySystem;

    int choice = 0, number;

    while (choice != 4)
    {
        cout << "1. Add Train" << endl;
        cout << "2. Display Trains" << endl;
        cout << "3. Search Train" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                RailwaySystem.addtrain();
                break;

            case 2:
                RailwaySystem.displaytrains();
                break;

            case 3:
                cout << "Enter Train No To Search: ";
                cin >> number;
                RailwaySystem.SearchTrains(number);
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}
    
    
    



