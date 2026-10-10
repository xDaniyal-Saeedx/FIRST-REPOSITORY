#include<iostream>
#include<windows.h>
using namespace std;

void menu(string& itemname,float& itemprice,float& itemquantity);
void result(string& itemname,float& itemprice,float& itemquantity);
void calculate(string& itemname,float& itemprice,float& itemquantity);
void add_data(string& itemname,float& itemprice,float& itemquantity);
void admin(string username,string password);


main()
{
    string itemname,password,username;
    float itemprice=0;
    float itemquantity=0;
  
   admin(username,password);
   while (true)
   {
    menu(itemname,itemprice,itemquantity);   
   }
        
}
       
void menu(string& itemname,float& itemprice,float& itemquantity)
{


 
    string choice ;
 cout << "1. add data"<<endl;
 cout << "2. calculate data"<<endl;
 cout << "3. display result"<<endl;
 cin >> choice;
   
 if(choice == "1")
 {
    add_data(itemname, itemprice,itemquantity);
 }
 if(choice == "2")
 {
    calculate(itemname, itemprice,itemquantity);
 }
 if(choice == "3")
 {
    result(itemname, itemprice,itemquantity);
 }
 else{
   cout << "choose above options!!!"<<endl;
   
 }
 
} 

void add_data(string &itemname,float &itemprice,float &itemquantity)
{
   
    cout << "enter the item name: ";
    cin>> itemname;
    if(itemname!="soap"&& itemname!="ghee" && itemname!="tea")
    {
       cout << "we dont sell it!"<<endl ;
       
    }
    else{ 
    cout << "enter the item price: ";
    cin>> itemprice;
    cout << "enter the quantity: ";
    cin >> itemquantity;
    }
}
void calculate(string &itemname,float &itemprice,float &itemquantity)
{
 
        if(0<itemquantity && itemquantity<5){
        itemprice = itemprice*itemquantity;
         cout << "calculation is done!"<<endl;
        }
        else if(itemquantity >= 5)
        {
            itemprice = itemprice - (itemprice*0.15);
           cout << "calculation is done!"<<endl;
        }
        else
        {
            cout << "WARNING: enter data first!!!"<<endl;
        }
        
        
    
}

void result(string &itemname,float &itemprice,float &itemquantity)
{
   if(itemprice==0)
{
   cout << "enter data first"<<endl;
}
else
{
    cout << "your total price is: " <<itemprice<<endl ;
}
}
void admin(string username,string password)
{
  
system("cls");
 cout<< "Username:";
 cin>>username;
 cout<<"Password:";
 cin >> password ;
 if(username=="admin23" && password=="2nifjakl")
 {
   cout<<"Welcome Admin!!"<<endl;
 }
 else
 {
   cout << "wrong username or password"<<endl<<"WAIT FOR 5 SECONDS"<<endl;
   Sleep(5000);
   admin(username,password);
}
}