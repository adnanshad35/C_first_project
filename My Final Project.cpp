//Adnan'n First Project.



#include<bits/stdc++.h>
#include<stdio.h>
#include<windows.h>
#include<fstream>
#include<cstdio>
using namespace std;
typedef long long ll;
typedef string s;



//function I used here for the project

void welcome(),structure(),about(),others(),travel(),reserve(),air(),bus(),train(),
     bye_thanks(),payment(),nego(),change_mind(),vehical(),car_reserve(),bus_reserve(),
     passboss(),newfeature(),rating();



// Welcome function

void welcome()
{
    system("CLS");
    cout<<"\n\n\n\t\t\t\t\t\t  WELCOME TO BACKSPACE\n\n";
    char ch=178;
    for(int z=0; z<120; z++)
    {
        cout<<ch;
    }

    cout<<"\n\n\n\t\t\t\t\t\tHow can I help you, Sir ??\n";
    cout<<"\n\t\t\t\t\t\t\t1.Travel\n";
    cout<<"\n\t\t\t\t\t\t\t2.About Us\n";
    cout<<"\n\t\t\t\t\t\t\t3.Others\n\n";
    cout<<"\n\n\t\t\t\t\t\tChoose Any of our service:  ";
    ll op;
    cin>>op;
    if(op == 1) travel();
    if(op == 2) about();
    if(op == 3) others();
}


//Welcome page, First content

void travel()
{
    string okay;
    int option;

    system("CLS");
    cout<<"\n\n\n\n\t\t\t\t\t\tYou have to register first!"<<endl;
    cout<<"\n\t\t\t\t\t\tPlease press ""ok"" to continue:";
    cin>>okay;
    if(okay=="ok")
        structure();
    else
        travel();
    cout<<"\n\n\t\t\t\t\tWhat are you want??\n\n";
    cout<<"\n\t\t\t\t\t\t1. Individual Ticket\n";
    cout<<"\n\t\t\t\t\t\t2. Reserve a vehicle\n";
    cout<<"\n\t\t\t\t\t\t3. Back\n";
    cout<<"\n\n\t\t\t\t\tChoose Any of our service:  ";
    cin>>option;
    if(option== 1) vehical();
    if(option== 2) reserve();
    if(option== 3) welcome();

}


//Structure Function (Log in page)
//Here I used struct too.

struct login
{
    string name,pass,number;
};

