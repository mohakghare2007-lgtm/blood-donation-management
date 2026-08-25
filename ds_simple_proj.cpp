#include<iostream>
using namespace std;

int main()
{
    struct blood
    {
        int low = 0;
        int high =7;
        int mid ;
        int ID[100],n[100];
        string name[100];
        string place[100];
        string gender[100];
        int key[100];
    };
    
    blood sys; 

    sys.ID[0]=101;
    sys.name[0]="Ranjit";
    sys.gender[0]="Male";
    sys.place[0]="Mimer Hospital, Talegaon Dabhade";

    sys.ID[1]=102;
    sys.name[1]="Raj";
    sys.gender[1]="Male";
    sys.place[1]="Harneshwar Hospital, Talegaon Dabhade";

    sys.ID[2]=103;
    sys.name[2]="Rajat";
    sys.gender[2]="Male";
    sys.place[2]="Symboysis Hospital, Pune";

    sys.ID[3]=104;
    sys.name[3]="Jit";
    sys.gender[3]="Male";
    sys.place[3]="Modern Hospital, Pune";
    
    sys.ID[4]=105;
    sys.name[4]="Ajit";
    sys.gender[4]="Male";
    sys.place[4]="D. Y. Patil Hospital, Kolhapur";

    sys.ID[5]=106;
    sys.name[5]="Rajesh";
    sys.gender[5]="Male";
    sys.place[5]="Wadiah Hospital, Pune";

    sys.ID[6]=107;
    sys.name[6]="Nandini";
    sys.gender[6]="Female";
    sys.place[6]="D. Y. Patil Hospital, Pune";

    sys.ID[7]=108;
    sys.name[7]="Raksha";
    sys.gender[7]="Female";
    sys.place[7]="Sasoon Hospital, Pune";

    cin>>sys.key[0];

    while(sys.low <= sys.high)
    {
        sys.mid =  sys.low + (sys.high-sys.low)/2;
        if (sys.key[0] == sys.ID[sys.mid])
        {
                cout << "\nID: " << sys.ID[sys.mid];
                cout << "\nName: " << sys.name[sys.mid];
                cout << "\nGender: " << sys.gender[sys.mid];
                cout << "\nPlace: " << sys.place[sys.mid];

                return 0;
        } else {
            if(sys.key[0] > sys.ID[sys.mid])
            {
                sys.low=sys.mid + 1;
            } else {
                sys.high=sys.mid-1;
            }
        }
    }
    cout << "There is no history";
    return 0;
}