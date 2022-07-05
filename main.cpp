/*This program is created in such a way , 
that it will ask you until you pay complete fare.. 
even if you pay extra fare it will return extra fare*/

#include <iostream>
using namespace std;

int main ()
{
    int Single_Bed_AC {40};
    int Single_Bed_NAC {30};
    int Double_Bed_AC {25};
    int Double_Bed_NAC {10};
    int Dormitory_AC {16};
    int Dormitory_NAC {20};
    
    int Sushi {8};
    int Gold_plated_dosa{9};
    int Peking_Duck{2};
    int Pizza_Qube{5};
    int Butter_Chicken {6};
    int CurdRice {11};
    int TotBal {0};
    int Num_Rooms{0} , Num_Food {0};
    int Number {0} , Number2 {0} , Number3{0} , RoomPayment {0}, DishPayment{0} , HotelWallet {0};
    bool opinion {true};
  cout << "  Welcome to Hotel PEPS" << endl;
  cout << "  =====================" << endl;
  cout <<endl;
  label8:
  cout<<endl;
  cout<<"Enter money you want to send to Hotel wallet : ";
  cin>>HotelWallet;
  TotBal = HotelWallet + TotBal;
  label4:
  cout<<"Balance in HotelWallet: "<<TotBal<<endl;
  cout<<endl<<endl;
  cout << " ______________________ " <<endl;
  cout << "|   PREFERENCE LIST:   |" << endl;
  cout << "|----------------------|" << endl;
  cout << "| 1> |  Room Booking   |" << endl;
  cout << "|----------------------|" << endl;
  cout << "| 2> |  Food Item      |" << endl;
  cout << "|______________________|" <<endl;
  label:
  cout<<endl<<endl;
  cout << "Enter the item number you choosed (only one at a time):  ";
  cin>>Number;
  if((Number!=1)&&(Number!=2))
  {
      cout<<endl<<endl;
      cout<<" ===================================================================="<<endl;
      cout<<"||                    !!ERROR!!                                     ||"<<endl;
      cout<<" ===================================================================="<<endl;
      cout<<"||       "<<Number <<" is not present in the list                               ||"<<endl;
      cout<<"||__________________________________________________________________||"<<endl;
      cout<<"||     You have to choose the correct number from 1 and 2           ||"<<endl;
      cout<<"||__________________________________________________________________||"<<endl;
      goto label;
  }
  else if(Number==1)
  {
        cout << " __________________________ _____ __________" <<endl;
        cout << "|      ROOM MODEL:         |ROOMS| Cost_room|" << endl;
        cout << "|--------------------------|-----|----------|" << endl;
        cout << "| 1> | Single Bed A/C      |  "<<Single_Bed_AC<<    " |"<< "   "<<10000<<"  |" << endl;
        cout << "|--------------------------|-----|----------|" << endl;
        cout << "| 2> | Single Bed non-A/C  |  "<<Single_Bed_NAC<<    " |"<< "    "<<8000<<"  |" << endl;
        cout << "|--------------------------|-----|----------|" << endl;
        cout << "| 3> | Double Bed A/C      |  "<<Double_Bed_AC<<    " |"<< "   "<<15000<<"  |" << endl;
        cout << "|--------------------------|-----|----------|" << endl;
        cout << "| 4> | Double Bed non-A/C  |  "<<Double_Bed_NAC<<    " |"<< "   "<<12000<<"  |" << endl;
        cout << "|--------------------------|-----|----------|" << endl;
        cout << "| 5> | Dormitory A/C       |  "<<Dormitory_AC<<    " |"<< "    "<<6000<<"  |" << endl;
        cout << "|--------------------------|-----|----------|" << endl;
        cout << "| 6> | Dormitory non-A/C   |  "<<Dormitory_NAC<<    " |"<< "    "<<4800<<"  |" << endl;
        cout << "|__________________________|_____|__________|" << endl;
        label2:
        cout<<endl<<endl;
        cout << "Enter the item number you choose :  ";
        cin>>Number2;
        if((Number2!=1)&&(Number2!=2)&&(Number2!=3)&&(Number2!=4)&&(Number2!=5)&&(Number2!=6))
        {
            cout<<endl<<endl;
            cout<<" ===================================================================="<<endl;
            cout<<"||                    !!ERROR!!                                     ||"<<endl;
            cout<<" ===================================================================="<<endl;
            cout<<"||       "<<Number2 <<" is not present in the list                              ||"<<endl;
            cout<<"||__________________________________________________________________||"<<endl;
            cout<<"||     You have to choose the correct number from 1 to 6            ||"<<endl;
            cout<<"||__________________________________________________________________||"<<endl;
            goto label2;
            
        }
        else
        {
            
            label6:
            cout <<"Number of rooms you want : ";
            cin >>Num_Rooms;
            
            
            switch (Number2)
            {
                case 1:
                  if(Num_Rooms>Single_Bed_AC)
                  {
                      cout<<"At present we have only "<<Single_Bed_AC<<" Rooms in our Hotel"<<endl;
                      goto label6;
                  }
                  if(TotBal<10000*Num_Rooms)
                  {
                      
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Single Bed A/C "<<endl;
                  cout<<"Please pay Rs."<<10000*Num_Rooms<<endl;
                  cout<<"Enter Payment : ";
                  cin>>RoomPayment;
                  TotBal=TotBal-RoomPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(RoomPayment>Num_Rooms*10000)
                  {
                      cout<<"You paid extra money : "<<RoomPayment-Num_Rooms*10000<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + RoomPayment-Num_Rooms*10000; 
                      cout<<"Now, Your Balance in HotelWallet : "<<TotBal<<endl;
                      cout<<"Congratulations.Transaction is successful. Your rooms"<< " got booked"<<endl;
                      Single_Bed_AC--; 
                  }
                  else if(RoomPayment<Num_Rooms*10000)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<Num_Rooms*10000-RoomPayment<<endl;
                      int extraPay {Num_Rooms*10000-RoomPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              HotelWallet = HotelWallet +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                              Single_Bed_AC--;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      Single_Bed_AC--;
                  }
                  break;
                      
                
                
                case 2:
                if(Num_Rooms>Single_Bed_NAC)
                  {
                      cout<<"At present we have only "<<Single_Bed_NAC<<" Rooms in our Hotel"<<endl;
                      goto label6;
                  }
                if(TotBal<8000*Num_Rooms)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed "<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Single Bed non-A/C "<<endl;
                  cout<<"Please pay Rs."<<8000*Num_Rooms<<endl;
                  cout<<"Enter Payment : ";
                  cin>>RoomPayment;
                  TotBal=TotBal-RoomPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(RoomPayment>8000*Num_Rooms)
                  {
                      cout<<"You paid extra money : "<<RoomPayment-8000*Num_Rooms<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + RoomPayment-8000*Num_Rooms; 
                      cout<<"Now, Your Balance in HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Single_Bed_NAC;
                  }
                  else if(RoomPayment<8000*Num_Rooms)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<8000*Num_Rooms-RoomPayment<<endl;
                      int extraPay {8000*Num_Rooms-RoomPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                              --Single_Bed_NAC;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Single_Bed_NAC;
                  }
                  break;
                  
            
            case 3:
                  if(Num_Rooms>Double_Bed_AC)
                  {
                      cout<<"At present we have only "<<Double_Bed_AC<<" Rooms in our Hotel"<<endl;
                      goto label6;
                  }
                  if(TotBal<15000*Num_Rooms)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Double Bed A/C "<<endl;
                  cout<<"Please pay Rs."<<15000*Num_Rooms<<endl;
                  cout<<"Enter Payment : ";
                  cin>>RoomPayment;
                  TotBal=TotBal-RoomPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(RoomPayment>15000*Num_Rooms)
                  {
                      cout<<"You paid extra money : "<<RoomPayment-15000*Num_Rooms<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal=TotBal-15000*Num_Rooms; 
                      cout<<"Now, Your Balance in HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Double_Bed_AC;
                  }
                  else if(RoomPayment<15000*Num_Rooms)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<15000*Num_Rooms-RoomPayment<<endl;
                      int extraPay {15000*Num_Rooms-RoomPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                              --Double_Bed_AC;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Double_Bed_AC;
                      
                  }
                  break;      
                  
            case 4:
                  if(Num_Rooms>Double_Bed_NAC)
                  {
                      cout<<"At present we have only "<<Double_Bed_NAC<<" Rooms in our Hotel"<<endl;
                      goto label6;
                  }
                  if(TotBal<12000*Num_Rooms)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Double Bed non-A/C "<<endl;
                  cout<<"Please pay Rs."<<12000*Num_Rooms<<endl;
                  cout<<"Enter Payment : ";
                  cin>>RoomPayment;
                  TotBal=TotBal-RoomPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(RoomPayment>12000*Num_Rooms)
                  {
                      cout<<"You paid extra money : "<<RoomPayment-12000*Num_Rooms<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + RoomPayment-12000*Num_Rooms; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Double_Bed_NAC;
                      
                  }
                  else if(RoomPayment<12000*Num_Rooms)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<12000*Num_Rooms-RoomPayment<<endl;
                      int extraPay {12000*Num_Rooms-RoomPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                              --Double_Bed_NAC;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Double_Bed_NAC;
                  }
                  break;          
            case 5:
                  if(Num_Rooms>Dormitory_AC)
                  {
                      cout<<"At present we have only "<<Dormitory_AC<<" Rooms in our Hotel"<<endl;
                      goto label6;
                  }
                  if(TotBal<6000*Num_Rooms)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Dormitory A/C "<<endl;
                  cout<<"Please pay Rs."<<6000*Num_Rooms<<endl;
                  cout<<"Enter Payment : ";
                  cin>>RoomPayment;
                  TotBal=TotBal-RoomPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(RoomPayment>6000*Num_Rooms)
                  {
                      cout<<"You paid extra money : "<<RoomPayment-6000*Num_Rooms<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + RoomPayment-6000*Num_Rooms; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      
                  }
                  else if(RoomPayment<6000*Num_Rooms)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<6000*Num_Rooms-RoomPayment<<endl;
                      int extraPay {6000*Num_Rooms-RoomPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                              --Dormitory_AC;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Dormitory_AC;
                  }
                  break;
            default :
                  if(Num_Rooms>Dormitory_NAC)
                  {
                      cout<<"At present we have only "<<Dormitory_NAC<<" Rooms in our Hotel"<<endl;
                      goto label6;
                  }
                  if(TotBal<4800*Num_Rooms)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Dormitory non-A/C "<<endl;
                  cout<<"Please pay Rs."<<4800*Num_Rooms<<endl;
                  cout<<"Enter Payment : ";
                  cin>>RoomPayment;
                  TotBal=TotBal-RoomPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(RoomPayment>4800*Num_Rooms)
                  {
                      cout<<"You paid extra money : "<<RoomPayment-4800*Num_Rooms<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + RoomPayment-4800*Num_Rooms; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Double_Bed_NAC;
                  }
                  else if(RoomPayment<4800*Num_Rooms)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<4800*Num_Rooms-RoomPayment<<endl;
                      int extraPay {4800*Num_Rooms-RoomPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal- extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                              --Double_Bed_NAC;
                              break;
                          }
                  }
                  }else
                  {
                      cout<<"Congractulations.Transaction is successful. Your rooms got booked"<<endl;
                      --Double_Bed_NAC;
                  }
                  break;
                 
            }
        }
        
  }
  
  else if(Number==2)
  {
      
        cout << " ______________________ __________ ___________" <<endl;
        cout << "|      FOOD MENU:      | Quantity | Cost_item |" << endl;
        cout << "|----------------------|----------|-----------|" << endl;
        cout << "| 1> | Sushi           |   "<<Sushi<<"      |   "<<8000<<"    |" << endl;
        cout << "|----------------------|----------|-----------|" << endl;
        cout << "| 2> | Gold plated dosa|   "<<Gold_plated_dosa<<"      |   "<<7000<<"    |" << endl;
        cout << "|----------------------|----------|-----------|" << endl;
        cout << "| 3> | Peking Duck     |   "<<Peking_Duck<<"      |   "<<6000<<"    |" << endl;
        cout << "|----------------------|----------|-----------|" << endl;
        cout << "| 4> | Pizza - Qube    |   "<<Peking_Duck<<"      |   "<<5000<<"    |" << endl;
        cout << "|----------------------|----------|-----------|" << endl;
        cout << "| 5> | Butter Chicken  |   "<<Butter_Chicken<<"      |   "<<4000<<"    |" << endl;
        cout << "|----------------------|----------|-----------|" << endl;
        cout << "| 6> | CurdRice        |   "<<CurdRice<<"     |   "<<3000<<"    |" << endl;
        cout << "|______________________|__________|___________|" << endl;
        
        label3:
        cout<<endl<<endl;
        cout << "Enter the item number you choose :  ";
        cin>>Number3;
        if((Number3!=1)&&(Number3!=2)&&(Number3!=3)&&(Number3!=4)&&(Number3!=5)&&(Number3!=6))
        {
            cout<<endl<<endl;
            cout<<" ===================================================================="<<endl;
            cout<<"||                    !!ERROR!!                                     ||"<<endl;
            cout<<" ===================================================================="<<endl;
            cout<<"||       "<<Number3<<" is not present in the list                              ||"<<endl;
            cout<<"||__________________________________________________________________||"<<endl;
            cout<<"||     You have to choose the correct number from 1 to 6            ||"<<endl;
            cout<<"||__________________________________________________________________||"<<endl;
            goto label3;
            
        }
        else
        {
            cout<<"Balance in your HotelWallet: "<<TotBal<<endl;
            label7:
            cout<<"Number of quantity you want : ";
            cin>>Num_Food;
            switch (Number3)
            {
                case 1:
                if(Num_Food>Sushi)
                  {
                      cout<<"At present we have only "<<Sushi<<" quantity in our Hotel"<<endl;
                      goto label7;
                  }
                if(TotBal<8000*Num_Food)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choose : Sushi "<<endl;
                  cout<<"Please pay Rs."<<Num_Food*8000<<endl;
                  cout<<"Enter Payment : ";
                  cin>>DishPayment;
                  TotBal=TotBal-DishPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(DishPayment>Num_Food*8000)
                  {
                      cout<<"You paid extra money : "<<DishPayment-Num_Food*8000<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + DishPayment-Num_Food*8000; 
                      cout<<"Now, Balance in yor HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Sushi;
                  }
                  else if(DishPayment<Num_Food*8000)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<Num_Food*8000-DishPayment<<endl;
                      int extraPay {Num_Food*8000-DishPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                              --Sushi;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Sushi;
                  }
                  break;
                      
                
                
                case 2:
                  if(Num_Food>Gold_plated_dosa)
                  {
                      cout<<"At present we have only "<<Gold_plated_dosa<<" quantity in our Hotel"<<endl;
                      goto label7;
                  }
                  if(TotBal<7000*Num_Food)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choose : Gold plated dosa "<<endl;
                  cout<<"Please pay Rs."<<Num_Food*7000<<endl;
                  cout<<"Enter Payment : ";
                  cin>>DishPayment;
                  TotBal=TotBal-DishPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(DishPayment>Num_Food*7000)
                  {
                      cout<<"You paid extra money : "<<DishPayment-Num_Food*7000<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + DishPayment-Num_Food*7000; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Gold_plated_dosa;
                  }
                  else if(DishPayment<Num_Food*7000)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<Num_Food*7000-DishPayment<<endl;
                      int extraPay {Num_Food*7000-DishPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                              --Gold_plated_dosa;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Gold_plated_dosa;
                  }
                  break;
                  
            
            case 3:
                  if(Num_Food>Peking_Duck)
                  {
                      cout<<"At present we have only "<<Peking_Duck<<" quantity in our Hotel"<<endl;
                      goto label7;
                  }
                  if(TotBal<6000*Num_Food)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Peking Duck "<<endl;
                  cout<<"Please pay Rs."<<Num_Food*6000<<endl;
                  cout<<"Enter Payment : ";
                  cin>>RoomPayment;
                  TotBal=TotBal-DishPayment;
                  cout<<"Balance in your HotelWallet: "<<TotBal<<endl;
                  if(RoomPayment>Num_Food*6000)
                  {
                      cout<<"You paid extra money : "<<DishPayment-Num_Food*6000<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + DishPayment-Num_Food*6000; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Peking_Duck;
                  }
                  else if(DishPayment<Num_Food*6000)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<Num_Food*6000-DishPayment<<endl;
                      int extraPay {Num_Food*6000-DishPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                              --Peking_Duck;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Peking_Duck;
                  }
                  break;      
                  
            case 4:
                  if(Num_Food>Pizza_Qube)
                  {
                      cout<<"At present we have only "<<Pizza_Qube<<" quantity in our Hotel"<<endl;
                      goto label7;
                  }
                  if(TotBal<5000*Num_Food)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Pizza - Qube "<<endl;
                  cout<<"Please pay Rs."<<Num_Food*5000<<endl;
                  cout<<"Enter Payment : ";
                  cin>>DishPayment;
                  TotBal=TotBal-DishPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(DishPayment>Num_Food*5000)
                  {
                      cout<<"You paid extra money : "<<DishPayment-Num_Food*5000<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + DishPayment-Num_Food*5000; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Pizza_Qube;
                  }
                  else if(DishPayment<Num_Food*5000)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<Num_Food*5000-DishPayment<<endl;
                      int extraPay {Num_Food*5000-DishPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                              --Pizza_Qube;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Pizza_Qube;
                  }
                  break;          
            case 5:
                  if(Num_Food>Butter_Chicken)
                  {
                      cout<<"At present we have only "<<Butter_Chicken<<" quantity in our Hotel"<<endl;
                      goto label7;
                  }
                  if(TotBal<4000*Num_Food)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : Butter Chicken "<<endl;
                  cout<<"Please pay Rs."<<Num_Food*4000<<endl;
                  cout<<"Enter Payment : ";
                  cin>>DishPayment;
                  TotBal=TotBal-DishPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(DishPayment>Num_Food*4000)
                  {
                      cout<<"You paid extra money : "<<DishPayment-Num_Food*4000<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + DishPayment-Num_Food*4000; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Butter_Chicken;
                  }
                  else if(DishPayment<Num_Food*4000)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<Num_Food*4000-DishPayment<<endl;
                      int extraPay {Num_Food*4000-DishPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                              --Butter_Chicken;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --Butter_Chicken;
                  }
                  break;
            default :
                  if(Num_Food>CurdRice)
                  {
                      cout<<"At present we have only "<<CurdRice<<" quantity in our Hotel"<<endl;
                      goto label7;
                  }
                  if(TotBal<3000*Num_Food)
                  {
                      cout<<"Not sufficient Amount in HotelWallet. Send money to HotelWallet to Proceed"<<endl;
                      goto label8;
                  }
                  cout<<"You have choosed : CurdRice "<<endl;
                  cout<<"Please pay Rs."<<Num_Food*3000<<endl;
                  cout<<"Enter Payment : ";
                  cin>>DishPayment;
                  TotBal=TotBal-DishPayment;
                  cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                  if(DishPayment>Num_Food*3000)
                  {
                      cout<<"You paid extra money : "<<DishPayment-Num_Food*3000<<". We have returned extra money to your HotelWallet."<<endl;
                      TotBal = TotBal + DishPayment-Num_Food*3000; 
                      cout<<"Now, Balance in your HotelWallet : "<<TotBal<<endl;
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --CurdRice;
                  }
                  else if(DishPayment<Num_Food*3000)
                  {
                      int extra {0};
                      cout<<"You have to pay extra money : "<<Num_Food*3000-DishPayment<<endl;
                      int extraPay {Num_Food*3000-DishPayment};
                      for( ;  ; )
                      {
                          cout<<"Pay the extra money :";
                          cin>>extra;
                          TotBal = TotBal - extra;
                          cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                          if(extra > extraPay)
                          {
                              cout<<"You paid extra money : "<<extra-extraPay<<". We have returned extra money to your HotelWallet."<<endl;
                              TotBal = TotBal +extra-extraPay;
                              cout<<"Balance in your HotelWallet : "<<TotBal<<endl;
                              break;
                          }
                          else if(extra < extraPay)
                          {
                              extraPay = extraPay-extra;
                              cout<<"You have to pay extra money : "<<extraPay<<endl;
                              continue;
                          }
                          else
                          {
                              //cout<<"Your account Balance : "<<Balance<<endl;
                              cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                              --CurdRice;
                              break;
                          }
                  }
                  }else{
                      cout<<"Congractulations.Transaction is successful. You will get food in 15  min"<<endl;
                      --CurdRice;
                  }
                  break;
                 
            }
          
        }
  }
  
  label5:
  char Decision {0} ;
  cout<<"\n Press + to Book any room or food / Press - to Exit :";
  cin>>Decision;
  
  switch (Decision)
  {
      case '+':
         goto label4;
         break;
      case '-':
         cout<<"  ***************************************"<<endl;
         cout<<" ||  Thank You. We always welcome you!  ||"<<endl;
         cout<<"  ***************************************"<<endl;
            
         break;
      default :
      {
          goto label5;
          break;
      }
         
  }
  return 0;
}





