#include<iostream>
using namespace std;

int main()
{
    struct blood
    {
        int low = 0;
        int high =22;
        int mid ;
        int ID[100],n[100];
        string date[100];
        string bloodgrp[100];
        string name[100];
        string place[100];
        string gender[100];
        int key[100];
    };
    
    blood sys; 

    sys.ID[0]=101;
    sys.name[0]="Ranjit";
    sys.date[0]="10-07-2026";
    sys.gender[0]="Male";
    sys.bloodgrp[0]="AB +ve";
    sys.place[0]="Mimer Hospital, Talegaon Dabhade";

    sys.ID[1]=102;
    sys.name[1]="Raj";
    sys.date[1]="10-10-2026";
    sys.gender[1]="Male";
    sys.bloodgrp[1]="O +ve";
    sys.place[1]="Harneshwar Hospital, Talegaon Dabhade";

    sys.ID[2]=103;
    sys.name[2]="Rajat";
    sys.date[2]="30-03-2026";
    sys.gender[2]="Male";
    sys.bloodgrp[2]="AB +ve";
    sys.place[2]="Symboysis Hospital, Pune";

    sys.ID[3]=104;
    sys.name[3]="Jit";
    sys.date[3]="01-01-2026";
    sys.gender[3]="Male";
    sys.bloodgrp[3]="O +ve";
    sys.place[3]="Modern Hospital, Pune";
    
    sys.ID[4]=105;
    sys.name[4]="Ajinkya";
    sys.date[4]="12-04-2024";
    sys.gender[4]="Male";
    sys.bloodgrp[4]="A +ve";
    sys.place[4]="D. Y10 Patil Hospital, Kolhapur";

    sys.ID[5]=106;
    sys.name[5]="Rajesh";
    sys.date[5]="08-08-2026";
    sys.gender[5]="Male";
    sys.bloodgrp[5]="O +ve";
    sys.place[5]="Wadiah Hospital, Pune";

    sys.ID[6]=107;
    sys.name[6]="Nandini";
    sys.gender[6]="Female";
    sys.bloodgrp[6]="A +ve";
    sys.date[6]="13-02-2025";
    sys.place[6]="D. Y. Patil Hospital, Pune";

    sys.ID[7]=108;
    sys.name[7]="Raksha";
    sys.date[7]="24-04-2025";
    sys.gender[7]="Female";
    sys.bloodgrp[7]="A -ve";
    sys.place[7]="Sasoon Hospital, Pune";
    
    sys.ID[8]=109;
    sys.name[8]="Aakash";
    sys.date[8]="04-04-2026";
    sys.gender[8]="Male";
    sys.bloodgrp[8]="AB -ve";
    sys.place[8]="Kokilaben Dhirubhai Ambani Hospital, Mumbai";

    sys.ID[9]=110;
    sys.name[9]="Snehal";
    sys.date[9]="16-04-2026";
    sys.gender[9]="Female";
    sys.bloodgrp[9]="A +ve";
    sys.place[9]="KEM Hospital, Mumbai";

    sys.ID[10]=111;
    sys.name[10]="Vivek";
    sys.date[10]="29-04-2026";
    sys.gender[10]="Male";
    sys.bloodgrp[10]="A +ve";
    sys.place[10]="Civil Hospital, Nashik";

    sys.ID[11]=112;
    sys.name[11]="Prachi";
    sys.date[11]="10-05-2026";
    sys.gender[11]="Female";
    sys.bloodgrp[11]="B +ve";
    sys.place[11]="District Hospital, Satara";

    sys.ID[12]=113;
    sys.name[12]="Soham";
    sys.date[12]="22-05-2026";
    sys.gender[12]="Male";
    sys.bloodgrp[12]="O +ve";
    sys.place[12]="Government Medical College, Nagpur";

    sys.ID[13]=114;
    sys.name[13]="Megha";
    sys.date[13]="03-06-2026";
    sys.gender[13]="Female";
    sys.bloodgrp[13]="AB +ve";
    sys.place[13]="Civil Hospital, Ahmednagar";

    sys.ID[14]=115;
    sys.name[14]="Kunal";
    sys.date[14]="14-06-2026";
    sys.gender[14]="Male";
    sys.bloodgrp[14]="A +ve";
    sys.place[14]="District Hospital, Solapur";

    sys.ID[15]=116;
    sys.name[15]="Riya";
    sys.date[15]="26-06-2026";
    sys.gender[15]="Female";
    sys.bloodgrp[15]="O -ve";
    sys.place[15]="Government Hospital, Aurangabad";

    sys.ID[16]=117;
    sys.name[16]="Nikhil";
    sys.date[16]="07-07-2026";
    sys.gender[16]="Male";
    sys.bloodgrp[16]="A +ve";
    sys.place[16]="Civil Hospital, Kolhapur";

    sys.ID[17]=118;
    sys.name[17]="Isha";
    sys.date[17]="18-07-2026";
    sys.gender[17]="Female";
    sys.bloodgrp[17]="AB -ve";
    sys.place[17]="District Hospital, Sangli";

    sys.ID[18]=119;
    sys.name[18]="Harsh";
    sys.date[18]="29-07-2026";
    sys.gender[18]="Male";
    sys.bloodgrp[18]="AB +ve";
    sys.place[18]="Government Hospital, Jalgaon";

    sys.ID[19]=120;
    sys.name[19]="Tanvi";
    sys.date[19]="12-08-2026";
    sys.gender[19]="Female";
    sys.bloodgrp[19]="A -ve";
    sys.place[19]="District Hospital, Amravati";

    sys.ID[20]=121;
    sys.name[20]="Omkar";
    sys.date[20]="20-08-2026";
    sys.gender[20]="Male";
    sys.bloodgrp[20]="A +ve";
    sys.place[20]="Civil Hospital, Nanded";

    sys.ID[21]=122;
    sys.name[21]="Simran";
    sys.date[21]="23-08-2026";
    sys.gender[21]="Female";
    sys.bloodgrp[21]="B +ve";
    sys.place[21]="District Hospital, Ratnagiri";

    sys.ID[22]=123;
    sys.name[22]="Aditya";
    sys.date[22]="25-08-2026";
    sys.gender[22]="Male";
    sys.bloodgrp[22]="O +ve";
    sys.place[22]="Government Hospital, Latur";
    
    cin>>sys.key[0];

    while(sys.low <= sys.high)
    {
        sys.mid =  sys.low + (sys.high-sys.low)/2;
        if (sys.key[0] == sys.ID[sys.mid])
        {
                cout << "\nID: " << sys.ID[sys.mid];
                cout << "\nName: " << sys.name[sys.mid];
                cout << "\nDate: " << sys.date[sys.mid];            
                cout << "\nGender: " << sys.gender[sys.mid];
                cout << "\nBlood Group: " << sys.bloodgrp[sys.mid];                
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
class Node
{
    public:
        int ID[100],n[100];
        string date[100];
        string bloodgrp[100];
        string name[100];
        string place[100];
        string gender[100];
        Node*next;
        Node(int value)
        {
            ID[100]=value;
            next = NULL;
        }
};
class donor
{
    Node* head;
    donor()
    {
        head = NULL;
    }
    void insert(int value)
    {
        Node* n1 = new Node(value);
        if(head==NULL)
        {
            head = n1;
            return;
        }
    }
};
    return 0;
}
