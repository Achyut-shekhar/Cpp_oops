#include <iostream>
#include <string>
using namespace std;

class Invoice
{
private:
  // Data members
  string partNumber;
  string partDescription;
  int quantity;
  double pricePerItem;

public:
  // Constructor to initialize the instance variables
  Invoice(string partNum, string partDesc, int qty, double price)
  {
    partNumber = partNum;
    partDescription = partDesc;
    setQuantity(qty);
    setPricePerItem(price);
  }

  // Set and Get methods for partNumber
  void setPartNumber(string partNum)
  {
    partNumber = partNum;
  }
  string getPartNumber() const
  {
    return partNumber;
  }

  // Set and Get methods for partDescription
  void setPartDescription(string partDesc)
  {
    partDescription = partDesc;
  }
  string getPartDescription() const
  {
    return partDescription;
  }

  // Set and Get methods for quantity
  void setQuantity(int qty)
  {
    if (qty > 0)
    {
      quantity = qty;
    }
    else
    {
      quantity = 0; // If quantity is not positive, set it to 0
    }
  }
  int getQuantity() const
  {
    return quantity;
  }

  // Set and Get methods for pricePerItem
  void setPricePerItem(double price)
  {
    if (price > 0)
    {
      pricePerItem = price;
    }
    else
    {
      pricePerItem = 0.0; // If price is not positive, set it to 0.0
    }
  }
  double getPricePerItem() const
  {
    return pricePerItem;
  }

  // Method to calculate the invoice amount
  double getInvoiceAmount() const
  {
    return quantity * pricePerItem;
  }
};

// Test application named invoiceTest
int main()
{
  // Creating an Invoice object and initializing it
  Invoice invoice("12345", "Hammer", 10, 15.50);

  // Displaying invoice details
  cout << "Part Number: " << invoice.getPartNumber() << endl;
  cout << "Part Description: " << invoice.getPartDescription() << endl;
  cout << "Quantity: " << invoice.getQuantity() << endl;
  cout << "Price per Item: $" << invoice.getPricePerItem() << endl;
  cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

  // Update and test again
  invoice.setQuantity(-5);         // Invalid quantity, should set to 0
  invoice.setPricePerItem(-12.50); // Invalid price, should set to 0.0
  cout << "\nAfter setting invalid values:" << endl;
  cout << "Quantity: " << invoice.getQuantity() << endl;
  cout << "Price per Item: $" << invoice.getPricePerItem() << endl;
  cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

  return 0;
}
