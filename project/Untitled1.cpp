#include <iostream>
#include<string>
#include<fstream>
#include<stdio.h>
#include<sstream>
#include<stdlib.h>
#include<iomanip>
// koi khass kaam nahi . support for c++11

using namespace std;
struct customer{
	char roomno[100];
	char name[100];
	int age;
	char adress[100];
	char idcard[100];
	};

// create files function prototype


void createfilesautomic();

// function prototypes to check available or not room
	
void showavailable();
void showavailableexecutive();
void showavailabledeluxe();


//function prototypes to return value after checking availability



int roomchecker(int a);
int roomcheckerexecutive(int a);
int roomcheckerdeluxe(int a);




//function prototypes to do booking in all classes




void dobooking();
void dobookingdeluxe();
void dobookingexecutive();




// prototypes to show all available rooms




void allavailable();
void allavailableexecutive();
void allavailabledeluxe();



// function prototypes to show all records of rooms of every class



void showrecord();
void showrecordexecutive();
void showrecorddeluxe();


// the legendry show menu function


void showmenu();


//prototypes to choose choices for classes


void showchoicesforcheckavailable();
void showchoicesfordobooking();
void showchoicesforallavailable();
void showchoicesforrecord();
void showchoicesfordelete();
void showchoicesforbackup();
void showchoicesforrestorebackup();






//function prototypes for data delete


void deletedata();
void deletedataexecutive();
void deletedatadeluxe();



//function prototypes for data backup


void databackup();
void databackupexecutive();
void databackupdeluxe();

//prototype to backup all data function
void databackupall();



//prototype to delte all present data
void deleteall();

//prototype to delete all backupdata

void deleteallbackup();




		
	void restorebackupdeluxe();
	void restorebackupexecutive();
	void restorebackup();
	void restoreall();


//new functuions 
void showchoicesforspecific();

void showchoicesforspecificpinto();
void showchoicesforspecificeinto();
void showchoicesforspecificdinto();

void showspecificpresidential();
void showspecificexecutive();
void showspecificdeluxe();

void showspecificdname();
void showspecificdidcard();
void showspecificdadress();

void showspecificename();
void showspecificeidcard();
void showspecificeadress();

void showspecificpname();
void showspecificpidcard();
void showspecificpadress();

//new 2

void invalidinput();

//main starts from here 



int main() {
	
	//only menu function is called here
	
	createfilesautomic();
	
	
	cout<<"============================================> WELCOME <===================================================="<<endl;
	
	
	
	
	
	
showmenu();	
	return 0;
}








void showmenu(){
	
	
	
		//uper menu barr
	cout<<" _________________________________________________________________________________________________________________"<<endl;
	cout<<"|*****************************************************************************************************************|"<<endl;
	cout<<"|_________________________________________________________________________________________________________________|"<<endl;
cout<<" "<<endl;
	cout<<"\t\t\t\t\t\tMAIN MENU\t\t\t\t\t\t"<<endl;
	cout<<" "<<endl;
	cout<<" _________________________________________________________________________________________________________________"<<endl;
	cout<<"|*****************************************************************************************************************|"<<endl;
	cout<<"|_________________________________________________________________________________________________________________|"<<endl;
	cout<<""<<endl;cout<<""<<endl;
	
	cout<<" ____________________________________"<<endl;
	cout<<"|Hotel name:- Southern ocean Lodge   |"<<endl;
	cout<<"|____________________________________|"<<endl;
	cout<<"|adress:-shutter island ,australia   |"<<endl;	
	cout<<"|____________________________________|"<<endl;
	//login goto k liye label
	back1:
		//end
	
	
	
	
	//asking to enter as manager or user
	
	back:
	int login;
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
    cout<<"\t\t\t\t\t|press 1 to enter as user    :       |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 2 to enter as manager :       |"<<endl;	
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	
	cin>>login;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	system("cls");
	
	//entering menu for user
	
	
	
	
	if(login==1){
		
	int ok;
		//showing menu for user
		
		
		


cout<<""<<endl;
cout<<""<<endl;
cout<<"__________________________________________________________________________________________________________________________"<<endl;
cout<<""<<endl;
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
    cout<<"\t\t\t\t\t|press 1 to check available room   : |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 2 to for all available rooms: |"<<endl;	
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 3 to book a room            : |"<<endl;	
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
    cout<<"\t\t\t\t\t|press 4 to go back                : |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 5 to exit                   : |"<<endl;	
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	
cout<<""<<endl;cout<<""<<endl;
		cin>>ok;
		
		if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	system("cls");
		
		
		// going in choices for classes by user choice 
		
		
		
		
		switch (ok){
			
			case 1:
				showchoicesforcheckavailable();
				break;
			case 2:
				showchoicesforallavailable();
				break;
			case 3:
				showchoicesfordobooking();
				break;
		   case 4:
		   	goto back;
		   	case 5:
		   		exit(0);
		   	default:
		   		invalidinput();
		   		 break;
		}
			
		
		
		
		// going in manager menu
		
		
		
		
	}else if(login==2){
		
		
		int pass;
		do{
		
		
		
		//taking pass which is 12345
		
		cout<<"_____________________________________"<<endl;
		cout<<"                                     |"<<endl;
		cout<<" _________________                   |"<<endl;
		cout<<"| enter password  |                  |"<<endl;
		cout<<"|_________________|                  |"<<endl;
		cout<<"                                     |"<<endl;
		cout<<"_____________________________________|"<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cin>>pass;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			
		}while(pass!=12345);
		system("cls");
		int xoxo;

	cout<<"\t\t\t\t\t ____________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 1 to see customer record    : |"<<endl;	
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 2 to see specific room record |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 3 to delete all data        : |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 4 to backup data            : |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 5 to delete all backup      : |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 6 to restore backup         : |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
    cout<<"\t\t\t\t\t|press 7 to go back                : |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 8 to exit                   : |"<<endl;	
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	

cin>>xoxo;

if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
//going for choices in classes by manager choice 

system("cls");


		switch(xoxo)
		{
			case 1:
				showchoicesforrecord();
				break;
			case 2:
				 showchoicesforspecific();
				 break;
			case 3:
				showchoicesfordelete();
				break;
			case 4:
				showchoicesforbackup();	
				break;
			case 5:
			   deleteallbackup();
			   break;
			case 6:
			   	showchoicesforrestorebackup();
			   	break;
			case 7:
			   	goto back;
			   	break;
			case 8:
			   	exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			
		}
	
		
		
		// else condition for not going in user nor in manager
		
		
		
		
	}
	else{
		
		
		cout<<"U have entered a wrong number "<<endl;
		goto back1;
	}
	
	
	
	
	
	
// showmenu end
}













//function for showing classes for records to manager



void showchoicesforrecord(){
	
	int xoxo;
	cout<<"\t\t\t\t\t _______________________________________"<<endl;
	cout<<"\t\t\t\t\t| Press 1 to go for presidential suite :|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<"\t\t\t\t\t ___________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to go for executive suite :|"<<endl;
	cout<<"\t\t\t\t\t|___________________________________|"<<endl;
	cout<<"\t\t\t\t\t__________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			showrecord();
			break;
		case 2:
			showrecordexecutive();
			break;
		case 3:
			showrecorddeluxe();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}
	
}











//show available check room function choices




void showchoicesforcheckavailable(){
	
	int xoxo;
	cout<<"__________________________________________________________________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t _____________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 1 to go for presidential suite:|"<<endl;
    cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cout<<"\t\t\t\t\t| Press 2 to go for executive suite : |"<<endl;
    cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite    :  |"<<endl;
	cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			showavailable();
			break;
		case 2:
			showavailableexecutive();
			break;
		case 3:
			showavailabledeluxe();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}
	
}



//function to show class choices for all available rooms function



void showchoicesforallavailable(){
	
	int xoxo;
	cout<<"__________________________________________________________________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t _____________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 1 to go for presidential suite:|"<<endl;
    cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cout<<"\t\t\t\t\t| Press 2 to go for executive suite : |"<<endl;
    cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite    :  |"<<endl;
	cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			allavailable();
			break;
		case 2:
			allavailableexecutive();
			break;
		case 3:
			allavailabledeluxe();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}
	
}





//function to show choices of classes for doing booking




void showchoicesfordobooking(){
	
	int xoxo;
	cout<<"__________________________________________________________________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t _____________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 1 to go for presidential suite:|"<<endl;
    cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cout<<"\t\t\t\t\t| Press 2 to go for executive suite : |"<<endl;
    cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite    :  |"<<endl;
	cout<<"\t\t\t\t\t|_____________________________________|"<<endl;
		cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			dobooking();
			break;
		case 2:
			dobookingexecutive();
			break;
		case 3:
			dobookingdeluxe();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}
	
}







//function for showing class choices to check availability of room entered by user in deluxe class