void structure()
{
    system("CLS");
    cout<<"\n\n\n\t\t\t\t\t\tWELCOME TO REGISTRATION PAGE\n"<<endl;
    char ch=178;
    for(int z=0; z<120; z++)
        cout<<ch;

    struct login reg;
    string number,pass;
    int i,p,k,x,verify,passlen,up=0,down=0,digit=0,special=0;

    cout<<"\n\n\n\t\t\t\t\t\tEnter Username: ";
    cin>>reg.name;
    cout<<"\n\n\t\t\t\t\t\tEnter Phone Number:";
    cin>>reg.number;
    int numlen=reg.number.size();
    cout<<"\n\n\t\t\t\t\t\tEnter Password:";
    cin>>reg.pass;
    passlen= reg.pass.size();
    string q=reg.pass;

    for(k=0; k<passlen; k++)
    {
        if(q[k]>='a' && q[k]<='z')
            down++;
        else if(q[k]>='A' && q[k]<='Z')
            up++;
        else if(q[k]>='0' && q[k]<='9')
            digit++;
        else
            special++;
    }

    int cnt=0;
    string adnan=reg.number;
    for(int i=0; i<numlen; i++)
    {
        if(adnan[i]>='0' && adnan[i]<='9')
            cnt++;
    }

    if(numlen!=11 || (cnt!=11) || adnan[0]!='0' || adnan[1]!='1' )
    {
        system("CLS");
        cout<<"\n\n\t\t\t\t"<<reg.number<<" is a invalid number.Please Enter a valid Number."<<endl;
        cout<<"\n\n\n\t\t\t\t\t\tLets Try Again.\n";
        cout<<"\n\n\t\t\t\t\t\t1.Okay\n";
        cout<<"\n\n\t\t\t\t\t\t2.Back\n";
        cout<<"\n\n\t\t\t\t\t\tChoice: ";
        cin>>x;
        if(x==1)
            structure();
        else
            travel();
    }

    if((passlen<5) || ( digit<1) || (up<1) || (down<1) || (special<1))
    {
        passboss();
    }



    else
    {
        int otp= rand();
        system("CLS");
        cout<<"\n\n\t\t\t\t\t\tPlease Verify Your Number\n"<<endl;
        char ch=178;
        for(int z=0; z<120; z++)
        {
            cout<<ch;
        }
        cout<<"\n\n\n\n\t\t\\t\t\t\t\tYour Verification code is :"<<otp;
        cout<<"\n\n\n\t\t\t\t\t\tPlease press your OTP: ";
        cin>>verify;
        system("CLS");

        if(otp==verify)
        {
            cout<<"\n\n\n\n\n\t\t\t\t\t"<<reg.name<<", Welcome. Registration Completed! "<<"\n\n\n\n\t\t\t\t\t\tLog in?"<<endl;
            cout<<"\n\n\t\t\t\t\t\t\t1.YES"<<endl;
            cout<<"\n\t\t\t\t\t\t\t2.NO\n\n\t\t\t\t\t\tYour choice:";
            cin>>p;
            if(p==1)
            {
                system("CLS");
                cout<<"\n\n\n\n\t\t\t\t\t\tLOG IN PAGE...\n"<<endl;

                for(int z=0; z<120; z++)
                    cout<<ch;
                cout<<"\n\n\n\t\t\t\t\t\tNumber:";
                cin>>number;
                cout<<"\n\n\t\t\t\t\t\tPassword:";
                cin>>pass;
                system("CLS");
                if(number==reg.number && pass==reg.pass )
                {
                    cout<<"\n\n\t\t\t\t\t____LOG IN SUCCESSFUL___\n\n\n\n"<<endl;

                  }

                else
                {
                    system("CLS");


                    cout<<"\n\n\t\t\t\t\tSomething went wrong. "<<endl;
                    cout<<"\n\n\n\t\t\t\t\t\tLets Try Again.\n";
                    cout<<"\n\n\t\t\t\t\t\t1.Okay\n";
                    cout<<"\n\n\t\t\t\t\t\t2.Back\n";
                    cout<<"\n\n\n\t\t\t\t\t\tChoice: ";
                    cin>>x;
                    if(x==1)
                        structure();
                    else
                        travel();

                }
            }
            else
                welcome();
        }
        else
        {
            int w;
            system("CLS");

            cout<<"\n\n\n\t\t\t\tWrong OTP. Please Try Again.\n";
            cout<<"\n\n\t\t\t\t1.Okay\n";
            cout<<"\n\n\t\t\t\t2.Back\n";
            cout<<"\n\n\t\t\t\tChoice: ";
            cin>>w;
            if(w==1)
                structure();
            else
                travel();
        }
    }

}
//Checking for a strong password

void passboss()
{

    system("CLS");
    int x;
    cout<<"\n\n\t\tYour Password should be more stronger.Your Password must have:\n";
    cout<<"\n\n\t\t\t\t*More than 4 character in length.\n";
    cout<<"\n\t\t\t\t*One digit.\n";
    cout<<"\n\t\t\t\t*One Upercase Character.\n";
    cout<<"\n\t\t\t\t*One Lowercase Character.\n";
    cout<<"\n\t\t\t\t*One special Character.\n";
    cout<<"\n\n\n\t\t\t\tSo Lets Try Again.\n";
    cout<<"\n\n\t\t\t\t1.Okay\n";
    cout<<"\t\t\t\t2.No\n";
    cout<<"\n\n\t\t\t\tChoice: ";
    cin>>x;
    if(x==1)
        structure();
    else
        travel();

}


//OKAY LOG IN SUCCESSFUL






//If Choice is Individual Ticket;

void vehical()
{
    int p;
    system("CLS");
    cout<<"\n\n\n\t\t\t\t\tYou can travel by: \n";
    cout<<"\n\\n\n\t\t\t\t\t1.Air\n";
    cout<<"\n\t\t\t\t\t2.Bus\n";
    cout<<"\n\t\t\t\t\t3.Train\n";
    cout<<"\n\n\n\t\t\t\t\tChoose Any :  ";
    cin>>p;
    if(p == 1) air();
    if(p == 2) bus();
    if(p == 3) train();
}

//Air indiv.


