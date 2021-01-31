#include <iostream>
#include <string>
using namespace std;

int main()
{
      //Declaring of  integer variables
    int quantity, id, printer=20, phone=15, table= 30;
    //Declaring of double variable
    double vat= 0.12;
    //Declaring of string variables
    string itemBought,nCustomer,iContinue="yes";
     //Displaying the welcome screen
    cout << "---Welcome To INF Supermarket--- \n";
     // Collecting user data
    cout<< "Enter your name: ";
    cin>> nCustomer;

    cout<< "Enter your ID Number \n";
    cin>>id;

    cout<< "Items been sold are: Printer, phone and Table \n";
      //Performing a repetition in case a user wants to purchase another item after purchasing the first item
    while(iContinue=="yes" || iContinue=="Yes" || iContinue=="YES"){




    cout<< "Enter what you want to buy \n";
    cin>>itemBought;
    cout<< "How many do you want to buy \n";
      cin>>quantity;
      int totalCost;
      double vatAmount ,totalAmountPaid,totalAmount;
      float balance;
     //Calculations on a particular item selected by the user
      if(itemBought=="printer"){

        totalCost= printer * quantity;

        totalAmount= totalCost +(vat*totalCost);
        cout<< "Total amount to pay $"<<totalAmount<<endl;
        vatAmount= vat*totalCost;

      }
 else if(itemBought=="phone"){
    totalCost= phone * quantity;
    totalAmount= totalCost +(vat*totalCost);
    cout<< "Total amount to pay is $"<<totalAmount<<endl;
    vatAmount= vat*totalCost;
 }
 else if(itemBought=="table")
{
     totalCost= table * quantity;
     totalAmount= totalCost+ (vat*totalCost);
     cout<< "Total amount to pay is $"<<totalAmount<<endl;
     vatAmount= vat*totalCost;
     }
  //Takes in the amount the use is going to be pay for the items
 cout<<"Enter amount to be paid $\n";
 cin>> totalAmountPaid;
 balance= totalAmountPaid-totalAmount;
 if(totalAmountPaid>totalAmount)
 {
     cout<< "Your balance is $"<<balance<<endl;
 }
 else{
    cout<< "Your money is not up to the item purchased"<<endl;
 }

//Displaying the receipt on all the transactions and the details of the individual.
 cout<< "RECEIPT FOR ITEMS PURCHASED"<<endl;
 cout<< "==========================="<<endl;
 cout<< "Name of the customer: "<<nCustomer<<endl;
 cout<< "The unique ID: "<<id<<endl;
 cout<< "Item Bought: "<<itemBought<<endl;
 cout<< "Quantity bought: "<<quantity<<endl;
 cout<< "Vat Amount: $"<<vatAmount<<endl;
 cout<< "Total Cost: $"<<totalAmount<<endl;
 cout<< "Total amount paid: $"<<totalAmountPaid<<endl;
 cout<< "Balance / Change: "<<balance<<endl;
 cout<< "Would you like to buy anything else? "<<endl;
 cout<< "Enter Yes to continue and No to quit"<<endl;
 cin>>iContinue;
    }
 cout<< "Thank You for transacting with us: Message"<<endl;

     return 0;
}