void showavailabledeluxe(){
	
	//declarations
	int x;
	int i;
	int he=0;
	
	
	back2:// label for goto statment
		
		
	cout<<"_________________________________________________________________________________________________________________________"<<endl;	
	cout<<"\t\t\t\t\t _______________________________________ "<<endl;
	cout<<"\t\t\t\t\t| Enter the room no u want to check  :  |"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cin>>i;
		
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	if(i<=50)
	
	{
	
	

	fstream muneeb;
	muneeb.open("roomsbookeddeluxe.txt",ios::in);
	
	
		while(!muneeb.eof()){
			muneeb>>x;
			
			if(x==i){
				cout<<" ________________________________________"<<endl;
				cout<<"| The room is already booked  :   SORRY  |"<<endl;
				cout<<"|________________________________________|"<<endl;
				he=1;
			}
			// if room is already booked then it will make he=1 and cout shit
			
	}	
	
	muneeb.close();
	}	
	
		
	else{
		
		
				
		cout<<" ____________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range |"<<endl;
		cout<<"| we only have 50 rooms :                    |"<<endl;
		cout<<"|____________________________________________|"<<endl;
		goto back2;
		
		
		
		//if that uper condition didnt satisfied means rooms are larger the 50 then this will out shit
		
		
	}
	
	if(he==0){
		
		
		// if room no entered by user is not found then this will announce availability
		
				cout<<" _______________________________________"<<endl;
				cout<<"| CONGRATULATIONS: The room is available|"<<endl;
				cout<<"|_______________________________________|"<<endl;
				cout<<""<<endl;
				cout<<" "<<endl;
				
				
			}
			
			
			
			//asking user to do somthing further
			
			int xoxo;
			cout<<"\t\t\t\t\t _____________________"<<endl;
			cout<<"\t\t\t\t\t| enter 1 for booking |"<<endl;
			cout<<"\t\t\t\t\t|_____________________|"<<endl;
			cout<<"\t\t\t\t\t ___________________________"<<endl;
			cout<<"\t\t\t\t\t|enter 2 to enter main menu:|"<<endl;
			cout<<"\t\t\t\t\t|___________________________|"<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cin>>xoxo;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			//switvh choices for further actions
			
			
			
	switch(xoxo){
		
		case 1:
			dobookingdeluxe();
			break;
		case 2:
			showmenu();
			break;			
		   	default:
		   		invalidinput();
		   		 break;
		
	}
	
}



//function to check availabilty of room entered by user in executive class




void showavailableexecutive(){
	
	
	int x;
	int i;
	int he=0;
	back2:
		
		
		
	cout<<"_________________________________________________________________________________________________________________________"<<endl;	
	cout<<"\t\t\t\t\t _______________________________________ "<<endl;
	cout<<"\t\t\t\t\t| Enter the room no u want to check  :  |"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cin>>i;
		if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	
	if(i<=50){
	
	

	fstream muneeb;
	muneeb.open("roomsbookedexecutive.txt",ios::in);
		while(!muneeb.eof()){
			muneeb>>x;
			
			if(x==i){
				cout<<" ________________________________________"<<endl;
				cout<<"| The room is already booked  :   SORRY  |"<<endl;
				cout<<"|________________________________________|"<<endl;
				he=1;
				goto back2;
			}
			
			
	}
	muneeb.close();	}	
	
		
	else{
		
		
				
		cout<<" ____________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range |"<<endl;
		cout<<"| we only have 50 rooms :                    |"<<endl;
		cout<<"|____________________________________________|"<<endl;
		goto back2;
		
		
		
		
		
		
	}
	
	
	
	if(he==0){
				
				
				cout<<" _______________________________________"<<endl;
				cout<<"| CONGRATULATIONS: The room is available|"<<endl;
				cout<<"|_______________________________________|"<<endl;
				cout<<""<<endl;
				cout<<" "<<endl;
			}
			
			
			
			
			int xoxo;
			cout<<"\t\t\t\t\t _____________________"<<endl;
			cout<<"\t\t\t\t\t| enter 1 for booking |"<<endl;
			cout<<"\t\t\t\t\t|_____________________|"<<endl;
			cout<<"\t\t\t\t\t ___________________________"<<endl;
			cout<<"\t\t\t\t\t|enter 2 to enter main menu:|"<<endl;
			cout<<"\t\t\t\t\t|___________________________|"<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cin>>xoxo;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			
			
	switch(xoxo){
		
		case 1:
			dobookingexecutive();
			break;
		case 2:
			showmenu();
			break;		
		   	default:
		   		invalidinput();
		   		 break;
		
	}
	
}




//function to check availabilit of room in  predentioal class entered by user



void showavailable(){
	
	
	int x;
	int i;
	int he=0;
	back2:
	cout<<"_________________________________________________________________________________________________________________________"<<endl;	
	cout<<"\t\t\t\t\t _______________________________________ "<<endl;
	cout<<"\t\t\t\t\t| Enter the room no u want to check  :  |"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cin>>i;
		
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	if(i<=50){
	
	fstream muneeb;
	muneeb.open("roomsbooked.txt",ios::in);
		while(!muneeb.eof()){
			muneeb>>x;
			
			if(x==i){
				cout<<" ________________________________________"<<endl;
				cout<<"| The room is already booked  :   SORRY  |"<<endl;
				cout<<"|________________________________________|"<<endl;
				he=1;
			}
			
			
	}
	
	muneeb.close();	}	
	
	
		
	else{
		
		
		cout<<" ____________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range |"<<endl;
		cout<<"| we only have 50 rooms :                    |"<<endl;
		cout<<"|____________________________________________|"<<endl;
		goto back2;
		
		
		
		
		
		
	}
	
	
	
	if(he==0){
				
				
				cout<<" _______________________________________"<<endl;
				cout<<"| CONGRATULATIONS: The room is available|"<<endl;
				cout<<"|_______________________________________|"<<endl;
				cout<<""<<endl;
				cout<<" "<<endl;
			}
			
			
			
			
	

int xoxo;
            cout<<"\t\t\t\t\t _____________________"<<endl;
			cout<<"\t\t\t\t\t| enter 1 for booking |"<<endl;
			cout<<"\t\t\t\t\t|_____________________|"<<endl;
			cout<<"\t\t\t\t\t ___________________________"<<endl;
			cout<<"\t\t\t\t\t|enter 2 to enter main menu:|"<<endl;
			cout<<"\t\t\t\t\t|___________________________|"<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			cin>>xoxo;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			dobooking();
			break;
		case 2:
			showmenu();
			break;
		   	default:
		   		invalidinput();
		   		 break;
		
	}
	
}





//return function to check room and return value in deluxe class




int roomcheckerdeluxe(int a){
	
	
	int x;
	
	int he=0;
	
	
	
	if(a<=50){
	
	fstream muneeb;
	muneeb.open("roomsbookeddeluxe.txt",ios::in);
		while(!muneeb.eof()){
			muneeb>>x;
			
			if(x==a){
			
				he=1;
			}
			
			
	}muneeb.close();	}	
	
		


	else{
		
	
	he=3;	
		
		
		
	}
	
	
	if(he!=1&&he!=3)
	{
		
		he=2;
	}
	
	
	//he 1 means the room isnt available
	//he 2 means is available
	//he 3 means the entered no is wrong
	
	
	return he;
	
}











//return function to check availability in executive class and return no







int roomcheckerexecutive(int a){
	
	
	int x;
	
	int he=0;
	
	if(a<=50){
	
	

	fstream muneeb;
	muneeb.open("roomsbookedexecutive.txt",ios::in);
		while(!muneeb.eof()){
			muneeb>>x;
			
			if(x==a){
			
				he=1;
			}
			
			
	}muneeb.close();	}	
	
		
	else{
		
	
	he=3;	
		
		
		
	}
	
	
	if(he!=1&&he!=3)
	{
		
		he=2;
	}
	
	
	//he 1 means the room isnt available
	//he 2 means is available
	//he 3 means the entered no is wrong
	
	
	return he;
	
}






//return function to check availability in preidential class and return no




int roomchecker(int a){
	
	
	int x;
	
	int he=0;
	
	if(a<=50){
	
	

	fstream muneeb;
	muneeb.open("roomsbooked.txt",ios::in);
		while(!muneeb.eof()){
			muneeb>>x;
			
			if(x==a){
			
				he=1;
			}
			
			
	}muneeb.close();	}	
	
		
	else{
		
	
	he=3;	
		
		
		
	}
	
	
	if(he!=1&&he!=3)
	{
		
		he=2;
	}
	
	
	//he 1 means the room isnt available
	//he 2 means is available
	//he 3 means the entered no is wrong
	
	
	return he;
	
}





//function to do booking in  presidential class





