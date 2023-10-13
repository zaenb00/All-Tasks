//PD lab 5
//Task 1

#include<iostream>
using namespace std;

int value1=10;
int value2=20;

int sum()
{	value1 = 40;
	return value1 + value2;
}
main()
{	
	int x= value1;
	value1 = 100;
	x = 20;
	value2 = sum();
	cout << value1<<" "<<value2;

}

//Task 2

#include<iostream>
using namespace std;

string pyramidVolume(double length,double width,double height,string unit);
main()
{	double length,width,height;
	string unit,V1;
	cout << "Enter the length of the pyramid (in meters): ";
	cin>> length;
	cout<< "Enter the width of the pyramid (in meters): ";
	cin>> width;
	cout<< "Enter the height of the pyramid (in meters): ";
	cin>> height;
	cout<< "enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>> unit;
     

    V1= pyramidVolume(length,width,height,unit);
	cout<<V1;

}

//Task3

#include<iostream>
using namespace std;
float taxCalculator(char type, float price);

main()
{
    char vehicleCode;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin>> vehicleCode;
    float price, answer;
    cout<< "Enter the price of vehicle: $";
    cin>> price;

    answer = taxCalculator(vehicleCode, price);

    cout<<"The final price of a vehicle of type "<< vehicleCode<<" after adding the tax is "<< answer<<".00.";



}

float taxCalculator(char type, float price)
{
    float totalPrice;

    if(type=='M')
    {
        float MTax;
        MTax = price*0.06;
        totalPrice=price+MTax;
    }

    if(type=='E')
    {
        float ETax;
        ETax = price*0.08;
        totalPrice=price+ETax;
    }

    if(type=='S')
    {
        float STax;
        STax = price*0.1;
        totalPrice=price+STax;
    }

    if(type=='V')
    {
        float VTax;
        VTax= price*0.12;
        totalPrice=price+VTax;
    }

    if(type=='T')
    {
        float TTax;
        TTax = price*0.15;
        totalPrice=price*TTax;
    }

    return totalPrice;
}

//Task4

#include<iostream>
using namespace std;
int projectTimeCalculation(int neededHours, int daysFirmHas, int NumOfWorkers);

main(){
    int neededHours, daysFirmHas, NumOfWorkers, workingHours, hoursToDoProject;
    cout<<"Enter the needed hours: ";
    cin>> neededHours;
    cout<<"Enter the days that the firm has: ";
    cin>> daysFirmHas;
    cout<<"Enter the number of all workers: ";
    cin>> NumOfWorkers;
    
    workingHours= projectTimeCalculation(neededHours,daysFirmHas, NumOfWorkers);

     if(workingHours<neededHours){
        hoursToDoProject=neededHours-workingHours;
        cout<< "Not enough time! "<<hoursToDoProject<<" hours needed.";
    }

    if(workingHours>=neededHours){
        hoursToDoProject=workingHours-neededHours;
        cout<< "Yes!" <<hoursToDoProject<< " hours left.";
    }

    
    
}

int projectTimeCalculation(int neededHours, int daysFirmHas, int NumOfWorkers)
{
    int nonWorkingDays, workingHours, WorkingHoursOfWorkers, workingdays;
    WorkingHoursOfWorkers=10*NumOfWorkers*daysFirmHas;
    nonWorkingDays= WorkingHoursOfWorkers*0.1;
    workingHours=WorkingHoursOfWorkers-nonWorkingDays;
    return workingHours;
}

//Task5
#include<iostream>
#include<windows.h>
#include<cmath>
#include<conio.h>
using namespace std;
void header();
void gotoxy(int x,int y);
void rose();
void tulip();
void welcome();
int options(int opt);
void handmade(int option4);
void flowers(int option1);
void paintings(int option2);
void diys(int option3);

main(){
	system("cls");
	int opt;
	
	while(true)
	{
		header();
		tulip();
		rose();
		welcome();
		opt=options(opt);
		int x=47,y=35;
		gotoxy(x,y+13);
		cout<<"Press any Key to continue: "<<endl;
		getch();
	if(opt==1)
	{
		flowers(opt);
	}

	if(opt==2)
	{
		paintings(opt);
	}

	if(opt==3)
	{
		diys(opt);
	}

	if(opt==4)
	{
		handmade(opt);
	}
	gotoxy(x,y);
	cout<<"Press any Key to continue: "<<endl;
	getch();
	system("cls");
}
	
}

