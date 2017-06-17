/********************************************************
 *
 *  Project :  m4a - Retail Sales
 *  File    :  RetailSalesApp.cpp
 *  Name    :  Michael Dey
 *  Date    :  14 June, 2017
 *
 *  Description : (Narrative desciption, not code)
 *
 *    1) What is the purpose of the code; what problem does the code solve.
 *          This code adds, and keeps track of retail items
 *    2) What data-structures are used.
 *          menu items
 *    3) What algorithms, techniques, etc. are used in implementing the data structures.
 *          I created a Product Object, which holds each product's information
 *          I then used an array of Products to keep track of items and item information
 *    4) What methods are implemented (optional).
 *          void mainMenu() -- builds main menu text
 *          void transactions() -- builds a transactions menu and gets info about that from user
 *          void summary() -- builds a summary of all products' sales
 *
 *
 * *******************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

#include "Product.cpp"

using namespace std;

//function prototypes
void mainMenu();
void transactions();
void summary();

//initialize the Product Object array
Product myProduct[5];

int main() {
    std::cout << std::setprecision(2) << std::fixed; //set precision to 2 decimals


    //set up the Product object array
    myProduct[0].setPrice(2.98);
    myProduct[1].setPrice(4.50);
    myProduct[2].setPrice(3.98);
    myProduct[3].setPrice(4.49);
    myProduct[4].setPrice(6.87);

    std::cout<<"Retail Sales"<<endl;

    int mainSel=3;//initialize main selection with 3 as default

    //main menu loop
    do
    {
       mainMenu();  //print out the main menu
       std::cin>>mainSel; //get main menu selection from user

       switch(mainSel)
       {
           case 1:
               transactions();
               break;
           case 2:
               summary();
               break;
           case 3:
               mainSel = 3; //redundant but should cause exit of program
               break;
           default:
               std::cout<<"\n**Please pick option (1, 2, or 3)**\n";
               mainSel = 4;
       }

    }while (mainSel!=3); //end of Retail Sales loop


    return 0;
}//end of main

/****************************************************
 * Method     : mainMenu()
 *
 * Purpose    : This function displays the main menu options
 *
 * Parameters : none
 *
 * Returns    : This method does not return a value.
 *
 ****************************************************/
void mainMenu()
{
    system("cls");
    std::cout<<"--[Retail Sales - MAIN MENU]--"<<endl;
    std::cout<<"1. Enter Products Sold"<<endl;
    std::cout<<"2. Display Total Retail Value"<<endl;
    std::cout<<"3. Exit\n"<<endl;
    std::cout<<"Selection: ";
}

/****************************************************
 * Method     : transactions()
 *
 * Purpose    : This method allows user to input transactions continuously
 *
 * Parameters : none
 *
 * Returns    : This method does not return a value.
 *
 ****************************************************/
void transactions()
{
    int prodNum = -1; //initialize with -1 as default escape value
    double quant;   //holds quantity of items sold in the transaction

    system("cls"); //clear screen
    std::cout<< "--[ Sales Transactions] --"<<endl;

    //loop until user selects -1 to exit
    do {
        //get product number
        std::cout<< "\nEnter product number (1-5) or -1 to quit: ";
        std::cin>>prodNum;

        if (prodNum == -1) break; //exit out of loop

        //switch statement to determine retail price for each product
        //case 1 - 5 are all the same, so I only wrote it once
        switch(prodNum)
            {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                //get quatity sold
                std::cout<<"\nEnter quantity sold: ";
                std::cin>>quant;

                //display retail value of individual sale
                //we subtract 1 from prodNum because product list starts at 1, not 0
                std::cout<<"\nRetail value = " << myProduct[prodNum-1].getSubTotal(quant)<<endl;

                //add quantity to product object
                //we subtract 1 from prodNum because product list starts at 1, not 0
                myProduct[prodNum-1].addOrder(quant);
                std::cout<<"Product " << prodNum << " is now totaled at: " << myProduct[prodNum-1].getTotal()<<endl;
                break;
            //catch if user doesn't enter correct number
            default:
                std::cout<<"Please Enter a number between 1 and 5 or -1 to quit";
            }
    }while (prodNum != -1);
}

/****************************************************
 * Method     : summary()
 *
 * Purpose    : This method prints out a summary of all items and quantities sold
 *              It also prints out a total cost of all orders
 *
 * Parameters : none
 *
 * Returns    : This method does not return a value.
 *
 ****************************************************/
void summary()
{
    double allTotals =0; //this value will keep track of all totals from all products

    //print to screen
    std::cout<<"--[ Sales Summary ] --\n"<<endl;
    std::cout<<"Product #\tQty Sold\tTotal Sales"<<endl;

    //loop through all objects and display their number of orders and their order totals
    for (int i = 0; i<5; i++)
    {
        std::cout<<setw(5)<<i+1<<setw(17)<<myProduct[i].getNumberOfOrders()<<setw(17)<<myProduct[i].getTotal()<<endl;
        allTotals+=myProduct[i].getTotal(); //calculate allTotals
    }
    std::cout<<"\nTotal retail value of all products sold: " <<allTotals<<endl;
    system("pause");
}