void air()
{
    int p,x;
    double t;
    system("CLS");

    cout<<"\n\t\t\tNB: For your kind information, Air ticket cost will be (BDT 20.00 TK/KM)"<<endl;
    cout<<"\n\n\t\t\t\tThere are three route by air. So where to go?\n "<<endl;
    cout<<"\n\t\t\t\t Route\t\tFrom\t\tTo\t\tDistance \n";
    cout<<"\t\t\t\t--------------------------------------------------------\n\n";

    cout<<"\n\t\t\t\tRoute 1.\tSylhet\t\tDhaka   \t(233KM)\n";
    cout<<"\n\t\t\t\tRoute 2.\tSylhet\t\tRajshahi\t(447 KM)\n";
    cout<<"\n\t\t\t\tRoute 3.\tSylhet\t\tChottogram\t(350 KM)\n\n";
    cout<<"\n\t\t\t\tSelect Route: ";
    cin>>p;
    if(p==1) t=233;
    if(p==2) t=447;
    if(p==3) t=350;
    system("CLS");
    cout<<"\n\n\n\t\t\t\tTicket price :\tBDT\t"<<t*20.00<<" Taka\n";
    cout<<"\n\t\t\t\tNational Vat :\tBDT\t100.00 Taka\n";
    cout<<"\t\t\t\t-----------------------------------------------------\n\n";
    cout<<"\t\t\t\tTotal Payment:\tBDT\t"<<(t*20.00)+100<<" Taka\n";
    cout<<"\n\n\n\t\t\t\tWant to complete Payment?\n";
    cout<<"\n\t\t\t\t1.Yes\n";
    cout<<"\n\t\t\t\t2.Back\n";
    cout<<"\n\t\t\t\tSelect One: ";
    cin>>x;
    if(x==1)payment();
    if(x==2)vehical();
}


//Bus indiv.



void bus()
{
    int p,x;
    double t;
    system("CLS");

    cout<<"\n\t\t\tNB: For your kind information,Bus ticket cost will be BDT 2.25 TK/KM"<<endl;
    cout<<"\n\n\t\t\t\tThere are three route by Bus. So where to go?\n "<<endl;
    cout<<"\n\t\t\t\t Route\t\tFrom\t\tTo\t\tDistance \n";
    cout<<"\t\t\t\t--------------------------------------------------------\n\n";

    cout<<"\n\t\t\t\tRoute 1.\tSylhet\t\tDhaka   \t(233KM)\n";
    cout<<"\n\t\t\t\tRoute 2.\tSylhet\t\tRajshahi\t(447 KM)\n";
    cout<<"\n\t\t\t\tRoute 3.\tSylhet\t\tChottogram\t(350 KM)\n\n";
    cout<<"\n\t\t\t\tSelect Route: ";
    cin>>p;
    if(p==1) t=233;
    if(p==2) t=447;
    if(p==3) t=350;
    system("CLS");
    cout<<"\n\n\n\t\t\t\tTicket price :\tBDT\t"<<(t*2.25)<<" Taka\n";
    cout<<"\n\t\t\t\tNational Vat :\tBDT\t 10 Taka\n\n";
    cout<<"\t\t\t\t--------------------------------------------------------\n\n";
    cout<<"\t\t\t\tTotal Payment:\tBDT\t"<<(t*2.25)+15<<" Taka\n";
    cout<<"\n\n\n\t\t\t\tWant to complete Payment?\n";
    cout<<"\n\t\t\t\t1.Yes\n";
    cout<<"\n\t\t\t\t2.Back\n";
    cout<<"\n\t\t\t\tSelect One: ";
    cin>>x;
    if(x==1)payment();
    if(x==2)vehical();
}



//train indiv.



void train()
{
    int p,x;
    double t;
    system("CLS");

    cout<<"\n\t\t\tNB: For your kind information,Train ticket cost will be BDT 1.50 TK/KM"<<endl;
    cout<<"\n\n\t\t\t\tThere are three route by Train. So where to go?\n "<<endl;
    cout<<"\n\t\t\t\t Route\t\tFrom\t\tTo\t\tDistance \n";
    cout<<"\t\t\t\t------------------------------------------------------------\n\n";

    cout<<"\n\t\t\t\tRoute 1.\tSylhet\t\tDhaka   \t(233KM)\n";
    cout<<"\n\t\t\t\tRoute 2.\tSylhet\t\tRajshahi\t(447 KM)\n";
    cout<<"\n\t\t\t\tRoute 3.\tSylhet\t\tChottogram\t(350 KM)\n\n";
    cout<<"\n\t\t\t\tSelect Route: ";
    cin>>p;
    if(p==1) t=233;
    if(p==2) t=447;
    if(p==3) t=350;
    //system("CLS");
    cout<<"\n\n\n\t\t\t\tTicket price :\tBDT\t"<<t*1.50<<" Taka\n";
    cout<<"\n\t\t\t\tNational Vat :\tBDT\t 10 Taka\n\n";
    cout<<"\t\t\t\t--------------------------------------------------------\n\n";
    cout<<"\t\t\t\tTotal Payment:\tBDT\t"<<t*1.50+10<<" Taka\n";
    cout<<"\n\n\n\t\t\t\tDo you Want to complete Payment now?\n";
    cout<<"\n\t\t\t\t1.Yes\n";
    cout<<"\n\t\t\t\t2.Back\n";
    cout<<"\n\t\t\t\tSelect One: ";
    cin>>x;
    if(x==1)payment();
    else vehical();
}