void header()
{
    cout<<"************************************************************************************************************************************************************************"<<endl;
    cout<<"*   ________________________________________________________________________________________________________________________________________________________________   *"<<endl;
    cout<<"*  |                                                                                                                                                                |  *"<<endl;
    cout<<"*  |   .---..                                                                                          .---.                                                        |  *"<<endl;                                                                          
    cout<<"*  |  /   /  '.                                                                                     ,'  .' |                            ,--,                        |  *"<<endl;
    cout<<"*  | |   :     :                ,---,    ,---.                       ,--,  __  ,-.                ,---.'   |         ,--,             ,--.'|    ,---.        ,---,  |  *"<<endl;
    cout<<"*  | .   |  ;. /            ,-+-. /  |  '   ,''.  .--.--.          ,'_ /|,' ,'/ /|                |   |   .'       ,'_ /|   .--.--.   |  |,    '   ,''.  ,-+-. /  | |  *"<<endl;
    cout<<"*  | .   ; /--`      .--,  ,--.'|'   | /   /   | /  /    '    .--. |  | :'  | |' | ,---.          :   :  :    .--. |  | :  /  /    '. `--'_   /   /   | ,--.'|'   | |  *"<<endl;
    cout<<"*  | ;   | ;       /_ ./| |   |  ,.' |.   ; ,. :|  :  /`./  ,'_ /| :  . ||  |   ./    _:          :   |  |-,,'_ /| :  . | |  :   .'./  ,' ,'| .   ; _ ::   |  ,.' | |  *"<<endl;
    cout<<"*  | |   : |     , ' , ': |   | /  | |'   | |: :|  :  ;_    |  ' | |  . .'  :  / /    /  |        |   :  ;/||  ' | |  . . |  :  ;_    '  | | '   | |: :|   | /  | | |  *"<<endl;
    cout<<"*  | .   | '___ /___/: :| |   | |  | |'   | .; :'. '.   `.  |  | ' |  | ||  | ' .    ' /||        |   |   .'|  | ' |  | | '. '.    `. |  | : '   | .; :|   | |  | | |  *"<<endl;
    cout<<"*  | '   ; : .'|.  :  ' | |   | |  |/ |   :    |  `----.  : :  | : ;  ; |;  : | '   ; ' /|        '   :  '  :  | : ;  ; |   `----.   : '  : |_|   :    ||   | |  |/ |  *"<<endl;
    cout<<"*  | '   | '/  : :  ;   : |   | |--'  '.  '.  /  /  /`--' / '  :  `--'  ''. , ; '   | |/'         |   |  |  '  :  `--'  '. /  /`--'  /|  | '.':   '.  / |   | |--'  |  *"<<endl;
    cout<<"*  | |   :    /   :  :  ; |   |/        `----'  '--'.    /  :  ,      .-./---'  |   :    |        |   :  :  :  ,      .-./'--'.     / ;  :    ;`----'  |   |/       |  *"<<endl;
    cout<<"*  |  '.  '. .'     :  : : '---'                   `--'--'    `--`----'          '.  '.  /         |   | ,'   `--`----'      `--'---'  |  ,   /         '---'       |  *"<<endl;
    cout<<"*  |    `---`        '  ' ;                                                        `----'          `----'                               ---`-'                      |  *"<<endl;                                                               
    cout<<"*  |                  '--'                                                                                                                                          |  *"<<endl;
    cout<<"*  |________________________________________________________________________________________________________________________________________________________________|  *"<<endl;
    cout<<"*                                                                                                                                                                      *"<<endl;
    cout<<"************************************************************************************************************************************************************************"<<endl;
}

void rose()
{	int x=95, y=25;
	gotoxy(x,y);
	cout<<" @}-,-'--- "<<endl;
}

