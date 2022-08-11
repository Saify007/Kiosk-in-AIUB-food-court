#include <iostream>
#include <iomanip>

using namespace std;

class Food
{
string foodType;
double cost;
public:
Food(string foodType, double cost)
{
this->foodType = foodType;
this->cost = cost;
}
string getFoodType() { return foodType; }
double getCost() { return cost; }
void printOrder()
{
cout << "Price: " << fixed << setprecision(2) << cost << ", Item: " << foodType << endl;
}
};
class Drink : public Food
{
string size;
public:
Drink(string foodType, double cost, string size) : Food(foodType, cost)
{
this->size = size;
}
string getSize() {
           return size;
       }
void printOrder()
{


cout << "Price: " << fixed << setprecision(2) << getCost() << ", Item: " << size << " " << getFoodType() << endl;
}
};

int main()
{
cout<<"___________***_________WELCOME ____________***________________"<<endl<<endl<<endl;




cout<<"____________________1.___PRICE COUNT IN (BDT)_______________"<<endl<<endl<<endl;


cout<<"___2.___PRESS ONLY (INSIDE FIRST BRACKETS SMALL LETTER)______"<<endl<<endl<<endl;


cout<<"_______3.___DON'T MISTAKE FOLLOW THE RULE PROPERLY & ENJOY_______________"<<endl<<endl<<endl;




char foodType, cupSize, drinkType;
Food *food[100];
int count = 0;
double total;
while(true)
{
cout << "Would you like to order a (d)rink, (b)urger or (c)heck out?" << endl;
cin >> foodType;
switch(foodType)
{
case 'd':
cout << "Do you want (c)oke, (s)prite or (j)uice?" << endl;
cin >> drinkType;
cout << "What size cup? (l)arge, (m)edium or (s)mall" << endl;
cin >> cupSize;
if(drinkType == 'c')
if(cupSize == 'l')
food[count] = new Drink("large coke", 55, "large");
else if(cupSize == 'm')
food[count] = new Drink("medium coke", 35, "medium");
else
food[count] = new Drink("small coke", 25, "small");
else if(drinkType == 's')
if(cupSize == 'l')
food[count] = new Drink("large sprite", 55, "large");
else if(cupSize == 'm')
food[count] = new Drink("medium sprite", 35, "medium");
else
food[count] = new Drink("small sprite", 25, "small");
else if(drinkType == 'j')
if(cupSize == 'l')
food[count] = new Drink("large juice", 55, "large");
else if(cupSize == 'm')
food[count] = new Drink("medium juice", 35, "medium");
else
food[count] = new Drink("small juice", 25, "small");
count++;
break;
case 'b':
cout << "Do you want to have (f)ish, (b)eef, (c)hicken or ch(e)ese?" << endl;
cin >> foodType;
if(foodType == 'f')
food[count] = new Food("fish burger", 250);
else if(foodType == 'b')
food[count] = new Food("beef burger", 350);
else if(foodType == 'c')
food[count] = new Food("chicken burger", 300);
else
food[count] = new Food("cheese burger", 200);
count++;
break;
case 'c':
for(int i = 0; i < count; i++)
{
food[i]->printOrder();
total += food[i]->getCost();
}
cout << "Total: " << fixed << setprecision(2) << total << endl;
return 0;
}
}
}
