#include<iostream>
using namespace std;

class Customers{
  public:
    int id,age,mobile_number;
    string telecome_brand_name, city, cust_name, simcard_validity;
    
  public:
    void setcust(){
    	cout << "Enter customers ID: ";
    	cin >> id;
    	cout << "Enter customers name: ";
    	cin >> cust_name;
    	cout << "Enter customers age: ";
    	cin >> age;
    	cout << "Enter customers Telecom Brand Name: ";
    	cin >> telecome_brand_name;
    	cout << "Enter customers Mobile Number: ";
    	cin >> mobile_number;
    	cout << "Enter customers city: ";
    	cin >> city;
    	cout << "Enter customers SimCard Validity : ";
    	cin >> simcard_validity;
    }
    
    void getcust(){
cout << "customers  ID: " << id << endl << "customers  name: " << cust_name << endl <<" customers age " << age <<
 endl << "customers telecome_brand_name"<< telecome_brand_name << endl << "customers  mobile_number: " 
	<< mobile_number << endl << "customers  city: " << city <<  "customers  simcard_validity: " << simcard_validity << endl;
    }
};

int main(){
    Customers cust[5];

    for(int i = 0; i < 5; i++){
    	cout << "Enter Customers information  " << i+1 << ": " << endl;
    	cust[i].setcust();
    	cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
    	cout << " Customers information " << i+1 << ": " << endl;
    	cust[i].getcust();
    	cout << endl;
    }
     for(int i = 0; i < 5; i++){
    	cout << " Customers information " << i+1 << ": " << endl;
    	cust[i].getcust();
    	cout << endl;
    }
     for(int i = 0; i < 5; i++){
    	cout << " Customers information " << i << ": " << endl;
    	cust[i].getcust();
    	cout << endl;
	}
	for(int i = 0; i < 5; i++){
    	cout << " Customers information " << i << ": " << endl;
    	cust[i].getcust();
    	cout << endl;
	}
}