void gotoxy(int x,int y)
{	
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void tulip()
{	int x=42, y=24;
	gotoxy(x, y);
	cout<<"  //-_-\\\\  "<<endl;
	gotoxy(x, y+1);
	cout<<" //  |  \\\\ "<<endl;  
	gotoxy(x, y+2); 
        cout<<" \\\\_-_-_// "<<endl;
	gotoxy(x, y+3);
	cout<<"    | | ____ "<<endl;
	gotoxy(x, y+4);
        cout<<"    | |//_// "<<endl;
	gotoxy(x, y+5);
        cout<<"    | |      "<<endl;
}

void welcome()
{	int x=55, y=25;
	gotoxy(x,y+1);
	cout<<" _      _  ____  __    ___  _____  ___  ___  ____ "<<endl;
	gotoxy(x,y+2);
	cout<<"( \\//\\// )( ___)(  )  //__)(  _  )(  \\\\//  )( ___)"<<endl;
	gotoxy(x,y+3);
	cout<<" )      (  )__)  )(__( (__  )(_)(  )      (  )__) "<<endl;
	gotoxy(x,y+4);
	cout<<"(__//\\\\__)(____)(____)\\___)(_____)(_//\\//\\_)(____)"<<endl;
}

int options(int opt)
{	int x=47, y=35;
	gotoxy(x,y);
	cout<<"--------------------[| HOMEPAGE |]-----------------------"<<endl;
	gotoxy(x,y+1);
	cout<<"                                                         "<<endl;
	gotoxy(x,y+2);
	cout<<"Select your Interest:"<<endl;
	gotoxy(x,y+3);
	cout<<"                     "<<endl;
	gotoxy(x,y+4);
	cout<<"To Choose Flowers, Enter 1"<<endl;
	gotoxy(x,y+5);
	cout<<"To Choose Paintings, Enter 2"<<endl;
	gotoxy(x,y+6);
	cout<<"To Choose DIYs, Enter 3"<<endl;
	gotoxy(x,y+7);
	cout<<"To Choose Handmade Objects, Enter 4"<<endl;
	gotoxy(x,y+9);
	cout<<"Enter your option: ";
	cin>> opt;
	gotoxy(x,y+11);
	cout<< "You've chosen option "<<opt<<endl;
	
	return opt;
	
}


void flowers(int option1)
     
{	int x= 47, y=38;
	gotoxy(x,y+12);
	cout<< "Choose kind of Flowers you want to buy:"<<endl;
	gotoxy(x,y+13);
	cout<< "Enter 1 to choose Tulip"<<endl;
	gotoxy(x,y+14);
	cout<<"Enter 2 to choose Rose"<<endl;
	gotoxy(x,y+15);
	cout<< "Enter 3 to choose Daffodils"<<endl;
	gotoxy(x,y+16);
	cout<<"Enter 4 to choose Daisy"<<endl;
	gotoxy(x,y+17);
	cout<<"Enter 5 to choose Jasmine"<<endl;
	gotoxy(x,y+19); 
	cout<<"Enter your choice: ";
	cin >> option1;
	gotoxy(x,y+21);
	cout<<"You have chosen option "<<option1<<endl;

	gotoxy(x,y+23);
	cout<<"Press any Key to continue: "<<endl;
	getch();
}


void paintings(int option2)		
{	int x= 47, y=38;
	gotoxy(x,y+12);
	cout<< "Choose kind of Paintings you want to buy:"<<endl;
	gotoxy(x,y+13);
	cout<< "Enter 1 to choose oil paintings"<<endl;
	gotoxy(x,y+14);
	cout<<"Enter 2 to choose vibrant colours"<<endl;
	gotoxy(x,y+15);
	cout<< "Enter 3 to choose abstract work"<<endl;
	gotoxy(x,y+16);
	cout<<"Enter 4 to choose contemporary digital art"<<endl;
	gotoxy(x,y+18);
	cout<<"Enter your choice: ";
	cin >> option2;
	gotoxy(x,y+20);
	cout<<"You have chosen option "<<option2<<endl;
	
	gotoxy(x,y+22);
	cout<<"Press any Key to continue: "<<endl;
	getch();
}	
	
	
void diys(int option3)
{	int x= 47, y=38;
	gotoxy(x,y+12);
	cout<< "Choose kind of DIYs you want to buy:"<<endl;
	gotoxy(x,y+13);
	cout<< "Enter 1 to choose Cards"<<endl;
	gotoxy(x,y+14);
	cout<<"Enter 2 to choose Stickers"<<endl;
	gotoxy(x,y+15);
	cout<< "Enter 3 to choose Bracelets"<<endl;
	gotoxy(x,y+16);
	cout<<"Enter 4 to choose Necklaces"<<endl;
	gotoxy(x,y+17);
	cout<<"Enter 5 to choose Room Decor"<<endl;
	gotoxy(x,y+19); 
	cout<<"Enter your choice: ";
	cin >> option3;
	gotoxy(x,y+21);
	cout<<"You have chosen option "<<option3<<endl;

	gotoxy(x,y+23);
	cout<<"Press any Key to continue: "<<endl;
	getch();
}	
	
	
void handmade(int option4)
{	int x= 47, y=38;
	gotoxy(x,y+12);
	cout<< "Choose kind of Handmade Objects you want to buy:"<<endl;
	gotoxy(x,y+13);
	cout<< "Enter 1 to choose hand-knit scarves"<<endl;
	gotoxy(x,y+14);
	cout<<"Enter 2 to choose Pottery"<<endl;
	gotoxy(x,y+15);
	cout<< "Enter 3 to choose Hand-sewn quilts"<<endl;
	gotoxy(x,y+16);
	cout<<"Enter 4 to choose Wooden Furniture"<<endl;
	gotoxy(x,y+17);
	cout<<"Enter 5 to choose innovative hand-made gadgets"<<endl;
	gotoxy(x,y+19); 
	cout<<"Enter your choice: ";
	cin >> option4;
	gotoxy(x,y+21);
	cout<<"You have chosen option "<<option4<<endl;

	gotoxy(x,y+23);
	cout<<"Press any Key to continue: "<<endl;
	getch();
}
	
//Task6
#include<iostream>
#include<windows.h>
# include<conio.h>
using namespace std;
char getCharAtxy(short int x, short int y);
void gotoxy(int x,int y);
void header();
void printmaze();
void printenemy1();
void moveenemy1();
void printenemy2();
void moveenemy2();
void printenemy3();
void moveenemy3();
void removeenemy1();
void removeenemy2();
void removeenemy3();
void printplayer();
void removeplayer();
void moveplayerleft();
void moveplayerright();
void menu();

int ex1=31, ey1=32, ex2=55, ey2=32, ex3=31, ey3=32, px= 35, py=63;

main()
{
    	system("cls");
	header();
	menu();
	printmaze();
	printenemy1();
	printenemy2();
	printenemy3();

	printplayer();
	while(true)
	{	if (GetAsyncKeyState(VK_LEFT))
   	 	{
       			 moveplayerleft();
   		}
       		if (GetAsyncKeyState(VK_RIGHT))
        	{
           		 moveplayerright();
		}
	moveenemy1();
	moveenemy2();
	moveenemy3();

	Sleep(200);
	}
	getch();
}


void header()
{	int X=15, Y=1;
	gotoxy(X,Y);
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	gotoxy(X,Y+1);
	cout<<"%  __________________________________________________________________________________________________________________________________  %"<<endl;
	gotoxy(X,Y+2);
	cout<<"% |																    | %"<<endl;
	gotoxy(X,Y+3);
	cout<<"% |      ,------.                                       ,--.                             ,-----.                          ,--.       | %"<<endl;
	gotoxy(X,Y+4);
	cout<<"% |	|  .---' ,---.  ,---.,--.  ,--.,---. ,--,--, ,-'  '-.,--.,--.,--.--. ,---.     '  .-.  '  ,--.,--. ,---.  ,---.,-'  '-.     | %"<<endl;
	gotoxy(X,Y+5);
	cout<<"% |	|  `--, | .-. || .-. |'  `'  /| .-. :|      |'-.  .-'|  ||  ||  .--'| .-. :    |  | |  |  |  ||  || .-. :(  .-''-.  .-'     | %"<<endl;
	gotoxy(X,Y+6);
	cout<<"% |	|  `---.' '-' '' '-' ' '    / |   --.|  ||  |  |  |  '  ''  '|  |   |   --.    '  '-'  '-.'  ''  '|   --..-'  `) |  |       | %"<<endl;
	gotoxy(X,Y+7);
	cout<<"% |	`------'.`-  / .`-  /   `--'   `----'`--''--'  `--'   `----' `--'    `----'     `-----'--' `----'  `----'`----'  `--'       | %"<<endl;
	gotoxy(X,Y+8);
	cout<<"% |	        `---'  `---'                                                                                                        | %"<<endl;
	gotoxy(X,Y+9);
	cout<<"% |__________________________________________________________________________________________________________________________________| %"<<endl;
	gotoxy(X,Y+10);
	cout<<"%                        												              %"<<endl;
	gotoxy(X,Y+11);
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

}

void menu()
{	int xg=60, yg=15;
	gotoxy(xg, yg);
	cout<<"--Wanna Have some Adventure with Hatchlings--"<<endl;
	gotoxy(xg+15,yg+1);
	cout<<"     __//    "<<endl;
	gotoxy(xg+15,yg+2);
	cout<<"    / ._.\\  "<<endl;
	gotoxy(xg+15,yg+3);
	cout<<"    \\  V /   "<<endl;
	gotoxy(xg+15,yg+4);
	cout<<"'___/    \\  "<<endl;
	gotoxy(xg+15,yg+5);
	cout<<" \\       )  "<<endl;
	gotoxy(xg+15,yg+6);
	cout<<"  \\_____/   "<<endl;
	gotoxy(xg+15,yg+7);
	cout<<"_____|_|_____"<<endl;
	gotoxy(xg+15,yg+8);
	cout<<"     " "     "<<endl;
	gotoxy(xg+8,yg+9);
	cout<<"Press any Key to Continue.."<<endl;
	getch();
}

void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze()
{	int x=30,y=30;
 	gotoxy(x,y);
   	 cout<<"##########################################################################################################"<<endl;
    gotoxy(x,y+1);
    	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+2);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+3);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+4);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+5);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+6);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+7);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+8);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+9);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+10);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+11);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+12);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+13);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+14);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+15);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+16);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+17);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+18);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+19);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+20);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+21);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+22);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+23);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+24);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+25);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+26);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+27);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+28);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+29);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+30);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+31);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+32);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+33);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+34);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+35);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+36);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+37);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+38);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+39);
	cout<<"#                                                                                                        #"<<endl;
    gotoxy(x,y+40);
	cout<<"##########################################################################################################"<<endl;
}
    

