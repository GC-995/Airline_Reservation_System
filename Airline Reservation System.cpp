#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();


class Management
{
    public:
         Management()
         {
                     mainMenu();
         }           
           
};

class Details
{
      public:
             static string name; static string gender;
             static string phoneNo;
             int age;
             string add;
             static string cId;
             char arr[100];
             
             void information()
             {
                  cout<<"\nEnter the customer ID: ";
                  cin>>cId;
                  cout<<"\nEnter your name: ";
                  cin>>name;
                  cout<<"\nEnter your age: ";
                  cin>>age;
                  cout<<"\nEnter your Gender: ";
                  cin>>gender;
                  cout<<"\nEnter your phone number: ";
                  cin>>phoneNo;
                  cout<<"\nYour details are now saved with us!\n"<<endl;
             }     
}; 

string Details::cId;
string Details::name;
string Details::gender;
string Details::phoneNo;

class registration
{
      public:
             static int choice;
             int choice1;
             int back;
             static float charges;
             
             void flights()
             {
             string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Japan", "Singapore"};
             
             for(int a=0; a<7; a++)
             {
                cout << (a+1)<<".Flight to "<<flightN[a]<<endl;
             }
                
             cout<<"\nWelcome to GC trips!\n"<<endl;
             cout<<"\n**********Flight booking portal**********\n"<<endl;
             cout<<"Enter the option of the place you wish to visit: ";
             cin>>choice;
             
             switch(choice)
             {
                 case 1:
                      {
                           cout<<"\n __________Welcome to Dubai Emirates__________\n"<<endl;
                           cout<<"Be good to yourself, Fly Emirates!\n"<<endl;
                           cout<<"Here are the flights\n"<<endl;
                           cout<<"1. DUB - 498"<<endl;
                           cout<<"\t08-01-2024 8:00 AM 10hrs Rs. 14000\n"<<endl;
                           cout<<"2. DUB - 603"<<endl;
                           cout<<"\t27-02-2024 2:20 AM 12hrs Rs. 13300\n"<<endl;
                           cout<<"3. DUB - 916"<<endl;
                           cout<<"\t17-04-2024 6:40 PM 10hrs Rs. 12150\n"<<endl;
                           
                           cout<<"Select the flight you want to book: ";
                           cin>>choice1;
                           
                           if (choice1==1)
                           {
                                          charges=14000;
                                          cout<<"\nYour flight DUB - 498 has been successfully booked"<<endl;
                                          cout<<"\nPress 1 to go back to the menu and collect your ticket\n"; 
                                          
                           }
                           
                           else if (choice1==2)
                           {
                                charges=13300;
                                cout<<"\nYour flight DUB - 603 has been successfully booked"<<endl;
                                cout<<"\nPress 1 to go back to the menu and collect your ticket\n"; 
                           }
             
                           else if (choice1==3)
                           {
                                charges=12150;
                                cout<<"\nYour flight DUB - 916 has been successfully booked"<<endl;
                                cout<<"\nPress 1 to go back to the menu and collect your ticket\n"; 
                           }
                           
                           else
                           {
                                cout<<"Please enter a valid choice"<<endl;
                                flights();
                           }
                            cout <<"Press any key to go back to the main menu: "<<endl;
                                cin>>back;
                                
                                if(back==1)
                                {
                                           mainMenu();
                                }
                                else 
                                {
                                     mainMenu();
                                }     
                                           break;
                           }
             
             
             
             case 2:       {
                           cout<<"\n __________Welcome to Air Canada__________\n"<<endl;
                           cout<<"Your world awaits, book your flights today!\n"<<endl;
                           cout<<"Here are the flights\n"<<endl;
                           cout<<"1. CAD - 145"<<endl;
                           cout<<"\t11-01-2024 1:15 AM 16hrs Rs. 82500\n"<<endl;
                           cout<<"2. CAD - 339"<<endl;
                           cout<<"\t09-02-2024 3:45 PM 17hrs Rs.78800\n"<<endl;
                           cout<<"3. CAD - 828"<<endl;
                           cout<<"\t03-04-2024 11:15 PM 16hrs Rs. 61300\n"<<endl;
                           
                           cout<<"Select the flight you want to book: ";
                           cin>>choice1;
                           
                           if (choice1==1)
                           {
                                          charges=82500;
                                          cout<<"\nYour flight CAD - 145 has been succesfully booked"<<endl;
                                          cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                                          
                           }
                           
                           else if (choice1==2)
                           {
                                charges=78800;
                                cout<<"\nYour flight CAD - 339 has been succesfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
             
                           else if (choice1==3)
                           {
                                charges=61300;
                                cout<<"\nYour flight CAD - 828 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
                           
                           else
                           {    cout<<"Please enter a valid choice"<<endl;
                                flights();
                           }
                                cin>>back;
                                if(back==1)
                                {
                                           mainMenu();
                                }
                                
                                else
                                {
                                    mainMenu();
                                }
                                break;
                           }
                           
                case 3:
                          {
                           cout<<" \n__________Welcome to British Airways__________\n"<<endl;
                           cout<<"The world's favorite airline!\n"<<endl;
                           cout<<"Here are the flights\n"<<endl;
                           cout<<"1. UK - 319"<<endl;
                           cout<<"\t16-01-2024 1:45 AM 10hrs Rs. 52000\n"<<endl;
                           cout<<"2. UK - 361"<<endl;
                           cout<<"\t27-02-2024 3:05 AM 8hrs Rs.48750\n"<<endl;
                           cout<<"3. UK - 558"<<endl;
                           cout<<"\t15-05-2024 1:50 PM 9hrs Rs. 47300\n"<<endl;
                           
                           cout<<"Select the flight you want to book: ";
                           cin>>choice1;
                           
                           if (choice1==1)
                           {
                                          charges=52000;
                                          cout<<"\nYour flight UK - 319 has been succesfully booked"<<endl;
                                          cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                                          
                           }
                           
                           else if (choice1==2)
                           {
                                charges=48750;
                                cout<<"\nYour flight UK - 361 has been succesfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
             
                           else if (choice1==3)
                           {
                                charges=47300;
                                cout<<"\nYour flight UK - 558 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
                           
                           else
                           {    cout<<"Please enter a valid choice"<<endl;
                                flights();
                           }
                                cin>>back;
                                if(back==1)
                                {
                                           mainMenu();
                                }
                                
                                else
                                {
                                    mainMenu();
                                }
                                break; 
             }
              case 4:   {
                           cout<<"\n__________Welcome to American Airlines__________\n"<<endl;
                           cout<<"And the world's greatest flyers fly american!\n"<<endl;
                           cout<<"Here are the flights\n"<<endl;
                           cout<<"1. USA - 175"<<endl;
                           cout<<"\t21-01-2024 3:00 AM 16hrs Rs. 80700\n"<<endl;
                           cout<<"2. USA - 376"<<endl;
                           cout<<"\t18-03-2024 12:45 PM 17hrs Rs.68450\n"<<endl;
                           cout<<"3. USA - 521"<<endl;
                           cout<<"\t05-04-2024 10:30 PM 16hrs Rs. 60900\n"<<endl;
                           
                           cout<<"Select the flight you want to book: ";
                           cin>>choice1;
                           
                           if (choice1==1)
                           {
                                          charges=80700;
                                          cout<<"\nYour flight USA - 175 has been succesfully booked"<<endl;
                                          cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                                          
                           }
                           
                           else if (choice1==2)
                           {
                                charges=68450;
                                cout<<"\nYour flight USA - 376 has been succesfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
             
                           else if (choice1==3)
                           {
                                charges=60900;
                                cout<<"\nYour flight USA - 521 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
                           
                           else
                           {    cout<<"Please enter a valid choice"<<endl;
                                flights();
                           }
                                cin>>back;
                                if(back==1)
                                {
                                           mainMenu();
                                }
                                
                                else
                                {
                                    mainMenu();
                                }
                                break;
             }
             
             
                  case 5:  {
                           cout<<"\n __________Welcome to Air Australia__________\n"<<endl;
                           cout<<"You're the reason we fly!\n"<<endl;
                           cout<<"Here are the flights\n"<<endl;
                           cout<<"1. AUS - 233"<<endl;
                           cout<<"\t18-01-2024 4:25 AM 7hrs Rs. 42500\n"<<endl;
                           cout<<"2. AUS - 476"<<endl;
                           cout<<"\t05-02-2024 1:05 AM 6hrs Rs.38100\n"<<endl;
                           cout<<"3. AUS - 640"<<endl;
                           cout<<"\t26-04-2024 11:15 PM 16hrs Rs. 27000\n"<<endl;
                           
                           cout<<"Select the flight you want to book: ";
                           cin>>choice1;
                           
                           if (choice1==1)
                           {
                                          charges=42500;
                                          cout<<"\nYour flight AUS - 233 has been succesfully booked"<<endl;
                                          cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                                          
                           }
                           
                           else if (choice1==2)
                           {
                                charges=38100;
                                cout<<"\nYour flight AUS - 476 has been succesfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
             
                           else if (choice1==3)
                           {
                                charges=27000;
                                cout<<"\nYour flight AUS - 640 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
                           
                           else
                           {    cout<<"Please enter a valid choice"<<endl;
                                flights();
                           }
                                cin>>back;
                                if(back==1)
                                {
                                           mainMenu();
                                }
                                
                                else
                                {
                                    mainMenu();
                                }
                                break;
             }
                 case 6 : {
                           cout<<" \n__________Welcome to Japan Airlines__________\n"<<endl;
                           cout<<"Happier Skies!\n"<<endl;
                           cout<<"Here are the flights\n"<<endl;
                           cout<<"1. JAP - 295"<<endl;
                           cout<<"\t18-01-2024 2:55 AM 9hrs Rs. 52500\n"<<endl;
                           cout<<"2. JAP - 422"<<endl;
                           cout<<"\t23-02-2024 3:25 AM 7hrs Rs.48800\n"<<endl;
                           cout<<"3. JAP - 718"<<endl;
                           cout<<"\t27-04-2024 08:30 PM 8hrs Rs. 41650\n"<<endl;
                           
                           cout<<"Select the flight you want to book: ";
                           cin>>choice1;
                           
                           if (choice1==1)
                           {
                                          charges=52500;
                                          cout<<"\nYour flight JAP - 295 has been successfully booked"<<endl;
                                          cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                                          
                           }
                           
                           else if (choice1==2)
                           {
                                charges=48800;
                                cout<<"\nYour flight JAP - 422 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
             
                           else if (choice1==3)
                           {
                                charges=41650;
                                cout<<"\nYour flight JAP - 718 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
                           
                           else
                           {    cout<<"Please enter a valid choice"<<endl;
                                flights();
                           }
                                cin>>back;
                                if(back==1)
                                {
                                           mainMenu();
                                }
                                
                                else
                                {
                                    mainMenu();
                                }
                                break;
             }
                case 7: {
                        cout<<"\n __________Welcome to Singapore Airlines________\n"<<endl;
                           cout<<"Welcome to World Class!\n"<<endl;
                           cout<<"Here are the flights\n"<<endl;
                           cout<<"1. SGP - 187"<<endl;
                           cout<<"\t03-01-2024 8:40 AM 6hrs Rs.27400\n"<<endl;
                           cout<<"2. SGP - 480"<<endl;
                           cout<<"\t13-02-2024 3:30 PM 6hrs Rs.22800\n"<<endl;
                           cout<<"3. SGP - 608"<<endl;
                           cout<<"\t18-04-2024 10:45 PM 7hrs Rs.19500\n"<<endl;
                           
                           cout<<"Select the flight you want to book: ";
                           cin>>choice1;
                           
                           if (choice1==1)
                           {
                                          charges=27400;
                                          cout<<"Your flight SGP - 187 has been successfully booked"<<endl;
                                          cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                                          
                           }
                           
                           else if (choice1==2)
                           {
                                charges=22800;
                                cout<<"\nYour flight SGP - 480 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
             
                           else if (choice1==3)
                           {
                                charges=19500;
                                cout<<"\nYour flight SGP - 606 has been successfully booked"<<endl;
                                cout<<"Press 1 to go back to the menu and collect your ticket\n"; 
                           }
                           
                           else
                           {    cout<<"Please enter a valid choice"<<endl;
                                flights();
                           }
                                cin>>back;
                                if(back==1)
                                {
                                           mainMenu();
                                }
                                
                                else
                                {
                                    mainMenu();
                                }
                                break;
             }
                default:
                         {
                         cout<<"\nPlease enter a valid choice, shifting you to main menu..."<<endl;
                         mainMenu();
                         break;
                         }
      }
}
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
      public:
             void Bill()
             {
                  string destination="";
                  ofstream outf("records.txt");
                  {
                           outf<<"\n\t________GC trips________"<<endl;
                           outf<<"\t_________Ticket________"<<endl;
                           outf<<"\t_______________________\n"<<endl;
                           outf<<"Customer ID: "<<Details::cId<<endl;
                           outf<<"Customer Name: "<<Details::name<<endl;
                           outf<<"Customer Gender: "<<Details::gender<<endl;
                           outf<<"Customer phone number: "<<Details::phoneNo<<endl;
                           outf<<"\n\tFlight details:-"<<endl<<endl;
                           
                           if (registration::choice==1)
                           {
                           destination="Dubai";
                           }
                           else if(registration::choice==2)
                           {
                                destination="Canada";                        
                           } 
                           else if(registration::choice==3)
                           {
                                destination="UK";
                           }
                           else if(registration::choice==4)
                           {
                                destination="USA";
                           }
                           else if(registration::choice==5)
                           {
                                destination="Australia";
                           }
                           else if(registration::choice==6)
                           {
                                destination="Japan";
                           }
                           else if(registration::choice==7)
                           {
                                destination="Singapore";
                           }
                           outf<<"Destination:\t\t"<<destination<<endl;
                           outf<<"Flight cost: \t\t"<<registration::charges<<endl;
                           }
                           outf.close();
                           }
                           void dispBill()
                           {
                                ifstream ifs("records.txt");
                                {
                                         if(!ifs)
                                         {
                                                 cout<<"File error!"<<endl;
                                         }
                                         while(!ifs.eof())
                                         {
                                         ifs.getline(arr,100);
                                         cout<<arr<<endl;
                                         }
                                }
                                ifs.close();
                  }
      };
                                
                           
void mainMenu()
{
     int lchoice;
     int schoice;
     int back;
     
     cout << "\t\n\n                          GC trips\n"<<endl;
     cout <<"\t__________________Main Menu__________________"<<endl;
     cout <<"\t_____________________________________________"<<endl;
     cout <<"\t\t\t\t\t\t\t" <<endl;
     
     cout<< "\t|\t Press 1 to add Customer Details      \t|" <<endl;
     cout<< "\t|\t Press 2 for Flight Registration      \t|" <<endl;
     cout<< "\t|\t Press 3 for Tickets and Charges      \t|" <<endl;
     cout<< "\t|\t Press 4 to Exit                      \t|\n\n\n" <<endl;
     
     cout<<"Enter your choice: " ;
     cin>>lchoice;
     
     
     Details d;
     registration r;
     ticket t;
     
     switch(lchoice)
     {
                    case 1: 
                         {
                               cout<<"\n\n_________Customer Details_________\n"<<endl;
                               d.information();
                               cout<<"Press 1 to go back to the Main Menu: ";
                               cin>>back;
                               
                               if (back==1)
                               {
                                           mainMenu();
                               }
                               else
                               {
                                   mainMenu();
                                   }
                                   break;
                                   
                               }
                              
                              case 2: 
                                   {
                                         cout<< "\n_______Book a flight using this system_______\n"<<endl;
                                         r.flights();
                                         break;
                                   }
                                   case 3:
                                        {
                                               cout<<"\n_______Get Your Ticket_______\n"<<endl;
                                               t.Bill();
                                               
                                               cout<<"Your ticket has been processed, you can collect it \n"<<endl;
                                               cout<<"Press 1 to display your ticket: ";
                                               
                                               cin>>back;
                                               if (back==1)
                                               {
                                                           t.dispBill();
                                                           cout<<"\nPress any key to go back to the main menu: ";  
                                                           cin>>back;
                                               if(back==1)
                                               {   
                                                mainMenu();
                                               }
                                               else
                                               {
                                                   mainMenu();
                                               }
                                        }
                                        else
                                        {
                                            mainMenu();
                                        }  
                                               break;
                                   }
                                        case 4: 
                                             {
                                                     cout<<"\n\n\t_________Thank You_________"<<endl;
                                                     break;
                                             }             
                                             default:
                                                     {
                                                           cout<<"Invalid Input, Please enter a valid choice: \n"<<endl;
                                                           }
                                   }
                                   
                                                            
}                             

                          
      
      
int main()
{
    Management Mobj;
    return 0;
}