void dobooking(){
	
	
	customer data;//structure declaration
	//new declarations
	char ch='.';
	//new openings
	fstream xxxx;
	xxxx.open("specificpresidential.txt",ios::out|ios::in|ios::app|ios::binary);
	
	int x;
	back3:
		
	cout<<"________________________________________________________________________________________________________________________"<<endl;
	cout<<" "<<endl;
	cout<<" \t\t\t\t\t _________________________________"<<endl;
	cout<<" \t\t\t\t\t| Enter the room no u want to book|"<<endl;
	cout<<" \t\t\t\t\t|_________________________________|"<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	cin>>x;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	
	
	int b=roomchecker(x);//it will first check room vailability by return function before booking
	
	
	if(b==2){
		
		cout<<" ___________________________"<<endl;
		cout<<"| yes this room is available|"<<endl;
		cout<<"|___________________________|"<<endl;
		cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
		fstream file;
		file.open("customerdata.txt",ios::out|ios::app|ios::binary);//opening file of presidentoal customer class
		
		cin.ignore();
		
		//taking room no in struct and in presidentail room booked file 
		cout<<" _______________________________"<<endl;
		cout<<"| enter the room no again plz   |"<<endl;
		cout<<"|_______________________________|"<<endl;
		cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
cin.getline(data.roomno,100);
	fstream xx;
	xx.open("roomsbooked.txt",ios::out|ios::app);
	xx<<data.roomno;
	xx<<" ";
	xx.close();
	xxxx<<data.roomno;
	xxxx.put(ch);
		
		
		// taking name in the structure 
		cout<<" _____________________________"<<endl;
		cout<<"|enter the name of the person |"<<endl;
		cout<<"|_____________________________|"<<endl;
cin.getline(data.name,100);

	xxxx<<data.name;
	xxxx.put(ch);
		
		
		//taking age and moving it
		cout<<" ____________________________"<<endl;
		cout<<"| enter the age of the person|"<<endl;
		cout<<"|____________________________|"<<endl;
		cout<<" "<<endl;
		cin>>data.age;
		
	xxxx<<data.age;
	xxxx.put(ch);
		
		cin.ignore();
		
		
		
		//taking adress in structure 
		
		
		cout<<" __________________"<<endl;
		cout<<"| enter the adress |"<<endl;
		cout<<"|__________________|"<<endl;
		cin.getline(data.adress,100);
		
	xxxx<<data.adress;
	xxxx.put(ch);
		
		
		//taking id card no in structure
		
		
		cout<<" _______________________________"<<endl;
		cout<<"| enter the id card no of person|"<<endl;
		cout<<"|_______________________________|"<<endl;
		cout<<" "<<endl;
		cin.getline(data.idcard,100);
		
	xxxx<<data.idcard;
	xxxx.put(ch);
		
	
	// moving all the structure data in presidentail stucture file 
	//room no s already trasferred in presidenatoial room booked file
	
		file.write(reinterpret_cast<char *>(&data), sizeof(data));

		file.close();
		xxxx.close();
		
	}
	
	
	// if room isnot available
	
	else if(b==1){
		
		cout<<" __________________________"<<endl;
		cout<<"| the room is not available|"<<endl;
		cout<<"|__________________________|"<<endl;
		cout<<" "<<endl;
		goto back3;
	}
	
	
	// if user entered lagrger number
	else{
		cout<<" "<<endl;cout<<" "<<endl;
		cout<<" ______________________"<<endl;
		cout<<"| we only have 50 rooms| "<<endl;
		cout<<"|______________________|"<<endl;
		cout<<" ___________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range|"<<endl;
		cout<<"|___________________________________________|"<<endl;
		goto back3;
		
	}
	
	
	// asking for further actions 
	
	int xxx;
	cout<<"\t\t\t\t\t _________________________"<<endl;
	cout<<"\t\t\t\t\t|press 1 to enter again   |"<<endl;
	cout<<"\t\t\t\t\t|_________________________|"<<endl;
	cout<<"\t\t\t\t\t _____________________________"<<endl;
	cout<<"\t\t\t\t\t|press 2 to enter in main menu|"<<endl;
	cout<<"\t\t\t\t\t|_____________________________|"<<endl;
	cout<<"\t\t\t\t\t _______________________________"<<endl;
	cout<<"\t\t\t\t\t| or press some other no to exit|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________|"<<endl;
	cout<<" "<<endl;
	cin>>xxx;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch (xxx){
		
		case 1:
			goto back3;
			break;
		case 2:
			showmenu();
			break;
		default:
			exit(0);
	}
	
	
}




//function to do booking for ecexecutiev room class


void dobookingexecutive(){
	customer data;
	//new declarations
	char ch='.';
	//new openings
	fstream xxxx;
	xxxx.open("specificexecutive.txt",ios::out|ios::in|ios::app|ios::binary);
	
	int x;
	back3:
	cout<<"________________________________________________________________________________________________________________________"<<endl;
	cout<<" "<<endl;
	cout<<" \t\t\t\t\t _________________________________"<<endl;
	cout<<" \t\t\t\t\t| Enter the room no u want to book|"<<endl;
	cout<<" \t\t\t\t\t|_________________________________|"<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	
	cin>>x;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	int b=roomcheckerexecutive(x);
	
	if(b==2){
		cout<<" ___________________________"<<endl;
		cout<<"| yes this room is available|"<<endl;
		cout<<"|___________________________|"<<endl;
		cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
		
		
		fstream file;
		file.open("customerdataexecutive.txt",ios::out|ios::app|ios::binary);
		cin.ignore();
		
		cout<<" _______________________________"<<endl;
		cout<<"| enter the room no again plz   |"<<endl;
		cout<<"|_______________________________|"<<endl;
		cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
cin.getline(data.roomno,100);
	fstream xx;
	xx.open("roomsbookedexecutive.txt",ios::out|ios::app);
	xx<<data.roomno;
	xx<<" ";
	xx.close();
	xxxx<<data.roomno;
	xxxx.put(ch);
	
	
		cout<<" _____________________________"<<endl;
		cout<<"|enter the name of the person |"<<endl;
		cout<<"|_____________________________|"<<endl;

cin.getline(data.name,100);

	xxxx<<data.name;
	xxxx.put(ch);



		cout<<" ____________________________"<<endl;
		cout<<"| enter the age of the person|"<<endl;
		cout<<"|____________________________|"<<endl;
		cout<<" "<<endl;
		cin>>data.age;
		
	xxxx<<data.age;
	xxxx.put(ch);
		cin.ignore();
		
		
		
		
		cout<<" __________________"<<endl;
		cout<<"| enter the adress |"<<endl;
		cout<<"|__________________|"<<endl;
		cin.getline(data.adress,100);
		
	xxxx<<data.adress;
	xxxx.put(ch);
	
	
		cout<<" _______________________________"<<endl;
		cout<<"| enter the id card no of person|"<<endl;
		cout<<"|_______________________________|"<<endl;
		cin.getline(data.idcard,100);
		
	
	xxxx<<data.idcard;
	xxxx.put(ch);
	
	
		file.write(reinterpret_cast<char *>(&data), sizeof(data));

		file.close();
		xxxx.close();
		
	}
	
	
	else if(b==1){
		
		
		cout<<" "<<endl;cout<<" "<<endl;
		cout<<" ______________________"<<endl;
		cout<<"| we only have 50 rooms| "<<endl;
		cout<<"|______________________|"<<endl;
		cout<<" ___________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range|"<<endl;
		cout<<"|___________________________________________|"<<endl;
	
		goto back3;
		
		
	}
	
	
	else{
		
		cout<<" "<<endl;cout<<" "<<endl;
		cout<<" ______________________"<<endl;
		cout<<"| we only have 50 rooms| "<<endl;
		cout<<"|______________________|"<<endl;
		cout<<" ___________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range|"<<endl;
		cout<<"|___________________________________________|"<<endl;
		goto back3;
		
	}
	
	
	int xxx;
	
	cout<<"\t\t\t\t\t _________________________"<<endl;
	cout<<"\t\t\t\t\t|press 1 to enter again   |"<<endl;
	cout<<"\t\t\t\t\t|_________________________|"<<endl;
	cout<<"\t\t\t\t\t _____________________________"<<endl;
	cout<<"\t\t\t\t\t|press 2 to enter in main menu|"<<endl;
	cout<<"\t\t\t\t\t|_____________________________|"<<endl;
	cout<<"\t\t\t\t\t _______________________________"<<endl;
	cout<<"\t\t\t\t\t| or press some other no to exit|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________|"<<endl;
	cout<<" "<<endl;
	cin>>xxx;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch (xxx){
		
		case 1:
			goto back3;
			break;
		case 2:
			showmenu();
			break;
		default:
			exit(0);
	}
	
	
}


//function to do booking for deluxe class





void dobookingdeluxe(){
	
	customer data;
	
	//new declarations
	char ch='.';
	//new openings
	fstream xxxx;
	xxxx.open("specificdeluxe.txt",ios::out|ios::in|ios::app|ios::binary);
	int x;
	back3:
	
	cout<<"________________________________________________________________________________________________________________________"<<endl;
	cout<<" "<<endl;
	cout<<" \t\t\t\t\t _________________________________"<<endl;
	cout<<" \t\t\t\t\t| Enter the room no u want to book|"<<endl;
	cout<<" \t\t\t\t\t|_________________________________|"<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	
	cin>>x;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	
	int b=roomcheckerdeluxe(x);
	
	if(b==2){
    	cout<<" ___________________________"<<endl;
		cout<<"| yes this room is available|"<<endl;
		cout<<"|___________________________|"<<endl;
		cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	
		fstream file;
		file.open("customerdatadeluxe.txt",ios::out|ios::app|ios::binary);
		cin.ignore();
	
		cout<<" _______________________________"<<endl;
		cout<<"| enter the room no again plz   |"<<endl;
		cout<<"|_______________________________|"<<endl;
		cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
cin.getline(data.roomno,100);
	fstream xx;
	xx.open("roomsbookeddeluxe.txt",ios::out|ios::app);
	xx<<data.roomno;
	xx<<" ";
	xx.close();
	
	xxxx<<data.roomno;
	xxxx.put(ch);
	
		cout<<" _____________________________"<<endl;
		cout<<"|enter the name of the person |"<<endl;
		cout<<"|_____________________________|"<<endl;

cin.getline(data.name,100);
	
	xxxx<<data.name;
	xxxx.put(ch);
	
	
		cout<<" ____________________________"<<endl;
		cout<<"| enter the age of the person|"<<endl;
		cout<<"|____________________________|"<<endl;
		cout<<" "<<endl;
		cin>>data.age;
		
	xxxx<<data.age;
	xxxx.put(ch);
		cin.ignore();
		
	
	
		
		
		cout<<" __________________"<<endl;
		cout<<"| enter the adress |"<<endl;
		cout<<"|__________________|"<<endl;
		cin.getline(data.adress,100);

	
	xxxx<<data.adress;
	xxxx.put(ch);
		
		cout<<" _______________________________"<<endl;
		cout<<"| enter the id card no of person|"<<endl;
		cout<<"|_______________________________|"<<endl;
		cin.getline(data.idcard,100);
		


	xxxx<<data.idcard;
	xxxx.put(ch);
	
		file.write(reinterpret_cast<char *>(&data), sizeof(data));

		file.close();
xxxx.close();

		
	}


	else if(b==1){
		
		cout<<" "<<endl;cout<<" "<<endl;
		cout<<" ______________________"<<endl;
		cout<<"| we only have 50 rooms| "<<endl;
		cout<<"|______________________|"<<endl;
		cout<<" ___________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range|"<<endl;
		cout<<"|___________________________________________|"<<endl;
	
		goto back3;


	}


	else{
		
		cout<<" "<<endl;cout<<" "<<endl;
		cout<<" ______________________"<<endl;
		cout<<"| we only have 50 rooms| "<<endl;
		cout<<"|______________________|"<<endl;
		cout<<" ___________________________________________"<<endl;
		cout<<"| the room no u have entered is out of range|"<<endl;
		cout<<"|___________________________________________|"<<endl;
		goto back3;
		

	}


	int xxx;
	
	cout<<"\t\t\t\t\t _________________________"<<endl;
	cout<<"\t\t\t\t\t|press 1 to enter again   |"<<endl;
	cout<<"\t\t\t\t\t|_________________________|"<<endl;
	cout<<"\t\t\t\t\t _____________________________"<<endl;
	cout<<"\t\t\t\t\t|press 2 to enter in main menu|"<<endl;
	cout<<"\t\t\t\t\t|_____________________________|"<<endl;
	cout<<"\t\t\t\t\t _______________________________"<<endl;
	cout<<"\t\t\t\t\t| or press some other no to exit|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________|"<<endl;
	cout<<" "<<endl;
	cin>>xxx;

if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch (xxx){
		
		case 1:
			goto back3;
			break;
		case 2:
			showmenu();
			break;
		default:
			exit(0);
	}
	
	
}