void printenemy1()
{	gotoxy(ex1, ey1);
	cout <<"   '.'.'.'.       "<<endl;
	gotoxy(ex1,ey1+1);
	cout <<"  .'.'.'.'.'.     "<<endl;
	gotoxy(ex1, ey1+2);
	cout <<"  ' --   --  '    "<<endl;
	gotoxy(ex1, ey1+3);
	cout <<" | ( o) (o )  | |;"<<endl;
	gotoxy(ex1, ey1+4);
	cout <<" |  '' ^ ''   |/| "<<endl;
	gotoxy(ex1, ey1+5);
	cout <<"(|            |   "<<endl;
	gotoxy(ex1, ey1+6);
	cout <<" '.__________.'   "<<endl;
	gotoxy(ex1, ey1+7);
	cout <<"    Oo'  Oo'      "<<endl;
}
	


void removeenemy1()
{	gotoxy(ex1, ey1);
	cout <<"                  "<<endl;
	gotoxy(ex1,ey1+1);
	cout <<"                  "<<endl;
	gotoxy(ex1, ey1+2);
	cout <<"                  "<<endl;
	gotoxy(ex1, ey1+3);
	cout <<"                  "<<endl;
	gotoxy(ex1, ey1+4);
	cout <<"                  "<<endl;
	gotoxy(ex1, ey1+5);
	cout <<"                  "<<endl;
	gotoxy(ex1, ey1+6);
	cout <<"                  "<<endl;
	gotoxy(ex1, ey1+7);
	cout <<"                  "<<endl;
}


