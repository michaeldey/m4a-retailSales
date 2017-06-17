/********************************************************
 *
 *  Project :  m4a - Retail Sales
 *  File    :  Product.h
 *  Name    :  Michael Dey
 *  Date    :  14 June, 2017
 *
 *  Description : (Narrative desciption, not code)
 *
 *    1) What is the purpose of the code; what problem does the code solve.
 *          This file prototypes the Product Object
 *    2) What data-structures are used.
 *          double
 *    3) What algorithms, techniques, etc. are used in implementing the data structures.
 *          This uses getters and setters and basic math
 *    4) What methods are implemented (optional).
 *          double getPrice();              //returns price of the product
            void setPrice(double);          //sets the price of the product
            double getTotal();              //returns the total of all the products added together
            double getSubTotal(int amount); //calculates an price of a particular order
            void addOrder(int amount);      //adds to the total amount of orders
            double getNumberOfOrders();     //returns the number of orders
 *
 *
 * *******************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

class Product
{
    public:
        Product(); //constructor
        double getPrice();  //returns price of the product
        void setPrice(double);    //sets the price of the product
        double getTotal();  //returns the total of all the products added together
        double getSubTotal(int amount); //calculates an price of a particular order
        void addOrder(int amount); //adds to the total amount of orders
        double getNumberOfOrders();//returns the number of orders
    private:
        double price;       //price of the product
        int numberOfOrders; //keeps track of how many products have been ordered
};