//function to show all available rooms in executive class




void allavailableexecutive(){
	
	int x;
	cout<<"\t\t\t\t\t   _________________________________"<<endl;
   	cout<<" \t\t\t\t\t |the rooms that are available are |"<<endl;
	cout<<"\t\t\t\t\t  |_________________________________|"<<endl;
	
	
	
	for(int i=1;i<=50;i++){
		
	
		int o=roomcheckerexecutive(i);
	
		if(o==2){
			
			cout<<" ________________"<<endl;
			cout<<"| Room No :"<<i<<endl;
			cout<<"|________________|"<<endl;
		
		
		
		}
		
		
		
		
	}
	
	
	cout<<""<<endl;
	
	
	int xoxo;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"_____________________________________________________________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t _____________________________"<<endl;
	cout<<"\t\t\t\t\t| press 1 to go in main menu :|"<<endl;
	cout<<"\t\t\t\t\t|_____________________________|"<<endl;
	cout<<"\t\t\t\t\t _________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to book a room into this |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to exit|"<<endl;
	cout<<"\t\t\t\t\t|_______________|"<<endl;
	
	cout<<" "<<endl;
	cout<<" "<<endl;
	cin>>xoxo;
	
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	
	switch(xoxo){
		
		
		case 1:
			showmenu();
			break;
		case 2:
			dobookingexecutive();
			break;
		case 3:
			exit(0);
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}

}




//function to show all available rooms in ecxecutive class




void allavailabledeluxe(){
	
	
	
	int x;
	
	cout<<"\t\t\t\t\t  _________________________________"<<endl;
   cout<<" \t\t\t\t\t |the rooms that are available are |"<<endl;
	cout<<"\t\t\t\t\t |_________________________________|"<<endl;
	
	
	
	for(int i=1;i<=50;i++){
		
	
		int o=roomcheckerdeluxe(i);
		if(o==2){
			
			
			cout<<" ________________"<<endl;
			cout<<"| Room No :"<<i<<endl;
			cout<<"|________________|"<<endl;
		}
		
		
		
		
	}
	
	
	cout<<""<<endl;
	
	
	
	int xoxo;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"_____________________________________________________________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t _____________________________"<<endl;
	cout<<"\t\t\t\t\t| press 1 to go in main menu :|"<<endl;
	cout<<"\t\t\t\t\t|_____________________________|"<<endl;
	cout<<"\t\t\t\t\t _________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to book a room into this |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to exit|"<<endl;
	cout<<"\t\t\t\t\t|_______________|"<<endl;
	
	cout<<" "<<endl;
	cout<<" "<<endl;
	cin>>xoxo;
	
	
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	
	switch(xoxo){
		
		
		case 1:
			showmenu();
			break;
		case 2:
			dobookingdeluxe();
			break;
		case 3:
			exit(0);
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}

}







//function to show all the available rooms in presidential class








void allavailable(){
	
	int x;
	
	cout<<"\t\t\t\t\t  _________________________________"<<endl;
   cout<<" \t\t\t\t\t |the rooms that are available are |"<<endl;
	cout<<"\t\t\t\t\t |_________________________________|"<<endl;
	
	
	for(int i=1;i<=50;i++){
		
	
		int o=roomchecker(i);
		if(o==2){
			
			cout<<" ________________"<<endl;
			cout<<"| Room No :"<<i<<endl;
			cout<<"|________________|"<<endl;
			
		
		
			
		}
		
		
		
		
	}
	
	
	cout<<""<<endl;
	
	
	int xoxo;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"_____________________________________________________________________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t _____________________________"<<endl;
	cout<<"\t\t\t\t\t| press 1 to go in main menu :|"<<endl;
	cout<<"\t\t\t\t\t|_____________________________|"<<endl;
	cout<<"\t\t\t\t\t _________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to book a room into this |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to exit|"<<endl;
	cout<<"\t\t\t\t\t|_______________|"<<endl;
	
	cout<<" "<<endl;
	cout<<" "<<endl;
	cin>>xoxo;
	
	
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	
	switch(xoxo){
		
		
		case 1:
			showmenu();
			break;
		case 2:
			dobooking();
			break;
		case 3:
			exit(0);
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}

}





//function to show record of reserved rooms in presidentional class



void showrecord(){
	
	customer data2;
	
	fstream muneeb;
		
		char again;


muneeb.open("customerdata.txt",ios::in|ios::app|ios::binary);


muneeb.read(reinterpret_cast<char *>(&data2),sizeof(data2));


if(!muneeb){
	cout<<" ____________________"<<endl;
	cout<<"|the file dont exist |"<<endl;
	cout<<"|____________________|"<<endl;
	cout<<" "<<endl;
}

else{
	
	while(!muneeb.eof()){
		cout<<" ______________________________________________________________________________________________________________________"<<endl;
		cout<<"| Room  no: |      Name :                | age:           |        adress:            |       id card no:              |"<<endl;
		cout<<"|___________|____________________________|________________|___________________________|________________________________|"<<endl;
		cout<<setw(10)<<data2.roomno<<setw(30)<<data2.name<<setw(10)<<data2.age<<"     "<<setw(28)<<data2.adress<<setw(22)<<data2.idcard<<endl;
		
		
		cout<<" "<<endl;
		cout<<" "<<endl;
		muneeb.read(reinterpret_cast<char *>(&data2),sizeof(data2));
		
		
	}
	
}

muneeb.close();


int menu;
cout<<"  _________________________"<<endl;
cout<<" |press 1 to goto main menu|"<<endl;
cout<<" |_________________________|"<<endl;
cout<<" |press 2 to exit          |"<<endl;
cout<<" |_________________________|"<<endl;
cout<<" "<<endl;
cin>>menu;

if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	

switch(menu){
	case 1:
		showmenu();
		case 2:
			exit(0);
			break;
		   	default:
		   		invalidinput();
		   		 break;
}
	
}





//show record of reserved rooms in executive class


void showrecordexecutive(){
	customer data2;
	
	fstream muneeb;
		
		char again;

muneeb.open("customerdataexecutive.txt",ios::in|ios::app|ios::binary);
muneeb.read(reinterpret_cast<char *>(&data2),sizeof(data2));



if(!muneeb){
	
	cout<<" ____________________"<<endl;
	cout<<"|the file dont exist |"<<endl;
	cout<<"|____________________|"<<endl;
	cout<<" "<<endl;
}


else{
	
	while(!muneeb.eof()){
		
		cout<<" ______________________________________________________________________________________________________________________"<<endl;
		cout<<"| Room  no: |      Name :                | age:           |        adress:            |       id card no:              |"<<endl;
		cout<<"|___________|____________________________|________________|___________________________|________________________________|"<<endl;
		cout<<setw(10)<<data2.roomno<<setw(30)<<data2.name<<setw(10)<<data2.age<<"     "<<setw(28)<<data2.adress<<setw(22)<<data2.idcard<<endl;
		
		
		cout<<" "<<endl;
		cout<<" "<<endl;
		
		muneeb.read(reinterpret_cast<char *>(&data2),sizeof(data2));
		
		
	}
	
}

muneeb.close();


int menu;
cout<<"  _________________________"<<endl;
cout<<" |press 1 to goto main menu|"<<endl;
cout<<" |_________________________|"<<endl;
cout<<" |press 2 to exit          |"<<endl;
cout<<" |_________________________|"<<endl;
cout<<" "<<endl;
cin>>menu;

if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	

switch(menu){
	case 1:
		showmenu();
		case 2:
			exit(0);			
			break;
		   	default:
		   		invalidinput();
		   		 break;
}
}





//function to show record of all rooms reserved in deluxe class 



