/* 
 * File:   RetailSalesApp.cpp
 * Author: mdey
 *
 * Created on June 14, 2017, 2:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void mainMenu();
void transactions();

//column 1 = product price, column 2 = number of orders
//initialize each amount as 0
double products[5][2] = { {2.98,  0}, 
                        {4.50,  0}, 
                        {3.98,  0}, 
                        {4.49,  0}, 
                        {6.87,  0}};

int main() {
    //std::cout << std::setprecision(2) << std::fixed; //set precision to 2 decimals
    std::cout<<"Hello World"<<endl;
    
    int mainSel=3;
    
    //main menu loop
    do
    {
       mainMenu();  //print out the main menu
       std::cin>>mainSel;
       
       switch(mainSel)
       {
           case 1:
               transactions();
               break;
           case 2:
               mainSel = 2;
               break;
           case 3:
               mainSel = 3;
               break;
           default:
               std::cout<<"\n**Please pick option (1, 2, or 3)**\n";
               mainSel = 4;                       
       }
       
    }while (mainSel!=3); //end of Retail Sales loop

    
    return 0;
}

void mainMenu()
{
    system("cls");
    std::cout<<"--[Retail Sales - MAIN MENU]--"<<endl;
    std::cout<<"1. Enter Products Sold"<<endl;
    std::cout<<"2. Display Total Retail Value"<<endl;
    std::cout<<"3. Exit\n"<<endl;
    std::cout<<"Selection:";
}

void transactions()
{
    int prodNum;
    system("cls");
    std::cout<< "--[ Sales Transactions] --"<<endl;
    std::cout<< "\nEnter product number (1-5) or -1 to quit: ";
    std::cin>>prodNum;
    
}