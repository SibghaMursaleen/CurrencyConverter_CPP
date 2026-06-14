#include<iostream> // including input and output libaray 
#include "currency.h" //  including my own currency libaray
#include<cmath> // including maths libaray to perform basic operation2s
#include<iomanip> // including libaray for using certain predefined functions
#include<fstream> // including fstream libaray for file 
#include<cstring> // including string libaray
//#include <cstdlib> // including libaray for for performing input and output
#include <stdio.h> // including libaray for 
using namespace std; // using standard libaray used to print the strings, integer, character 

int main() // main function
{ // main function body opens
    string currency; // string currency
    bool open=false; // bool condition
    ofstream myFile; // creating myFile
    myFile.open("CURRENCY DATA.doc"); // opening file to store data
    cout<<setw(170)<<setfill('*')<<"*"<<endl; // using predefined function 
    cout<<"                                                             CURRENCY CONVERTER               \n"<<endl; // statement 1
    cout<<setw(170)<<setfill('*')<<"*"<<endl; // using predefined function
	cout<<"Salam Pakistan ! Hope you all are doing well. I am Currency Converter. I am here to help you ! \n " << endl; // statement 2
	cout<<"My job is to convert from Pakistani Currency to the top countries listed below. \n " << endl; // statement 3
	cout<<"Before starting kindly read the instructions below: \n " << endl; // statement 5
	cout<<"1. Firstly input your name to start the program. \n"<<endl; // output statement
	cout<<"2. Than you will input the amount of Pakistani rupees you want to convert. \n " << endl; // statement 6 
	cout<<"3. Lastly, you would input the Character's listed below to convert  the Pakistani ruppess to the desired currency. \n " << endl; // statement 7
	cout<<"(a) To USD press 'd' (b) to Euro press 'e' (c) to Riyal press 'r' (d) to Denmark Dkk press 'k' (e) To British Pound press 'p' \n"<<endl; // statement 8
	cout<<"(f) to Turkey lira press 't' (g) to Canadian Dollar press 'c' (h) to Norwegian Kroner press 'n' (i) to Indian rupees press 'I' (j) to Australian dollar press 'u' \n "<<endl; // statement 9
	cout<<"(k) to Japanese Yen press 'j' (l) to Georgian Lari press 'g' (m) to French Francs press 'f' (n) to Emirati Dirhams press 'a' (o) to Swedish Kronor press 'w' \n "<<endl; // statement 10
	cout<<"(p) to Chinese Yuan Renminbi press 'y' (q) to Qatari rials press 'q' (r) to Iraqi dinars press 'x' \n "<<endl; // statement 11
    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
	
	string start; // using string to input name to start the program
	cout<<" Enter your name to start: "; // statement 12
	getline(cin,start); // inputing name 
	cout<<endl<<endl;
	cout<<setw(170)<<setfill('*')<<"* \n "<<endl; // using predefined function
	char convert; // declaring char 
	cout<<" Welcome "<<start<<" ! "<<" Kindly input the money you want to convert: \n "<<endl; // statement 13
	double result1 = 0; // declaring varaible
	double pkr; // declaring variable to enter the pakistani currency 
	do{
	cout << " Input the rupees you want to convert:  " ; // statement 14
	cin >> pkr; // receving input
	cout << " You entered " << pkr << " Rs: "<<endl; // statement 15
//	if(pkr<=0){
//		
//	}
	while(pkr<=0){  // while condition
		if(pkr==-2) // if statment
		{
			cout<<"\n\n Program terminated. Thank you for using Currency converter! \n "<<endl; // output
			if(open) // if statment
 				{
 					cout<<" File created .... "<<endl; // output if file created
				 }
			 else // else condition
				 {
				 	cout<<"File not created "<<endl; // output if else condition becomes true 
				 }
			exit(0); // exit
		}
		else // else condition
		{
		cout<<"INVALID RUPEES! kindly input the money again: "; // output
		cin>>pkr; // cin pkr 
		}
	}

	//char convert; // declaring character to convert the currency 
	
	cout << " Input the Character from above instructions to convert to your desired currency: " ; // statement 16
	cin >> convert; // receving input to convert the curreny from PKR to the above mentioned desired currencies 
	cout<<" You pressed the "<<convert<<" key !"<<endl; // output
    convert=toupper(convert); // using predefined function to convert the lowercase alphabet to uppercase 
//}
//while(1);
	switch (convert) // switch case
	{
	case 'D':
		currency ="Dollar";
		result1 = dollar(pkr); // calling function
		cout << " Yor have converted PKR ( Pakistani Rupees ) to USD ( United State Dollar ): \n" << endl; // statement 17
		cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout << " And the results are:  "<<result1<<" $ " <<endl<<endl; //  results 
		cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program !  \n"<<endl; // results 
	    break; // breaking case 1
	    
	case 'E': // case 2: to convert PKR to EUROS
		currency="Euro";  
		result1 = euro(pkr); // calling function
		cout << " Yor have converted PKR ( Pakistani Rupees ) to Euro ( Currency of Europe ): \n" << endl; // statement 18
		cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout << " And the results are:  " << result1<<endl<<endl; // results
		cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
        break; // breakig case 2
        
	case 'R': // case 3 : to convert PKR to RIYALS
	currency="Riyals";
		result1 = riyals(pkr); // calling function
		cout << " Yor have converted PKR ( Pakistani Rupees ) to Saudi Arabian Riyals ( Riyals  ): \n" << endl; // statement 19
		cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout << " And the results are:  " << result1<<" SAR "<<endl<<endl; // results 	
    	cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
        break; // breaking case 3
        
	case 'K': // case 4 : to convert PKR to DKK
	currency="Danish Kroner";
		result1 = DKK(pkr); // call function
		cout << " Yor have converted PKR ( Pakistani Rupees ) to Denmark ( Danish Kroner (DKK) ): \n" << endl; // statement 20
		cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout << " And the results are:  " << result1<<" kr "<<endl<<endl; //  results 	
	//	cout<<" Thank You "<<start<<" for using currency converter ! \n "<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
        break; //  breaking case 4
        
	case 'P': // case 5 : to convert PKR to British Pounds 
		currency = "Pounds";
	    result1 = britishpound(pkr); // calling function 
		cout<<" You have converted PKR ( Pakistani Rupees ) to British Pounds ( Pounds ) : \n"<<endl; // statement 21
		cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are:  "<<result1<<endl<<endl; // results
		//cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
		cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 5
		
	case 'T': // case 6 : To convert PKR to Turkey lira
		currency = "Turkian Lira";
	    result1 = TRY(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to Turkey lira (TRY) : \n"<<endl; // statement 22
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are:  "<<result1<<" ₺ "<<endl<<endl;; // results 
	//	cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 6
		
	case 'C': // case 7: PKR ot Canadian dollar 
		currency = "Canadian Dollar";
		result1 = CanDollar(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to Canadian Dollars : \n"<<endl; // statement 23
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" C$ "<<endl<<endl; // results
		//cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
		cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 7
		
	case 'N': // case 8: PKR to norwegian kroner
		result1 = norway(pkr); // caling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to Norwegian Kroner : \n"<<endl; // statement 24
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are:  "<<result1<<" kr "<<endl<<endl; // results
		//cout<<" Thank You "<<start<<" for using currency converter ! \n "<<endl; // results
		cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 8
		
	case 'I': // case 9: PKR to indian rupees
		currency = "Indian Rupees";
		result1 = INR(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to Indian Rupees : \n"<<endl; // statement 25
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" ₹ "<<endl<<endl; // results
		//cout<<" Thank You "<<start<<" for using currency converter ! \n "<<endl; // results
		cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 9
		
	case 'U': // case 10: PKR to Austrialina Dollar
	currency = "Australian Dollar";
		result1 = Ausdollar(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to australian dollar : \n"<<endl; // statement 26
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" A$ "<<endl<<endl; // results
	//	cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 10
		
	case 'J': // case 11: PKR to Japanese Yen
		currency = "Japanese Yen";
		result1 = japan(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to Japan (Japanese Yen) : \n"<<endl; // statemrnt 27
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" ¥ " <<endl<<endl; // results
	//	cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 11
		
	case 'G': // case 12: PKR to Georgian Laro
	currency = "Georgian Laro";
		result1 = georgia(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to Georgia (Georgian Lari) : \n"<<endl; // statement 28
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" ლ "<<endl<<endl; // results
	//	cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 12
		
	case 'F': // case 13: PKR tp French Francs 
		currency = "French Frans";
		result1 = france(pkr); // caling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to France (French Francs) : \n"<<endl; // statement 29
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" ₣ "<<endl<<endl; // results
	//	cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 13
		
	case 'A': // case 14: PKR to Emirati Dirhams
		currency = "Emirati Dirhams";
		result1 = UAE(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to UAE (Emirati Dirhams) \n"<<endl; // statement 30
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" د.إ "<<endl<<endl; // results
		//cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
		cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 14
		
	case 'W': // case 15: PKR to Swedish kronor
	currency = "Swedish kronar";
		result1 = SEK(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to Swedish (Swedish Kronor) \n "<<endl; // statement 31
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
		cout<<" And the results are: "<<result1<<" kr "<<endl<<endl; // results
	//	cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 15 
		
	case 'Y': // case 16: PKR to Chinese Yuan Renminbi
	currency = "Yuan Renminbi";
		result1 = CNY(pkr); // calling function
	    cout<<" You have converted PKR ( Pakistani Rupees ) to China (Chinese Yuan Renminbi) \n"<<endl; // statement 32
	    cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
	    cout<<" And the results are: "<<result1<<" ¥ "<<endl<<endl; // results
	    //cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 16 
		
	case 'Q': // case 17: PKR to Qatari rials
		currency = "Qatari rials";
		result1 = qatar(pkr); // calling function
		cout<<" You have converted PKR ( Pakistani Rupees ) to Qatar (Qatari Rials) \n"<<endl; // statement 33
		cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
	    cout<<" And the results are: "<<result1<<" QR "<<endl<<endl; // results
	    //cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 17 
		
	case 'X': // case 18: PKR to iraqi dinar
	currency = "Iraqi dinar";
		result1 = iraq(pkr); // calling function
		cout<<" You have converted PKR ( Pakistani Rupees ) to IRAN (Iraqi Dinars) \n"<<endl; // statement 34
		cout<<setw(170)<<setfill('*')<<"* \n "<<endl; //using predefined function
	    cout<<" And the results are: "<<result1<<" IQR "<<endl<<endl; // results
	   // cout<<" Thank You "<<start<<" for using currency converter ! \n"<<endl; // results
	    cout<<" Thank You "<<start<<" for using currency converter ! If you further want to convert the money kindly input otherwise press -2 to terminate the program ! "<<endl;
		break; // breaking case 18
		
	default: // default statement 
cout<<"NOT AVAILABLE: "<<endl;  // output 
	}
		
		myFile<<" Name of Converter "<< start <<endl; // storing data in file
		myFile<<" You entered " << pkr << " Rs "<<endl;
		myFile<<" You have choose to converte Pkr to " << currency <<endl;
		myFile<<" Your Converted amount is "<<result1<<endl<<endl<<endl;
		
		open=true; // bool condition 
		
}
 
	while(1); // while condition true for all 
//default:
//cout<<"NOT AVAILABLE: "<<endl;
myFile.close(); // closing file

} // end 


  
 