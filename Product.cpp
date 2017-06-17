/********************************************************
 *
 *  Project :  m4a - Retail Sales
 *  File    :  Product.cpp
 *  Name    :  Michael Dey
 *  Date    :  14 June, 2017
 *
 *  Description : (Narrative desciption, not code)
 *
 *    1) What is the purpose of the code; what problem does the code solve.
 *          This file holds all the items/functions a "product" has and can do
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

#include "Product.h"

//constructor
Product::Product()
{
    price = 0;
    numberOfOrders = 0;
}

/****************************************************
 * Method     : getPrice()
 *
 * Purpose    : returns price of the product
 *
 * Parameters : none
 *
 * Returns    : this method returns the double value of price
 *
 ****************************************************/
double Product::getPrice()
{
    return price;
}

/****************************************************
 * Method     : setPrice()
 *
 * Purpose    : sets price of the product
 *
 * Parameters : double p - the price of the Product
 *
 * Returns    : this function does not return a value
 *
 ****************************************************/
void Product::setPrice(double p)
{
    price = p;
}

/****************************************************
 * Method     : getTotal()
 *
 * Purpose    : returns the total of all the products added together
 *
 * Parameters : none
 *
 * Returns    : this method returns the double value of price * number of orders
 *
 ****************************************************/
double Product::getTotal()
{
    return price * numberOfOrders;
}

/****************************************************
 * Method     : getSubTotal()
 *
 * Purpose    : returns subTotal of the product based on given amount
 *              This calculates the price of one order based on order size
 *
 * Parameters : amount - number of objects to calculate price of
 *
 * Returns    : this method returns the double value of amount * price
 *
 ****************************************************/
double Product::getSubTotal(int amount)
{
    return amount * price;
}

/****************************************************
 * Method     : addOrder()
 *
 * Purpose    : This method takes a number and adds that to the number of Orders
 *
 * Parameters : int amount - the number of Products in the order
 *
 * Returns    : this method does not return a value
 *
 ****************************************************/
//adds to the total amount of orders as long as orders is larger than 0
void Product::addOrder(int amount)
{
    if (amount >=0) numberOfOrders+=amount;
}

/****************************************************
 * Method     : getNumberOfOrders()
 *
 * Purpose    : returns the number of orders the Product object has in total
 *
 * Parameters : none
 *
 * Returns    : this method returns the double value of numberOfOrders
 *
 ****************************************************/
//returns the number of orders
 double Product::getNumberOfOrders()
 {
     return numberOfOrders;
 }

