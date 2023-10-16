//
//  main.cpp
//  login and register
//
//  Created by Nisha Ramprasath on 15/10/23.
//
//
//#include <iostream>
//#include<fstream>
//#include<string.h>
//using namespace std;
//
//void login();
//void registration();
//void forgot();
//
//int min(){
//
//    int c;
//    cout<<"\t\t\t________________________________________\n\n\n";
//    cout<<"\t\t\t            welcome to login page       \n\n\n";
//    cout<<"\t\t\t_________________  Menu  _______________\n\n\n";
//    cout<<"                                               \n\n";
//    cout<<"\t| press 1 to LOGIN     |"<<endl;
//    cout<<"\t| press 2 to REGISTER     |"<<endl;
//    cout<<"\t| press 3 to if you forgot ur password      |"<<endl;
//    cout<<"\t| press 4 to to exit |"<<endl;
//    cout<<"\n\t\t Please enter ur choice:";
//    cin>>c;
//    cout<<endl;
//
//    switch(c)
//    {
//        case 1:
//            login();
//            break;
//
//        case 2:
//            registration();
//            break;
//
//        case 3:
//            forgot();
//            break;
//
//        case 4:
//            cout << "\t\t\t Thank you! \n\n";
//            break;
//
//        default:
//            system("cls");
//            cout << "\t\t\t pls select from the option given above \n"<<endl;
//            main();
//
//
//
//    }
//
//
//}
//void login(){
//    int count;
//    string userId,password,id,pass;
//    system("cls");
//    cout<<"t\t\t ps enter username and passcode:" << endl;
//    cout<<"t\t\t username:";
//    cin>>userId;
//    cout<<"\t\t\t password";
//    cin>> password;
//
//    ifstream imput("records.txt" );
//
//    while(input>>id>>pass)
//    {
//     if(id==userId and pass=password)
//     {
//         count=1;
//         system("cls");
//     }
//        input.close();
//        if(count==1)
//        {
//            count<<userId<<"\n ur login is succesful\n thanks for loggin in \n";
//            main();
//
//
//        }
//        else{
//            cout<<"\n login error\n pls check ur username password\n";
//            main()
//
//        }
//    }
//
//
//    void registration(){
//        sting ruserId,rpassword ,rid ,rpass;
//        system("cls");
//        cout<<"\t\t\t enter the username:";
//        cin>>ruserId;
//        cout<<"\t\t\t enter password:";
//        cin>rpassword;
//
//        ofstream f1("records.txt",ios::app);
//        f1<<ruserId<<' ',,password<<endl;
//        system("cls");
//        cout<<"\n\t\t\t registration is successfull \n";
//        main()
//
//
//    }
//
//
//    void forgot()
//    {
//        int option;
//        system("cls");
//        cout<<"\t\t\t\ u forgort password\n";
//        cout<< "press 1 to search ur user is <<endl";
//        cout<< "press 2 to go back to the main menue <<endl";
//        cout<<"\t\t\t enter ur choice:";
//        cin>>option;
//        switch(option)
//        {
//            case 1{
//                int count=0;
//                string suserId,sId,sPass;
//                cout<<"\t\t\enter the username :";
//                cin>>userId;
//
//                ifstream f2("records.txt");
//                while(f2>>sId>>spass)
//                {
//                    if(sid==suserId)
//                    {
//                        count=1;
//
//                    }
//                }
//                f2.close();
//                if(count==1){
//                    cout<<"\n\n ur acc is found \n";
//                    cout<<"\n\n ur password is:"<<spass;
//                    main();
//                }
//                else{
//                    cout<<"\n\t sorry! ur acc is not found\n";
//                    main();
//                }
//                break;
//            }
//            case 2:
//            {
//                main();
//            }
//            default:
//                cout<<"\t\t\t wrong choixe pls tru agaon"<<endl;
//                forgot();
//        }
//    }
//
//}

//////////////////////////////////////////////////////
///
///
///

#include <iostream>
#include <fstream>
#include <string> // Include the correct header for strings
using namespace std;

void login();
void registration();
void forgot();

int main() { // Change "int min()" to "int main()"

    int c;
    cout << "\t\t\t________________________________________\n\n\n";
    cout << "\t\t\t            welcome to the login page       \n\n\n";
    cout << "\t\t\t_________________  Menu  _______________\n\n\n";
    cout << "                                               \n\n";
    cout << "\t| press 1 to LOGIN     |" << endl;
    cout << "\t| press 2 to REGISTER     |" << endl;
    cout << "\t| press 3 if you forgot your password      |" << endl; // Fixed "if" and "your"
    cout << "\t| press 4 to exit |" << endl;
    cout << "\n\t\t Please enter your choice:"; // Fixed "ur" to "your"
    cin >> c;
    cout << endl;

    switch (c) {
        case 1:
            login();
            break;

        case 2:
            registration();
            break;

        case 3:
            forgot();
            break;

        case 4:
            cout << "\t\t\t Thank you! \n\n";
            break;

        default:
            system("cls");
            cout << "\t\t\t please select from the options given above \n" << endl; // Fixed "pls" and "options"
            main();
    }
    return 0; // Added a return statement
}

void login() {
    int count = 0;
    string userId, password, id, pass;
    system("cls");
    cout << "\t\t\t Please enter username and passcode:" << endl; // Added "Please"
    cout << "\t\t\t username:";
    cin >> userId;
    cout << "\t\t\t password:";
    cin >> password;

    ifstream input("records.txt"); // Fixed "imput" to "input"

    while (input >> id >> pass) {
        if (id == userId && pass == password) { // Fixed "pass = password"
            count = 1;
            system("cls");
        }
    }
    input.close();

    if (count == 1) {
        cout << userId << "\n your login is successful\n thanks for logging in \n"; // Fixed "count" and "ur" to "your"
        main();
    } else {
        cout << "\n login error\n please check your username and password\n"; // Fixed "pls," "ur," and "your"
        main();
    }
}

void registration() {
    string ruserId, rpassword, rid, rpass; // Fixed "sting" to "string" and "cin>rpassword" to "cin >> rpassword"
    system("cls");
    cout << "\t\t\t enter the username:";
    cin >> ruserId;
    cout << "\t\t\t enter password:";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruserId << ' ' << rpassword << endl; // Fixed "f1<<ruserId<<' ',,password<<endl;" to "f1 << ruserId << ' ' << rpassword << endl;"
    system("cls");
    cout << "\n\t\t\t registration is successful \n";
    main();
}

void forgot() {
    int option;
    system("cls");
    cout << "\t\t\t you forgot your password\n";
    cout << "press 1 to search your user\n";
    cout << "press 2 to go back to the main menu\n";
    cout << "\t\t\t enter your choice:";
    cin >> option;

    switch (option) {
        case 1: // Fixed "{" to ":"{
        {
            int count = 0;
            string suserId, sId, sPass;
            cout << "\t\t\t enter the username :";
            cin >> suserId;
            
            ifstream f2("records.txt");
            while (f2 >> sId >> sPass) {
                if (sId == suserId) {
                    count = 1;
                }
            }
            f2.close();
            
            if (count == 1) {
                cout << "\n\n your account is found \n";
                cout << "\n\n your password is:" << sPass;
            }
            else {
                cout << "\n\t sorry! your account is not found\n";
            }
            break;
    }
         case 2:
            main();
            break;
        default:
            cout << "\t\t\t wrong choice, please try again" << endl;
    }
}