void moveenemy1()
{	removeenemy1();
	ex1=ex1+1;
	if(ex1==110)
	{
		ex1=31;
	}
	printenemy1();
}


void printenemy2()
{	gotoxy(ex2, ey2);
	cout <<"   '.'.'.'.       "<<endl;
	gotoxy(ex2,ey2+1);
	cout <<"  .'.'.'.'.'.     "<<endl;
	gotoxy(ex2, ey2+2);
	cout <<"  ' --   --  '    "<<endl;
	gotoxy(ex2, ey2+3);
	cout <<" | ( o) (o )  | |;"<<endl;
	gotoxy(ex2, ey2+4);
	cout <<" |  '' ^ ''   |/| "<<endl;
	gotoxy(ex2, ey2+5);
	cout <<"(|            |   "<<endl;
	gotoxy(ex2, ey2+6);
	cout <<" '.__________.'   "<<endl;
	gotoxy(ex2, ey2+7);
	cout <<"    Oo'  Oo'      "<<endl;
}


void removeenemy2()
{	gotoxy(ex2, ey2);
	cout <<"                  "<<endl;
	gotoxy(ex2,ey2+1);
	cout <<"                  "<<endl;
	gotoxy(ex2, ey2+2);
	cout <<"                  "<<endl;
	gotoxy(ex2, ey2+3);
	cout <<"                  "<<endl;
	gotoxy(ex2, ey2+4);
	cout <<"                  "<<endl;
	gotoxy(ex2, ey2+5);
	cout <<"                  "<<endl;
	gotoxy(ex2, ey2+6);
	cout <<"                  "<<endl;
	gotoxy(ex2, ey2+7);
	cout <<"                  "<<endl;
}