void showrecorddeluxe(){
	customer data2;
	
	fstream muneeb;
		
		char again;


muneeb.open("customerdatadeluxe.txt",ios::in|ios::app|ios::binary);

muneeb.read(reinterpret_cast<char *>(&data2),sizeof(data2));


if(!muneeb){
	
	cout<<" ____________________"<<endl;
	cout<<"|the file dont exist |"<<endl;
	cout<<"|____________________|"<<endl;
	cout<<" "<<endl;
}

else{
	

	while(!muneeb.eof()){
		

		cout<<" ______________________________________________________________________________________________________________________"<<endl;
		cout<<"| Room  no: |      Name :                | age:           |        adress:            |       id card no:              |"<<endl;
		cout<<"|___________|____________________________|________________|___________________________|________________________________|"<<endl;
		cout<<setw(10)<<data2.roomno<<setw(30)<<data2.name<<setw(10)<<data2.age<<"     "<<setw(28)<<data2.adress<<setw(22)<<data2.idcard<<endl;
		
		cout<<" "<<endl;
		cout<<" "<<endl;
		muneeb.read(reinterpret_cast<char *>(&data2),sizeof(data2));
		
		
	}
	
}

muneeb.close();


int menu;
cout<<"  _________________________"<<endl;
cout<<" |press 1 to goto main menu|"<<endl;
cout<<" |_________________________|"<<endl;
cout<<" |press 2 to exit          |"<<endl;
cout<<" |_________________________|"<<endl;
cout<<" "<<endl;
cin>>menu;

if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	

switch(menu){
	case 1:
		showmenu();
		case 2:
			exit(0);
			break;
		   	default:
		   		invalidinput();
		   		 break;
}

	
}





//function to show choices for data dlete in classes







void showchoicesfordelete(){
	
		int xoxo;
	cout<<"\t\t\t\t\t _______________________________________"<<endl;
	cout<<"\t\t\t\t\t| Press 1 to go for presidential suite :|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<"\t\t\t\t\t ___________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to go for executive suite :|"<<endl;
	cout<<"\t\t\t\t\t|___________________________________|"<<endl;
	cout<<"\t\t\t\t\t__________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cout<<"\t\t\t\t\t__________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 4 to go for All          : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			deletedata();
			break;
		case 2:
			deletedataexecutive();
			break;
		case 3:
			deletedatadeluxe();
			case 4:
		   deleteall();			
		   break;
        	default:
		   		invalidinput();
		   		 break;
	}

	
	
	
	
	
}









//function to delete data in presidential class



void deletedata(){
	
	
	fstream muneeb;
	muneeb.open("roomsbooked.txt",ios::out|ios::trunc);
	muneeb.close();
	fstream rehman;
	rehman.open("customerdata.txt",ios::out|ios::trunc),
	rehman.close();
	fstream specific;
	specific.open("specificpresidential.txt",ios::out|ios::trunc);
	specific.close();
	
	
	
	
	cout<<" ______________________________________"<<endl;
	cout<<"|DATA OF PRESIDENTIAL CLASS IS DELETED:|"<<endl;
	cout<<"|______________________________________|"<<endl;
	cout<<""<<endl;
	cout<<" "<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}








//function to delete data in executive class





void deletedataexecutive(){
	
	
	fstream muneeb;
	muneeb.open("roomsbookedexecutive.txt",ios::out|ios::trunc);
	muneeb.close();
	fstream rehman;
	rehman.open("customerdataexecutive.txt",ios::out|ios::trunc),
	rehman.close();
	fstream specific;
	specific.open("specificexecutive.txt",ios::out|ios::trunc);
	specific.close();
	
	
	
	
	cout<<" ______________________________________"<<endl;
	cout<<"|DATA OF EXECUTIVE CLASS IS DELETED:   |"<<endl;
	cout<<"|______________________________________|"<<endl;
	cout<<""<<endl;
	cout<<" "<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}






//function to delete data in deluxe class






void deletedatadeluxe(){
	
	
	fstream muneeb;
	muneeb.open("roomsbookeddeluxe.txt",ios::out|ios::trunc);
	
	
	
	muneeb.close();
	fstream rehman;
	rehman.open("customerdatadeluxe.txt",ios::out|ios::trunc),
	rehman.close();
	
	fstream specific;
	specific.open("specificdeluxe.txt",ios::out|ios::trunc);
	specific.close();
	
	
	
	cout<<" ______________________________________"<<endl;
	cout<<"|DATA OF DELUXE CLASS IS DELETED:      |"<<endl;
	cout<<"|______________________________________|"<<endl;
	cout<<""<<endl;
	cout<<" "<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}






//function to show choices of classes for backup





void showchoicesforbackup(){
	
	
	
	
	
			int xoxo;
	cout<<"\t\t\t\t\t _______________________________________"<<endl;
	cout<<"\t\t\t\t\t| Press 1 to go for presidential suite :|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<"\t\t\t\t\t ___________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to go for executive suite :|"<<endl;
	cout<<"\t\t\t\t\t|___________________________________|"<<endl;
	cout<<"\t\t\t\t\t__________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 4 to go for all          : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			databackup();
			break;
		case 2:
			databackupexecutive();
			break;
		case 3:
			databackupdeluxe();
		case 4:
			databackupall();
						break;
		   	default:
		   		invalidinput();
		   		 break;
	}

	

	
	
	
	
	
	
	
	
	
}






//function to do data backup in presidential class