//Reserve


void reserve()
{
    system("CLS");
    int option;
    cout<<"\n\n\n\t\t\t\t\tYou Can Reserve:\n"<<endl;
    cout<<"\n\t\t\t\t\t1.Car"<<endl;
    cout<<"\n\t\t\t\t\t2.Bus"<<endl;
    cout<<"\n\t\t\t\t\t3.Back\n";
    cout<<"\n\n\t\t\t\t\tSelect Any Of Them:\t";

    cin>>option;
    if(option== 1) car_reserve();
    if(option== 2) bus_reserve();
    if(option== 3) travel();

}


//Car Reserve

void car_reserve()
{
    system("CLS");
    int hours,option,t;
    cout<<"\n\n\t\t\tNB: For your kind information, 4/5 members can travel easily by our car service.\n"<<endl;
    cout<<"\t\t\tPlease let us know, for how many hours, you want to reserve?\n";
    cout<<"\n\n\t\t\t\t\tFor Hours: ";
    cin>>hours;
    int k=hours*500;
    cout<<"\n\n\t\t\tThank You Sir, The service demands : BDT "<<k<<"TK only"<<endl;
    cout<<"\n\n\t\t\t\tWhat do you want?"<<endl;
    cout<<"\t\t\t\t1.Continue"<<endl;
    cout<<"\t\t\t\t2.Back"<<endl;
    cout<<"\n\n\t\t\t\tPlease Press: ";
    cin>>t;
    if(t==1)
        nego();
    if(t==2)
        reserve();
}


//Bus Reserve


void bus_reserve()
{
    system("CLS");
    int hours,option,t;
    cout<<"\n\n\t\t\tNB: For your kind information, 20/25 members can travel easily by our bus service.\n"<<endl;
    cout<<"\t\t\tPlease let us know, for how many hours, you want to reserve?\n";
    cout<<"\n\n\t\t\t\t\tFor Hours: ";
    cin>>hours;
    int k=hours*1500;
    cout<<"\n\n\t\t\tThank You Sir, The service demands : BDT "<<k<<"TK only"<<endl;
    cout<<"\n\n\t\t\t\tWhat do you want?"<<endl;
    cout<<"\\t\t\t\t1.Continue"<<endl;
    cout<<"\t\t\t\t2.Back"<<endl;
    cout<<"\n\n\t\t\t\tPlease Press: ";
    cin>>t;
    if(t==1)
        nego();
    if(t==2)
        reserve();
}

//Negotiating for reserve

void nego()
{

    system("CLS");
    double demand,k,nego,option,t;
    cout<<"\n\n\t\t\t\t\tAre you want to negotiate?"<<endl;
    cout<<"\n\t\t\t\t\t1.Yes"<<endl;
    cout<<"\n\t\t\t\t\t2.No"<<endl;
    cout<<"\n\t\t\t\t\tSelect Any Of Them:\t";
    cin>>option;


    if(option== 2) payment();
    system("CLS");
    if(option== 1)
    {

        cout<<"\n\n\n\t\t\t\t\tService demand BDT: ";
        cin>>demand;
        k=demand*0.1;
        cout<<"\n\n\t\t\t\t\tWant to Pay BDT: ";
        cin>>nego;

        if(demand-nego<=k)
        {
            cout<<"\n\n\t\t\t\t\tAs you wish sir, Thank you."<<endl;
            cout<<"\n\t\t\t\t\tPlease go for payment."<<endl;
            payment();
        }
        else
        {
            cout<<"\n\n\n\t\t\t\t\tDear sir, We are really Sorry.\n\n\t\t\tBut if you want, you can get 10% offer by showing membership card.\n"<<endl;
            cout<<"\n\n\t\t\tSo if you okay with it, you have to pay BDT :"<<demand-k<<" TK only\n"<<endl;
            cout<<"\n\n\t\t\t\tPlease Press 1 to continue: ";
            cin>>t;
            if (t==1)
                change_mind();
        }
    }
}