void moveenemy2()
{	removeenemy2();
	ey2=ey2+1;
	if(ey2==45)
	{
		ey2=32;
	}
	printenemy2();
}


void printenemy3()
{	gotoxy(ex3, ey3);
	cout <<"    //\\//\\//\\      "<<endl;
	gotoxy(ex3, ey3+1);
	cout <<"  .'__   __ '.    "<<endl;
	gotoxy(ex3, ey3+2);
	cout <<" | ( .) (. )  | |>"<<endl;
	gotoxy(ex3, ey3+3);
	cout <<" |  "" ^ ""       |/| "<<endl;
	gotoxy(ex3, ey3+4);
	cout <<"(|        evil|   "<<endl;
	gotoxy(ex3, ey3+5);
	cout <<" '.__________.'   "<<endl;
	gotoxy(ex3, ey3+6);
	cout <<"    Oo'  Oo'      "<<endl;
}



void removeenemy3()
{	gotoxy(ex3, ey3);
	cout <<"                  "<<endl;
	gotoxy(ex3, ey3+1);
	cout <<"                  "<<endl;
	gotoxy(ex3, ey3+2);
	cout <<"                  "<<endl;
	gotoxy(ex3, ey3+3);
	cout <<"                  "<<endl;
	gotoxy(ex3, ey3+4);
	cout <<"                  "<<endl;
	gotoxy(ex3, ey3+5);
	cout <<"                  "<<endl;
	gotoxy(ex3, ey3+6);
	cout <<"                  "<<endl;
}


void moveenemy3()
{	removeenemy3();
	ex3=ex3+3;
	ey3=ey3+1;
	if(ex3>110||ey3>62)
	{
		ex3=31;
		ey3=32;
	}
	printenemy3();
}


void printplayer()
{	gotoxy(px,py);
	cout <<"   <o>;;;;   "<<endl;
	gotoxy(px,py+1);
	cout <<" .'..   ..'. "<<endl;
	gotoxy(px,py+2);
	cout <<"| ( O) (O ) |"<<endl;
	gotoxy(px,py+3);
	cout <<"|  '' ^ ''  |"<<endl;
	gotoxy(px,py+4);
	cout <<"|   \\\\ ,*// |"<<endl;
	gotoxy(px,py+5);
	cout <<"'.___(_)___.'"<<endl;
	gotoxy(px,py+6);
	cout <<"   Oo'  Oo'  "<<endl;
}


void removeplayer()
{	gotoxy(px,py);
	cout <<"             "<<endl;
	gotoxy(px,py+1);
	cout <<"             "<<endl;
	gotoxy(px,py+2);
	cout <<"             "<<endl;
	gotoxy(px,py+3);
	cout <<"             "<<endl;
	gotoxy(px,py+4);
	cout <<"             "<<endl;
	gotoxy(px,py+5);
	cout <<"             "<<endl;
	gotoxy(px,py+6);
	cout <<"             "<<endl;
}




void moveplayerleft()
{   if(getCharAtxy(px-1,py)==' ')
{
    removeplayer();
    px=px-1;
    printplayer();
}
}
void moveplayerright()
{   if(getCharAtxy(px+14,py)==' ')
{
    removeplayer();
    px=px+1;
    printplayer();
}
}
char getCharAtxy(short int x, short int y)
{                 
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}	