void databackup(){
ifstream initialFile("roomsbooked.txt", ios::in|ios::binary);
	ofstream outputFile("backuppresidential1.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	
	
	
	
	
	
	 initialFile.open("customerdata.txt", ios::in|ios::binary);
	 outputFile.open("backuppresidential2.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize2 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	
	//new backup
		
	
	 initialFile.open("specificpresidential.txt", ios::in|ios::binary);
	 outputFile.open("backupspecificpresidential.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize3 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	 
 	    cout<<" _____________________________________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN BACKED UP IN PRESIDENTIAL CLASS   |"<<endl;
		cout<<"|_____________________________________________________|"<<endl;
		cout<<" "<<endl;
	
	
	
}
	










	//function backupfor executive
	
	
	
	void databackupexecutive(){
ifstream initialFile("roomsbookedexecutive.txt", ios::in|ios::binary);
	ofstream outputFile("backupexecutive1.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	
	
	
	
	
	
	 initialFile.open("customerdataexecutive.txt", ios::in|ios::binary);
	 outputFile.open("backupexecutive2.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize2 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	//new backup
	
	initialFile.open("specificexecutive.txt", ios::in|ios::binary);
	 outputFile.open("backupspecificexecutive.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize3 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	 
	
	 	cout<<" _____________________________________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN BACKED UP IN EXECUTIVE CLASS      |"<<endl;
		cout<<"|_____________________________________________________|"<<endl;
		cout<<" "<<endl;
	
	
	
}
	







//function backup for deluxe




void databackupdeluxe(){
   ifstream initialFile("roomsbookeddeluxe.txt", ios::in|ios::binary);
	ofstream outputFile("backupdeluxe1.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	
	
	
	
	
	
	 initialFile.open("customerdatadeluxe.txt", ios::in|ios::binary);
	 outputFile.open("backupdeluxe2.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize2 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	//new
	
	initialFile.open("specificdeluxe.txt", ios::in|ios::binary);
	 outputFile.open("backupspecificdeluxe.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize3 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	 
	
	 	cout<<" _____________________________________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN BACKED UP IN DELUXE CLASS         |"<<endl;
		cout<<"|_____________________________________________________|"<<endl;
		cout<<" "<<endl;
	
	
	
	
}
	





	void databackupall(){
		
		
		databackupdeluxe();
		databackupexecutive();
		databackup();
		
		
		cout<<" _____________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN BACKED UP |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<""<<endl;
		
		int xoxo;		
		cout<<" _____________________________"<<endl;
		cout<<"| press 1 for main menu  :    |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<" "<<endl;
				
		cout<<" _____________________________"<<endl;
		cout<<"| press 2 for exit      :     |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cin>>xoxo;
		
		
		if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
		switch(xoxo){
			
			
			case 1:
				showmenu();
			case 2:
				exit(0);	
			break;
		   	default:
		   		invalidinput();
		   		 break;
			
			
		}
		
		
	}
	
	
	
	
void deleteall(){
	
	
	
	
 deletedata();
 deletedataexecutive();
 deletedatadeluxe();
 
 
 
 	    cout<<" _____________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN DELETED   |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<""<<endl;
		
		int xoxo;		
		cout<<" _____________________________"<<endl;
		cout<<"| press 1 for main menu  :    |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<" "<<endl;
				
		cout<<" _____________________________"<<endl;
		cout<<"| press 2 for exit      :     |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cin>>xoxo;
		
		if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
		
		switch(xoxo){
			
			
			case 1:
				showmenu();
			case 2:
				exit(0);
				break;
		    	default:
		   		invalidinput();
		   		 break;
	
 
 
 
 
 
 
}



}













//function to delete all backed up data 








void deleteallbackup()
{
	
	fstream muneeb;
	fstream rehman;
	fstream specific;
	muneeb.open("backuppresidential1.txt",ios::out|ios::trunc);
	rehman.open("backuppresidential2.txt",ios::out|ios::trunc);
	//new
	specific.open("backupspecificpresidential.txt",ios::out|ios::trunc);
	specific.close();
	muneeb.close();
	rehman.close();
	//all data in presidential class backup has been delted
	
	cout<<" ______________________________________"<<endl;
	cout<<"|BACKUP OF PRESIDENTIAL CLASS DELETED :|"<<endl;
	cout<<"|______________________________________|"<<endl;
	cout<<""<<endl;
	
	
	
	
	//deleting all backup of executive class
	
		muneeb.open("backupexecutive1.txt",ios::out|ios::trunc);
	rehman.open("backupexecutive2.txt",ios::out|ios::trunc);
		//new
	specific.open("backupspecificexecutive.txt",ios::out|ios::trunc);
	specific.close();
	muneeb.close();
	rehman.close();
	
	
	cout<<" ______________________________________"<<endl;
	cout<<"|BACKUP OF EXECUTIVE CLASS DELETED :   |"<<endl;
	cout<<"|______________________________________|"<<endl;
	cout<<""<<endl;
	
	
	
	//deleting all backup of deluxe class
	
	
	muneeb.open("backupdeluxe1.txt",ios::out|ios::trunc);
	rehman.open("backupdeluxe2.txt",ios::out|ios::trunc);
		//new
	specific.open("backupspecificdeluxe.txt",ios::out|ios::trunc);
	specific.close();
	muneeb.close();
	rehman.close();
	//all data in presidential class backup has been delted
	
	cout<<" ______________________________________"<<endl;
	cout<<"|BACKUP OF DELUXE CLASS DELETED :      |"<<endl;
	cout<<"|______________________________________|"<<endl;
	cout<<""<<endl;
	
	
	    cout<<" _____________________________"<<endl;
		cout<<"| ALL BACKUP HAS BEEN DELETED |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<""<<endl;
		
		int xoxo;		
		cout<<" _____________________________"<<endl;
		cout<<"| press 1 for main menu  :    |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<" "<<endl;
				
		cout<<" _____________________________"<<endl;
		cout<<"| press 2 for exit      :     |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cin>>xoxo;
		
		if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
		
		switch(xoxo){
			
			
			case 1:
				showmenu();
			case 2:
				exit(0);
							break;
		   	default:
		   		invalidinput();
		   		 break;
			
}
	
	
}







//function to createfiles automatic if they dont exist





void createfilesautomic(){
	
	int count =0;
	
// stream objects created for all 12 files :	
	
	fstream a;
	fstream b;
	fstream c;
	fstream d;
	fstream e;
	fstream f;
	fstream g;
	fstream h;
	fstream i;
	fstream j;
	fstream k;
	fstream l;
	fstream m;
	fstream n;
	fstream o;
	fstream p;
	fstream q;
	fstream r;
	
	a.open("roomsbooked.txt",ios::in);
	b.open("customerdata.txt",ios::in);
	c.open("roomsbookedexecutive.txt",ios::in);
	d.open("customerdataexecutive.txt",ios::in);
	e.open("roomsbookeddeluxe.txt",ios::in);
	f.open("customerdatadeluxe.txt",ios::in);
	g.open("backuppresidential1.txt",ios::in);
	h.open("backuppresidential2.txt",ios::in);
	i.open("backupexecutive1.txt",ios::in);
	j.open("backupexecutive2.txt",ios::in);
	k.open("backupdeluxe1.txt",ios::in);
	l.open("backupdeluxe2.txt",ios::in);
	//new
	m.open("specificpresidential.txt",ios::in);
	n.open("specificexecutive.txt",ios::in);
	o.open("specificdeluxe.txt",ios::in);
	
	p.open("backupspecificpresidential.txt",ios::in);
	q.open("backupspecificexecutive.txt",ios::in);
	r.open("backupspecificdeluxe.txt",ios::in);
	//for A
	
	if(a.fail()){
		
		a.open("roomsbooked.txt",ios::out);
		a.close();
		count++;
		
		
	}else{
		a.close();
	}
	
	
	//for B
	
	if(b.fail()){
		
		b.open("customerdata.txt",ios::out);
		b.close();
		count++;
		
	}else{
		b.close();
	}
//for C


if(c.fail()){
	
	c.open("roomsbookedexecutive.txt",ios::out);
	c.close();
	count++;
}
	else{
	c.close();
	
}
	
	//for D
	
	if(d.fail()){
		
		d.open("customerdataexecutive.txt",ios::out);
		d.close();
		count++;
		
	}else
	{
		d.close();
	}
	
	//for E
	
	
	if(e.fail()){
		
		e.open("roomsbookeddeluxe.txt",ios::out);
		e.close();
		count++;
	}
	else{
		
		e.close();
	}
	
	//for F
	
	if(f.fail()){
		
		f.open("customerdatadeluxe.txt",ios::out);
		f.close();
		count++;
		
		
		
	}else{
		f.close();
		
	}
	
	
	//for G
	
	
	if(g.fail()){
		
		g.open("backuppresidential1.txt",ios::out);
		g.close();
		count++;
		
	}else{
		g.close();
	}
	
	
	//for H
	
	
	
	if(h.fail()){
		
		h.open("backuppresidential2.txt",ios::out);
		h.close();
		count++;
		
	}
	else{
		h.close();
	}
	
	
	//for i
	
	
	
	if(i.fail()){
		
		i.open("backupexecutive1.txt",ios::out);
		i.close();
		count++;
		
		
	}else{
		
		i.close();
	}
	
	
	//for J
	
	
	
	
	
if(j.fail())
{
	
	j.open("backupexecutive2.txt",ios::out);
	j.close();
	count++;
	
	
	}	else{
		j.close();
	}
	
	
	
	
	
	
	//for K
	
	
	
	if(k.fail()){
		
		
		k.open("backupdeluxe1.txt",ios::out);
		k.close();
		count++;
		
	}else{
		k.close();
	}
	
	
	
	
	//for L
	
	
	if(l.fail()){
		
		l.open("backupdeluxe2.txt",ios::out);
		l.close();
		count++;
		
		
	}else{
		
		l.close();
		
	}
	
	//new m
	if(m.fail()){
		
		m.open("specificpresidential.txt",ios::out);
		m.close();
		count++;
		
		
	}else{
		
		m.close();
		
	}
	
	//new n
	if(n.fail()){
	
		n.open("specificexecutive.txt",ios::out);
		n.close();
		count++;
		
		
	}else{
		
		n.close();
		
	}
	
	//new o
	
	if(o.fail()){
		
	o.open("specificdeluxe.txt",ios::out);
		o.close();
		count++;
		
		
	}else{
		
		o.close();
		
	}
	
	//new p
	
	if(p.fail()){
		
	p.open("backupspecificpresidential.txt",ios::out);
		p.close();
		count++;
		
		
	}else{
		
		p.close();
		
	}
	
	//new q
	
	if(q.fail()){
		
	q.open("backupspecificexecutive.txt",ios::out);
		q.close();
		count++;
		
		
	}else{
		
		q.close();
		
	}
	//new r
	
	if(r.fail()){
		
	r.open("backupspecificdeluxe.txt",ios::out);
		r.close();
		count++;
		
		
	}else{
		
		r.close();
		
	}
	
	
	
	
	
	
	
	if(count==18){
		cout<<"status==>created files automic"<<endl;
	}
	
	
	
}









//function to show choices to restore backup




void showchoicesforrestorebackup()
{
	
	
		
			int xoxo;
	cout<<"\t\t\t\t\t _______________________________________"<<endl;
	cout<<"\t\t\t\t\t| Press 1 to go for presidential suite :|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<"\t\t\t\t\t ___________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to go for executive suite :|"<<endl;
	cout<<"\t\t\t\t\t|___________________________________|"<<endl;
	cout<<"\t\t\t\t\t__________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cout<<"\t\t\t\t\t|press 4 to go for all          : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			restorebackup();
			break;
		case 2:
			restorebackupexecutive();
			break;
		case 3:
			restorebackupdeluxe();
		case 4:
			restoreall();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}

	

	
	
	
	
	

	
	
	
	
	
	
	
}








//function to restore back up in preidential class



void restorebackup(){
	
	
	
	ifstream initialFile("backuppresidential1.txt", ios::in|ios::binary);
	ofstream outputFile("roomsbooked.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	
	
	
	
	
	
	 initialFile.open("backuppresidential2.txt", ios::in|ios::binary);
	 outputFile.open("customerdata.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize2 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	
	//new
	initialFile.open("backupspecificpresidential.txt", ios::in|ios::binary);
	 outputFile.open("specificpresidential.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize3 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	
	 
 	    cout<<" _____________________________________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN RESTORED IN PRESIDENTIAL CLASS    |"<<endl;
		cout<<"|_____________________________________________________|"<<endl;
		cout<<" "<<endl;
	

	
	
	
	
	
	
	
	
}






//function to restore in executive class




void restorebackupexecutive(){
	
	
	
	ifstream initialFile("backupexecutive1.txt", ios::in|ios::binary);
	ofstream outputFile("roomsbookedexecutive.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	
	
	
	
	
	
	 initialFile.open("backupexecutive2.txt", ios::in|ios::binary);
	 outputFile.open("customerdataexecutive.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize2 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	
	//new
	initialFile.open("backupspecificexecutive.txt", ios::in|ios::binary);
	 outputFile.open("specificexecutive.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize3 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	
	
	 	cout<<" _____________________________________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN RESTORED IN EXECUTIVE CLASS       |"<<endl;
		cout<<"|_____________________________________________________|"<<endl;
		cout<<" "<<endl;
	

	
	
	
	
	
	
	
}










//function to restore data in deluxe class







void restorebackupdeluxe(){
	
	
	
	ifstream initialFile("backupdeluxe1.txt", ios::in|ios::binary);
	ofstream outputFile("roomsbookeddeluxe.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	
	
	
	
	
	
	 initialFile.open("backupdeluxe2.txt", ios::in|ios::binary);
	 outputFile.open("customerdatadeluxe.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize2 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();
	
	//new
	initialFile.open("backupspecificdeluxe.txt", ios::in|ios::binary);
	 outputFile.open("specificdeluxe.txt", ios::out|ios::binary);
	//defines the size of the buffer
	initialFile.seekg(0, ios::end);
	long fileSize3 = initialFile.tellg();
	//Requests the buffer of the predefined size


	//As long as both the input and output files are open...
	if(initialFile.is_open() && outputFile.is_open())
	{
		short * buffer = new short[fileSize2/2];
		//Determine the file's size
		//Then starts from the beginning
		initialFile.seekg(0, ios::beg);
		//Then read enough of the file to fill the buffer
		initialFile.read((char*)buffer, fileSize2);
		//And then write out all that was read
		outputFile.write((char*)buffer, fileSize2);
		delete[] buffer;
	}
	//If there were any problems with the copying process, let the user know
	else if(!outputFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
	else if(!initialFile.is_open())
	{
		cout<<"I couldn't open file for copying!\n";
		
	}
		
	initialFile.close();
	outputFile.close();

	
	
	 	cout<<" _____________________________________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN RESTORED IN DELUXE CLASS          |"<<endl;
		cout<<"|_____________________________________________________|"<<endl;
		cout<<" "<<endl;
	
	

	
	
	
	
}









//function to restore all backup







void restoreall(){
	
	
	
		
		restorebackupdeluxe();
		restorebackupexecutive();
		restorebackup();
		
		
		cout<<" _____________________________"<<endl;
		cout<<"| ALL DATA HAS BEEN RESTORED  |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<""<<endl;
		
		int xoxo;		
		cout<<" _____________________________"<<endl;
		cout<<"| press 1 for main menu  :    |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cout<<" "<<endl;
				
		cout<<" _____________________________"<<endl;
		cout<<"| press 2 for exit      :     |"<<endl;
		cout<<"|_____________________________|"<<endl;
		cin>>xoxo;
		
		if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
		
		switch(xoxo){
			
			
			case 1:
				showmenu();
			case 2:
				exit(0);
						break;
		   	default:
		   		invalidinput();
		   		 break;
			
		}
		
		
	
	
	
	
	
}




//new functions 



void showchoicesforspecific(){
	
	int xoxo;
	cout<<"\t\t\t\t\t _______________________________________"<<endl;
	cout<<"\t\t\t\t\t| Press 1 to go for presidential suite :|"<<endl;
	cout<<"\t\t\t\t\t|_______________________________________|"<<endl;
	cout<<"\t\t\t\t\t ___________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 2 to go for executive suite :|"<<endl;
	cout<<"\t\t\t\t\t|___________________________________|"<<endl;
	cout<<"\t\t\t\t\t__________________________________"<<endl;
	cout<<"\t\t\t\t\t|Press 3 to go for deluxe suite : |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	cin>>xoxo;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch(xoxo){
		
		case 1:
			showchoicesforspecificpinto();
			break;
		case 2:
			showchoicesforspecificeinto();
			break;
		case 3:
			showchoicesforspecificdinto();
			break;		
		   	default:
		   		invalidinput();
		   		 break;
	}
	
}

void showchoicesforspecificpinto(){
	
	int choice ;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 1 to search by name                       |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 2 to search by room no                    |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 3 to search by id card no                 |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 4 to search by adress                     |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cin>>choice;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch (choice){
		case 1:
			showspecificpname();
			break;
		case 2:
		showspecificpresidential();
		break;
		case 3:
			showspecificpidcard();
			break;
		case 4:
			showspecificpadress();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}
	
	
}

void showchoicesforspecificeinto(){
	
	
	int choice ;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 1 to search by name                       |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 2 to search by room no                    |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 3 to search by id card no                 |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 4 to search by adress                     |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cin>>choice;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch (choice){
		case 1:
			showspecificename();
			break;
		case 2:
		showspecificexecutive();
			break;
		case 3:
			showspecificeidcard();
			break;
		case 4:
			showspecificeadress();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}
	
	
}

void showchoicesforspecificdinto(){
	
	
	
	int choice ;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 1 to search by name                       |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 2 to search by room no                    |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 3 to search by id card no                 |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|press 4 to search by adress                     |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cin>>choice;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
	switch (choice){
		case 1:
			showspecificdname();
			break;
		case 2:
		showspecificdeluxe();
			break;
		case 3:
			showspecificdidcard();
			break;
		case 4:
			showspecificdadress();
			break;
		   	default:
		   		invalidinput();
		   		 break;
	}
	
	
}


void showspecificpresidential(){
	
	back:
		cin.ignore();   
	int choice;
	int a;
	string str;
	string str2;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|enter the room no of which u want to see record |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	cin>>str;
	
	istringstream convert(str);
	if(!(convert>>a)){
		a=0;
	}
	
		fstream muneeb;
		muneeb.open("specificpresidential.txt",ios::out|ios::in|ios::app);
	int b=roomchecker(a);
	if(b==1)
	
	{
		
		while(!muneeb.eof()){
			getline(muneeb,str2,'.');
			if(str2==str){
				
				getline(muneeb,str2,'.');
				cout<<"NAME :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"AGE :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"ADRESS :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"ID-CARD :- "<<str2<<endl;
				
				
				cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		     	default:
		   		invalidinput();
		   		 break;
				}
				
			}else {
				
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				
			}
			
			
		}
		muneeb.close();
		
		
		
	}else if(b==2){
		
		cout<<"\t\t\t\t\t _______________________________"<<endl;
		cout<<"\t\t\t\t\t| this room is empty  :         |"<<endl;
		cout<<"\t\t\t\t\t|_______________________________|"<<endl;
		muneeb.close();
		
		cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;


	}}else{
		
		
		cout<<"\t\t\t\t\t _______________________________"<<endl;
		cout<<"\t\t\t\t\t| wrong choice        :         |"<<endl;
		cout<<"\t\t\t\t\t|_______________________________|"<<endl;
		muneeb.close();
		
		cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;
		
		
	}
	
	
	
}

}






//for executive



void showspecificexecutive(){

                          
	
	back:
		cin.ignore();   
		int a;
	int choice;
	string str;
	string str2;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|enter the room no of which u want to see record |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	getline(cin,str);
	istringstream convert(str);
	if(!(convert>>a)){
		a=0;
	}
	
		fstream muneeb;
		muneeb.open("specificexecutive.txt",ios::out|ios::in|ios::app);
	int b=roomcheckerexecutive(a);
	if(b==1)
	
	{
		
		while(!muneeb.eof()){
			getline(muneeb,str2,'.');
			if(str2==str){
				
				getline(muneeb,str2,'.');
				cout<<"NAME :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"AGE :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"ADRESS :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"ID-CARD :- "<<str2<<endl;
				
				
				cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;
				}
				
			}else {
				
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				
			}
			
			
		}
		muneeb.close();
		
		
		
	}else if(b==2){
		
		cout<<"\t\t\t\t\t _______________________________"<<endl;
		cout<<"\t\t\t\t\t| this room is empty  :         |"<<endl;
		cout<<"\t\t\t\t\t|_______________________________|"<<endl;
		muneeb.close();
		
		cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;


}	}else{
		
		
		cout<<"\t\t\t\t\t _______________________________"<<endl;
		cout<<"\t\t\t\t\t| wrong choice        :         |"<<endl;
		cout<<"\t\t\t\t\t|_______________________________|"<<endl;
		muneeb.close();
		
		cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;
		
		
	}
	
	
	
}}


//for deluxe 




void showspecificdeluxe(){
	
	
	back:
		cin.ignore();   
		int a;
	int choice;
	string str;
	string str2;
	cout<<"\t\t\t\t\t ________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|enter the room no of which u want to see record |"<<endl;
	cout<<"\t\t\t\t\t|________________________________________________|"<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	getline(cin,str);
	istringstream convert(str);
	if(!(convert>>a) ){
		a=0;
	}
	
		fstream muneeb;
		muneeb.open("specificdeluxe.txt",ios::out|ios::in|ios::app);
	int b=roomcheckerdeluxe(a);
	if(b==1)
	
	{
		
		while(!muneeb.eof()){
			getline(muneeb,str2,'.');
			if(str2==str){
				
				getline(muneeb,str2,'.');
				cout<<"NAME :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"AGE :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"ADRESS :- "<<str2<<endl;
				
				getline(muneeb,str2,'.');
				cout<<"ID-CARD :- "<<str2<<endl;
				
				
				cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;
				}
				
			}else {
				
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				getline(muneeb,str2,'.');
				
			}
			
			
		}
		muneeb.close();
		
		
		
	}else if(b==2){
		
		cout<<"\t\t\t\t\t _______________________________"<<endl;
		cout<<"\t\t\t\t\t| this room is empty  :         |"<<endl;
		cout<<"\t\t\t\t\t|_______________________________|"<<endl;
		muneeb.close();
		
		cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;


}	}else{
		
		
		cout<<"\t\t\t\t\t _______________________________"<<endl;
		cout<<"\t\t\t\t\t| wrong choice        :         |"<<endl;
		cout<<"\t\t\t\t\t|_______________________________|"<<endl;
		muneeb.close();
		
		cout<<"\t\t\t\t\t _____________________________"<<endl;
				cout<<"\t\t\t\t\t|Press 1 to do it again      |"<<endl;
				cout<<"\t\t\t\t\t|____________________________|___"<<endl;
				cout<<"\t\t\t\t\t|press to to enter in main menu  |"<<endl;
				cout<<"\t\t\t\t\t|________________________________|"<<endl;
				cout<<"\t\t\t\t\t|press 3 to exit |"<<endl;
				cout<<"\t\t\t\t\t|________________|"<<endl;
				cin>>choice;
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				switch (choice){
					
					case 1:
						goto back;
						break;
					case 2:
						showmenu();
						break;
					case 3:
						exit(0);
		   	default:
		   		invalidinput();
		   		 break;
		
		
	}
	
	
}
}




void showspecificpname(){
	
	
	back:
		cin.ignore();
	int a=0;
	string str;
	string str1;
	string str2;
	cout<<"\t\t\t\t\t _________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the name to search :      |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	getline(cin,str);
	fstream muneeb;
	muneeb.open("specificpresidential.txt",ios::out|ios::in|ios::app);
	while(!muneeb.eof()){
		
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		if(str2==str){
			cout<<"ROOM NO :-"<<str1<<endl;
			cout<<"NAME :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"AGE :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"ADRESS :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"IDCARD :- "<<str2<<endl;
			a++;
			int choice ;
			muneeb.close();
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			switch (choice){
				if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
			
			
		}else{
			
			
			
		getline(muneeb,str2,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str2,'.');
			
		}
	}
	if(a!=1){
		
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
	}
	muneeb.close();
	
}







void showspecificename(){
	
	
	back:
		cin.ignore();
	int a=0;
	string str;
	string str1;
	string str2;
	cout<<"\t\t\t\t\t _________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the name to search :      |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	getline(cin,str);
	fstream muneeb;
	muneeb.open("specificexecutive.txt",ios::out|ios::in|ios::app);
	while(!muneeb.eof()){
		
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		if(str2==str){
			cout<<"ROOM NO :-"<<str1<<endl;
			cout<<"NAME :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"AGE :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"ADRESS :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"IDCARD :- "<<str2<<endl;
			a++;
			muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
			
			
		}else{
			
			
			
		getline(muneeb,str2,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str2,'.');
			
		}
	}
	if(a!=1){
		
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
	}
	muneeb.close();
}









void showspecificdname(){
	

	back:
		cin.ignore();
	int a=0;
	string str;
	string str1;
	string str2;
	cout<<"\t\t\t\t\t _________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the name to search :      |"<<endl;
	cout<<"\t\t\t\t\t|_________________________________|"<<endl;
	getline(cin,str);
	fstream muneeb;
	muneeb.open("specificdeluxe.txt",ios::out|ios::in|ios::app);
	while(!muneeb.eof()){
		
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		if(str2==str){
			cout<<"ROOM NO :-"<<str1<<endl;
			cout<<"NAME :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"AGE :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"ADRESS :- "<<str2<<endl;
			getline(muneeb,str2,'.');
			cout<<"IDCARD :- "<<str2<<endl;
			a++;
			muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
			
			
		}else{
			
			
			
		getline(muneeb,str2,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str2,'.');
			
		}
	}
	if(a!=1){
		
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
	}
	muneeb.close();
}






void showspecificpadress(){
	
	back:
	cin.ignore();
	string str,str1,str2,str3,str4;
	int a;
	
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the adress u want to search  |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	getline(cin,str);
	
	fstream muneeb;
	muneeb.open("specificpresidential.txt",ios::out|ios::in|ios::app);
	
	while(!muneeb.eof()){
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str3,'.');
		getline(muneeb,str4,'.');
		if(str4==str){
			cout<<" room no :-"<<str1<<endl;
			cout<<" Name :- "<<str2<<endl;
			cout<<"age :-"<<str3<<endl;
			cout<<"adress :-"<<str4<<endl;
			getline(muneeb,str4,'.');
			cout<<"id card :-"<<str4<<endl;
			a++;
				muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
			
		}else
		
			{
			getline(muneeb,str4,'.');}
	}
		
		
		if(a!=1){
			
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
		
		
		}
		
		muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
	
	
}















void showspecificeadress(){
	
	back:
	cin.ignore();
	string str,str1,str2,str3,str4;
	int a;
	
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the adress u want to search  |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	getline(cin,str);
	
	fstream muneeb;
	muneeb.open("specificexecutive.txt",ios::out|ios::in|ios::app);
	
	while(!muneeb.eof()){
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str3,'.');
		getline(muneeb,str4,'.');
		if(str4==str){
			cout<<" room no :-"<<str1<<endl;
			cout<<" Name :- "<<str2<<endl;
			cout<<"age :-"<<str3<<endl;
			cout<<"adress :-"<<str4<<endl;
			getline(muneeb,str4,'.');
			cout<<"id card :-"<<str4<<endl;
			a++;
				muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
			
		}else
		
			{
			getline(muneeb,str4,'.');}
	}
		
		
		if(a!=1){
			
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
		
		
		}
		
		muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
	
	
}












void showspecificdadress(){
	
	back:
	cin.ignore();
	string str,str1,str2,str3,str4;
	int a;
	
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the adress u want to search  |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	getline(cin,str);
	
	fstream muneeb;
	muneeb.open("specificpresidential.txt",ios::out|ios::in|ios::app);
	
	while(!muneeb.eof()){
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str3,'.');
		getline(muneeb,str4,'.');
		if(str4==str){
			cout<<" room no :-"<<str1<<endl;
			cout<<" Name :- "<<str2<<endl;
			cout<<"age :-"<<str3<<endl;
			cout<<"adress :-"<<str4<<endl;
			getline(muneeb,str4,'.');
			cout<<"id card :-"<<str4<<endl;
			a++;
				muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
			
		}else
		
			{
			getline(muneeb,str4,'.');}
	}
		
		
		if(a!=1){
			
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
		
		
		}
		
		muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
	
	
}













void showspecificpidcard(){

	back:
	cin.ignore();
	string str,str1,str2,str3,str4,str5;
	int a;
	
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the id card u want to search |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	getline(cin,str);
	
	fstream muneeb;
	muneeb.open("specificpresidential.txt",ios::out|ios::in|ios::app);
	
	while(!muneeb.eof()){
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str3,'.');
		getline(muneeb,str4,'.');
		getline(muneeb,str5,'.');
		if(str5==str){
			cout<<" room no :-"<<str1<<endl;
			cout<<" Name :- "<<str2<<endl;
			cout<<"age :-"<<str3<<endl;
			cout<<"adress :-"<<str4<<endl;
			cout<<"ID card :-"<<str5<<endl;
			a++;
				muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
			
		} 
		}
		
		
		if(a!=1){
			
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
		
		
		}
		
		muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
	
	
}







void showspecificeidcard(){
	
	back:
	cin.ignore();
	string str,str1,str2,str3,str4,str5;
	int a;
	
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the id card u want to search |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	getline(cin,str);
	
	fstream muneeb;
	muneeb.open("specificexecutive.txt",ios::out|ios::in|ios::app);
	
	while(!muneeb.eof()){
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str3,'.');
		getline(muneeb,str4,'.');
		getline(muneeb,str5,'.');
		if(str5==str){
			cout<<" room no :-"<<str1<<endl;
			cout<<" Name :- "<<str2<<endl;
			cout<<"age :-"<<str3<<endl;
			cout<<"adress :-"<<str4<<endl;
			cout<<"ID card :-"<<str5<<endl;
			a++;
				muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
			
		} 
		}
		
		
		if(a!=1){
			
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
		
		
		}
		
		muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
	
	
}








void showspecificdidcard(){
	
	back:
	cin.ignore();
	string str,str1,str2,str3,str4,str5;
	int a;
	
	cout<<"\t\t\t\t\t ____________________________________"<<endl;
	cout<<"\t\t\t\t\t| Enter the id card u want to search |"<<endl;
	cout<<"\t\t\t\t\t|____________________________________|"<<endl;
	getline(cin,str);
	
	fstream muneeb;
	muneeb.open("specificdeluxe.txt",ios::out|ios::in|ios::app);
	
	while(!muneeb.eof()){
		getline(muneeb,str1,'.');
		getline(muneeb,str2,'.');
		getline(muneeb,str3,'.');
		getline(muneeb,str4,'.');
		getline(muneeb,str5,'.');
		if(str5==str){
			cout<<" room no :-"<<str1<<endl;
			cout<<" Name :- "<<str2<<endl;
			cout<<"age :-"<<str3<<endl;
			cout<<"adress :-"<<str4<<endl;
			cout<<"ID card :-"<<str5<<endl;
			a++;
				muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
			
		} 
		}
		
		
		if(a!=1){
			
		cout<<"\t\t\t\t\t ________________________"<<endl;
		cout<<"\t\t\t\t\t| sorry record not found |"<<endl;
		cout<<"\t\t\t\t\t|________________________|"<<endl;
		
		
		
		}
		
		muneeb.close();
			int choice ;
			
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 1 to do again        |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 2 to goto main menu  |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cout<<"\t\t\t\t\t ____________________________"<<endl;
			cout<<"\t\t\t\t\t| press 3 to exit            |"<<endl;
			cout<<"\t\t\t\t\t|____________________________|"<<endl;
			cin>>choice;
			if(cin.fail()){
		
		cin.clear();
		cin.ignore();
	}
	
			switch (choice){
				
				case 1:
					goto back;
						break;
				case 2:
				showmenu();
				break;
				case 3:
					exit(0);
		   	default:
		   		invalidinput();
		   		 break;
			}
		
	
	
}







void invalidinput(){
	
	
	cout<<"\t\t\t\t\t _____________________________________________"<<endl;
	cout<<"\t\t\t\t\t| U have entered somthing invalid :           |"<<endl;
	cout<<"\t\t\t\t\t|_____________________________________________|"<<endl;
	cout<<" _________________________"<<endl;
	cout<<"|entring in main menu   : |"<<endl;
	cout<<"|_________________________|\n\n"<<endl;
	showmenu();
}