//Changing Mind or not?


void change_mind()
{
    system("CLS");
    int option;
    cout<<"\n\n\t\t\t\t\tWill you change your mind,Sir?\n"<<endl;
    cout<<"\n\n\t\t\t\t\t1.Yes"<<endl;
    cout<<"\n\t\t\t\t\t2.No"<<endl;
    cout<<"\n\t\t\t\t\t3.Back to menu"<<endl;
    cout<<"\n\n\t\t\t\t\tSelect Any Of Them:";
    cin>>option;
    if(option== 1)
    {
        cout<<"\n\t\t\t\t\tAs you wish sir, Thank you.\n"<<endl;
        cout<<"\t\t\t\t\tPlease go for payment."<<endl;
        payment();
    }

    if(option== 2) bye_thanks();
    if(option==3) welcome();

}



//Payment
void payment()
{
    string any;
    system("CLS");

    cout<<"\n\n\n\t\t\t\t\t\tPAYMENT OPTION\n"<<endl;
    char ch=178;
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\n\t\t\t\t\tDear sir, The Section is in under construction!\n"<<endl;
    cout<<"\n\t\t\t\tYou Can do payment from here in shorty. please Stay with us.\n\n"<<endl;
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\t\t\t\t\tPlease press any to go back to the menu page.\n\n"<<endl;
    cin>>any;
    welcome();

}


//Nice to meet you


void bye_thanks()
{
    int t;
    cout<<"\n\n\n\t\t\tNice to meet you & thank You Sir"<<endl;
    cout<<"\n\n\t\t\tPress 1 to go in Menu"<<endl;
    cin>>t;
    if(t==1)
        welcome();
}






//Welcome page, First content

void about()
{
//it will show my project about

    string any;
    system("CLS");
    cout<<"\n\n\n\t\t\t\t\tDear sir, The Section is in under construction!\n"<<endl;
    //cout<<"\n\n\n"<<endl;
    char ch=178;
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\n\t\t\t\tHere we will discuss about frequency question and answer section.(FQA)"<<endl;
    cout<<"\n\n\t\t\t\t\tPlease press any to go back to the menu page.\n\n"<<endl;
    for(int z=0; z<120; z++)
        cout<<ch;
    cin>>any;
    welcome();
}



//Welcome page, First content

void others()
{
    //if i update my project feature
    int any;
    string any2;
    system("CLS");
    char ch=178;
    cout<<"\n\n\n\t\t\t\t\t\tOTHERS\n"<<endl;
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\n\t\t\t\t\tDear sir, there are two options here:\n"<<endl;
    cout<<"\n\t\t\t\t\t1.New Features"<<endl;
    cout<<"\n\t\t\t\t\t2.Comment or rating"<<endl;
    cout<<"\n\t\t\t\t\t3.Back"<<endl;
    cout<<"\n\n\n\t\t\t\t\tPlease press your choice:";
    cin>>any;

    if(any==1)
        newfeature();
    else if(any==2)
        rating();
    else if(any==3)
        welcome();
    else
    {
        system ("CLS");
        cout<<"\n\n\t\t\t\t\tInvalied Try"<<endl;
        cout<<"\n\n\t\t\t\t\tPlease press any to go back.";
        cin>>any2;
        others();
    }
}



void newfeature()
{
    system("CLS");
    char ch=178;
    string any2;
    cout<<"\n\n\n\n\n\n\n\n";
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\n\t\t\t\tDear sir, We are really Sorry. The Section is in under construction!\n\n"<<endl;
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\t\t\t\t\tPlease press any to go back.";
    cin>>any2;
    others();
}


void rating()
{
    system ("CLS");
    char ch=178;
    string comment,any2;
    cout<<"\n\n\t\t\t\t We are really glad to have you Sir. Please comment below.\n\n"<<endl;
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\n\t\t\t\tYour Comment:";
    //fflush(stdin);
    //gets(comment);
    cin>>comment;
    //scanf("%s",&comment);
    cout<<"\n"<<endl;
    for(int z=0; z<120; z++)
        cout<<ch;
    cout<<"\n\n\t\t\tThank You So Much, We will Try our level best to Develop Your Facilities\n\n";


    cout<<"\n\n\t\t\t\t\tPlease press any to go back.";
    cin>>any2;
    others();


}



//Main Function

int main()
{

    system("color e");


    welcome();

}
