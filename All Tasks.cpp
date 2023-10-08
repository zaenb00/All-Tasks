//PDlab3
//Task1
#include <iostream>
using namespace std;

main() {
	cout<<"Enter the number of sides of the polygon: ";
	int sides;
	cin>>sides;
	int angle;
	angle=(sides-2)*180;
	cout<<"The sum of internal angles of a " <<sides <<"-sided polygon is: "<<angle <<" degrees";
}


//Task2
#include <iostream>
using namespace std;

main() {
	cout<<"Number of Minutes: ";
	int min;
	cin>>min;
	min=min*60;
	cout<<"Frames per Second: ";
	int sec;
	cin>>sec;
	int total;
	total=min*sec;
	cout<<"Total Number of Frames: "<<total;
}


//Task3
#include <iostream>
using namespace std;

main() {
	cout<<"Enter Initial Velocity (m/s): ";
	float initial;
	cin>>initial;
	cout<<"Enter Acceleration (m/s^2): ";
	float acc;
	cin>>acc;
	cout<<"Enter Time (s): ";
	int time;
	cin>>time;
	float final;
	final=time*acc+initial;
	cout<<"Final Velocity (m/s): "<<final;
}


//Task4
#include <iostream>
using namespace std;

main() {
	cout<<"Enter Imposter Count: ";
	float imposter;
	cin>>imposter;
	cout<<"Enter Player Count: ";
	float player;
	cin>>player;
	float chances;
	chances=100*(imposter/player);
	cout<<"Chance of being an imposter: "<<chances<<"%";
}	


//Task5
#include <iostream>
using namespace std;

main() {
	cout << "Enter the Name of the Person: ";
	string name;
	cin >> name;
	cout << "Enter the target weight loss in kilograms: ";
	float loss;
	cin >> loss;
	float days;
	days = 15*loss;
	cout << name << " will need " << days << " days to lose " << loss << " kg of weight by following the doctor's suggestions";
}


//Task6
#include <iostream>
using namespace std;

main() {
	cout << "Enter the size of the fertilizer bag in pounds: ";
	int bagsize;
	cin >> bagsize;
	cout << "Enter the cost of the bag: $";
	int bagcost;
	cin >> bagcost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin >> area;
	int costperpound;
	costperpound = bagcost/bagsize;
	cout << "Cost of fertilizer per pound: $"<< costperpound<< endl;
	int costperfoot;
	costperfoot = bagcost/area;
	cout << "Cost of fertilizing per square foot: $" << costperfoot;
}


//Task7
#include <iostream>
using namespace std;

main() {
	cout << "Enter the movie name: ";
	string movie;
	cin >> movie;
	cout << "Enter the adult ticket price: $";
	int adult;
	cin >> adult;
	cout << "Enter the child ticket price: $";
	int child;
	cin >> child;
	cout << "Enter the number of adult tickets sold: ";
	int adultsold;
	cin >> adultsold;
	cout << "Enter the number of child tickets sold: ";
	int childsold;
	cin >> childsold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	int giveaway;
	cin >> giveaway;
	cout<<endl;
	cout << "Movie: "<<movie<< endl;
	int totalearn;
	totalearn = adult * adultsold + child * childsold;
	cout << "Total amount generated from ticket sales: $" << totalearn<< endl;
	int donation;
	donation = totalearn *0.1;
	cout << "Donation to charity ("<< giveaway <<"%): $"<< donation << endl;
	int remaining;
	remaining = totalearn-donation;
	cout << "Remaining amount after donation: $"<< remaining;
}


//Task8
#include <iostream>
using namespace std;

main() {
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegPrice;
	cin >> vegPrice;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruPrice;
	cin >> fruPrice;
	cout << "Enter total kilograms of vegetables: ";
	float totalkgvegs;
	cin >> totalkgvegs;
	cout << "Enter total kilograms of fruits: ";
	float totalkgfru;
	cin >> totalkgfru;
	float vegs;
	vegs = vegPrice*totalkgvegs/1.94;
        float fru;
	fru = fruPrice*totalkgfru/1.94;
	float earnRs;
	earnRs = vegs + fru;
	cout << "Total earnings in Rupees (Rps): " << earnRs;
}


//Task9
#include <iostream>
using namespace std;

main() {
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegPrice;
	cin >> vegPrice;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruPrice;
	cin >> fruPrice;
	cout << "Enter total kilograms of vegetables: ";
	float totalkgvegs;
	cin >> totalkgvegs;
	cout << "Enter total kilograms of fruits: ";
	float totalkgfru;
	cin >> totalkgfru;
	float vegs;
	vegs = vegPrice*totalkgvegs/1.94;
        float fru;
	fru = fruPrice*totalkgfru/1.94;
	float earnRs;
	earnRs = vegs + fru;
	cout << "Total earnings in Rupees (Rps): " << earnRs;
}


//Task10
#include <iostream>
using namespace std;

main() {
	cout << "Number 1: ";
	int num1;
	cin >> num1;
	cout << "Number 2: ";
	int num2;
	cin >> num2;
	cout << "Number 3: ";
	int num3;
	cin >> num3;
	cout << "Number 4: ";
	int num4;
	cin >> num4;
	cout << "Number 5: ";
	int num5;
	cin >> num5;
	cout << "Number 6: ";
	int num6;
	cin >> num6;
	cout << "Number 7: ";
	int num7;
	cin >> num7;
	cout << "Number 8: ";
	int num8;
	cin >> num8;
	cout << "Number 9: ";
	int num9;
	cin >> num9;
	cout << "Number 10: ";
	int num10;
	cin >> num10;
	cout << "Number 11: ";
	int num11;
	cin >> num11;
	cout << "Number 12: ";
	int num12;
	cin >> num12;
	cout << "Number 13: ";
	int num13;
	cin >> num13;
	cout << "Number 14: ";
	int num14;
	cin >> num14;
	cout << "Number 15: ";
	int num15;
	cin >> num15;
	int add;
	add = num1+num2+num3+num4+num5;
	int multiply;
	multiply = num6*num7*num8*num9*num10;
	int subtract;
	subtract = num11-num12-num13-num14-num15;
	int final;
	final = add+multiply-subtract;
	cout << "The final result is: "<< final;
}


//Task11
#include <iostream>
using namespace std;

main() {
	cout <<"Enter the person's age: ";
	int age;
	cin >> age;
	cout <<"Enter the number of times they've moved: ";
	int moving;
	cin >> moving;
	int average;
	average = age/(moving + 1);
	cout <<"Average number of years lived in the same house: "<< average;
}


//Task12
#include <iostream>
using namespace std;

main() {
	cout << "Number of square meters you can paint: ";
	int sqm;
	cin >> sqm;
	cout << "Width of the single wall (in meters): ";
	int w;
	cin >> w;
	cout << "Height of the single wall (in meters): ";
	int h;
	cin >> h;
	int area;
	area = w*h;
	int walls;
	walls = sqm/area;
	cout << "Number of walls you can paint: "<< walls;
}


//Task13
#include <iostream>
using namespace std;

main() {
	int sum=0;
	int num;
	cout << "num = ";
	cin >> num;
	sum = sum + num;

	cout << "num = ";
	cin >> num;
	sum = sum + num;

	cout << "num = ";
	cin >> num;
	sum = sum + num;

	cout << "num = ";
	cin >> num;
	sum = sum + num;

	cout << "num = ";
	cin >> num;
	sum = sum + num;
        cout << sum;
}
		

//PFlab3
//Task1
#include <iostream>
using namespace std;

int main() {
cout <<"Enter your name: ";
  string name;
  cin >> name;
  cout <<"Enter your roll number: ";
    int roll_no;
    cin >> roll_no;
    cout <<"Enter your aggregate: ";
 float aggregate;
  cin >> aggregate;
  cout <<"Enter your section: ";
  char section;
  cin >> section;
cout <<"Student Information:"<<endl;
cout <<"Name: "<< name << endl;
cout <<"Roll Number: "<< roll_no << endl;
cout <<"Aggregate: "<< aggregate << endl;
cout <<"Section: "<< section << endl;
}


//Task2
#include <iostream>
using namespace std;

int main() {
cout << "Enter weight in pounds: ";
float weight_lbs;
cin >> weight_lbs;
float weight_kg;
weight_kg = weight_lbs * 0.45;
cout << weight_lbs << " pounds is equal to " << weight_kg << " kilograms.";
}


//Task3
#include <iostream>
using namespace std;

int main() {
cout << "Enter the length of the rectangle: ";
int length;
cin >> length;
cout << "Enter the width of the rectangle: ";
int width;
cin >> width;
int area;
area = length * width;
cout << "The area of the rectangle is: " << area;
}


//Task4
#include <iostream>
using namespace std;

main() {
	cout << "Enter the charge (Q) in Coulombs: ";
        float charge;
        cin >> charge;
	cout << "Enter the time (t) in seconds: ";
	int time;
	cin >> time;
	float current;
	current = charge/time;
	cout << "The current (I) is: " << current << " Amperes";
}


//Task5
#include <iostream>
using namespace std;

main() {
	cout <<"Enter the student's name: ";
	string name;
	cin >> name;
	cout <<"Enter matriculation marks (out of 1100): ";
	float matric;
	cin >> matric;
	float tmat;
	tmat = (matric * 0.1/1100);
	cout <<"Enter intermediate marks (out of 550): ";
	float inter;
	cin >> inter;
	float tint;
	tint = (inter * 0.4/550);
	cout <<"Enter Ecat marks (out of 400): ";
	float ecat;
	cin >> ecat;
	float tecat;
	tecat = (ecat * 0.5/400);
	float agg;
	agg = (tmat + tint + tecat) * 100;
	cout << "Aggregate score for " << name << " in UET is: "<< agg << "%";
}


//Task6
#include <iostream>
using namespace std;

main() {
	cout << "Enter the size in megabytes (MB): ";
        float mb;
	cin >> mb;
	float bit;
	bit = mb*1024*1024*8;
	cout << mb << " MB is equivalent to " << bit <<" bits.";
}


//Task7
#include <iostream>
using namespace std;

main() {
	cout <<"Enter the number of hours: ";
	float hours;
	cin >> hours;
	float seconds;
	seconds = hours*60*60;
 	cout << hours <<" hours is equivalent to "<< seconds <<" seconds.";
}


//Task8
#include <iostream>
using namespace std;

main() {
	cout <<"Enter voltage (in volts): ";
	float V;
	cin >> V;
	cout <<"Enter current (in amperes): ";
	float I;
	cin >> I;
	float P;
	P=V*I;
	cout <<"The power is "<< P <<" watts.";
}


//Task9
#include <iostream>
using namespace std;

main() {
	cout << "Enter your age in years: ";
	int years;
	cin >> years;
	int days;
	days = years*365;
	cout << "Your age in days is approximately " << days << " days.";
}


//Task10
#include <iostream>
using namespace std;

main() {
	cout <<"Enter the name of the cricket team: ";
	string team;
	cin >> team;
	cout <<"Enter the number of wins: ";
	int wins;
	cin >> wins;
	int twins;
	twins= wins * 3;
	cout <<"Enter the number of draws: ";
	int draws;
	cin >> draws;
	int tdraws;
	tdraws=draws*1;
	cout <<"Enter the number of losses: ";
	int lose;
	cin >> lose;
	int tlose;
	tlose=lose*0;
	int total;
	total = twins + tdraws + tlose;
	cout <<team <<" has obtained "<< total <<" points in the Asia Cup tournament.";
}


//Task11
#include <iostream>
using namespace std;

main() {
	cout << "Enter the current world population: ";
	float ppltn;
	cin >> ppltn; 
	cout << "Enter the monthly birth rate (number of births per month): ";
	float mon;
	cin >> mon;
	float tppltn;
	tppltn= ppltn +(mon * 30 * 12);
	cout << "The population in three decades will be: "<< tppltn;
}


//PDlab4
//Task1
#include<iostream>
using namespace std;
void IsEqual(int num1, int num2);

main()
{	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	IsEqual(num1, num2);
}

void IsEqual(int num1, int num2)
{	if( num1 == num2)
{	cout << "true";}
	else
{	cout << "false";}
}


//Task2
#include<iostream>
using namespace std;

void Reverse(string reverse);

main()
{	string reverse;
	cout << "Enter 'true' or 'false': ";
	cin >> reverse;

	Reverse(reverse);
}

void Reverse(string reverse)
{	if(reverse == "true")
{	cout << "false";
}
	if(reverse == "false")
{	cout << "true";
}
}


//Task3
#include<iostream>
using namespace std;
void Discount(string c, float d);

main()
{	string c;
	cout << "Enter the country's name: ";
	cin >> c;
	float d;
	cout << "Enter the ticket price in dollars: $";
	cin >> d;

	Discount(c, d);
}

void Discount(string c, float d)
{	if(c=="Pakistan")
	{	d= d-(d*0.05);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="Ireland")
	{	d=d-(d*0.1);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="India")
	{	d=d-(d*0.2);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="England")
	{	d=d-(d*0.3);
		cout << "Final ticket price after discount: $"<<d;
	}
	if(c=="Canada")
	{	d=d-(d*0.45);
		cout << "Final ticket price after discount: $"<<d;
	}
}


//Task4
#include<iostream>
using namespace std;
void checkSpeed(int speed);

main(){
	int speed;
	cout<< "Speed: ";
	cin >> speed;
	
	checkSpeed(speed);
}

void checkSpeed(int speed)
{	if(speed > 100)
	{	cout << "Halt... YOU WILL BE CHALLENGED!!!";
	}
	if(speed <= 100)
	{	cout << "Perfect! You're going good.";
	}
}


//Task5
#include<iostream>
using namespace std;
void possibleBonus(int num1, int num2);

main(){
	int num1;
	cout << "Enter your position: ";
	cin>> num1;
	int num2;
	cout << "Enter your friend's position: ";
	cin >> num2;

	possibleBonus(num1, num2);
}

void possibleBonus(int num1, int num2)
{	if(num2-num1 <= 6)
	{	cout << "true";
	}
	else
	{	cout << "false";
}
}


//Task6
#include<iostream>
using namespace std;
void longestTime(int num1, int num2);

main(){
	int num1, num2;
	cout << "Enter the number of hours: ";
	cin >> num1;
	cout << "Enter the number of minutes: ";
	cin >> num2;
	
	longestTime(num1, num2);
}

void longestTime(int num1, int num2)
{	if(num1*60 < num2)
	{cout << num2;
	}
	if(num1*60 > num2)
	{cout << num1;
	}
}


//Task7
#include<iostream>
using namespace std;
void flowerShop(float redRose, float whiteRose, float tulip);

main(){
	float redRose, whiteRose, tulip;
	cout << "Red Rose: ";
	cin >> redRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	cout << "Tulips: ";
	cin >> tulip;

	flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(float redRose, float whiteRose, float tulip)
{	float original;
	original= redRose*2 + whiteRose*4.1 +tulip*2.5;
	cout << "Original Price: $"<<original<< endl;
	float d;
	if(original > 200)
	{	d=original-(original*0.2);
		cout << "Price after Discount: $"<< d;
	}
	if(original <= 200) 
	{	cout << "No discount applied.";
	}
}


//Task8
#include<iostream>
using namespace std;
void pet(int holidays);

main(){
	int holidays;
	cout << "Holidays: ";
	cin >> holidays;
	
	pet(holidays);
}

void pet(int holidays)
{	int workingdays;
	workingdays= 365 - holidays;
	
	int timeforgames;
	timeforgames= workingdays*63 + holidays*127;

	int normdifference;
	normdifference= 30000-timeforgames;

	int norm_difference;
	norm_difference=timeforgames-30000;
	
	
	
	if(timeforgames < 30000)
{	int hours;
	hours= normdifference/60;

	int mins;
	mins= normdifference%60;
	
	cout << "Tom sleeps well"<< endl;
	cout << hours << " hours and " << mins << " minutes less for play";
}
	if(timeforgames > 30000)
{	int hrs;
	hrs= norm_difference/60;

	int min;
	min= norm_difference%60;
	
	cout << "Tom will run away"<< endl;
	cout << hrs << " hours and " <<min<< " minutes for play";
}
}


//Task9
#include<iostream>
using namespace std;
void tpChecker(int num1, int num2);

main(){
	int num1;
	cout << "Number of people in the household: ";
	cin >> num1;

	int num2;
	cout << "Number of rolls of TP: ";
	cin >> num2;

	tpChecker(num1, num2);
}

void tpChecker(int num1, int num2)
{	int days;
	days = (500 * num2)/(57 * num1);

	if(days >= 14)
{	cout << "Your TP will last " << days << " days, no need to panic!";
}
	if(days < 14)
{	cout << "Your TP will only last " << days << " days, buy more!";
}
}


//Task5(op)
#include<iostream>
#include<windows.h>
using namespace std;
void z();
void a();
void i();
void n();
void b();
void gotoxy(int x, int y);

main(){

	system("cls");
	z();
	a();
	i();
	n();
	a();
	b();
}

void gotoxy(int x,int y)
{	
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void z()
{	int x=20,y=0;
	gotoxy( x, y+1);
	cout << "######"<< endl;
	gotoxy(x,y+2);
	cout << "    # "<< endl;
	gotoxy(x,y+3);
	cout << "   #  "<< endl;
	gotoxy(x,y+4);
	cout << "  #   "<< endl;
	gotoxy(x,y+5);
	cout << " #    "<< endl;
	gotoxy(x,y+6);
	cout << "######"<< endl;
	gotoxy(x,y+7);
	cout << "      "<< endl;

}

void a()
{	int x=30, y=0;
	gotoxy(x,y+8);
	cout << "      "<< endl;
	gotoxy(x,y+9);
	cout << "  ##  "<< endl;
	gotoxy(x,y+10);
	cout << " #  # "<< endl;
	gotoxy(x,y+11);
	cout << "#    #"<< endl;
	gotoxy(x,y+12);
	cout << "######"<< endl;
	gotoxy(x,y+13);
	cout << "#    #"<< endl;
	gotoxy(x,y+14);
	cout << "#    #"<< endl;
	gotoxy(x,y+15);
	cout << "      "<< endl;
}

void i()
{	int x=40, y=0;
	gotoxy(x,y+16);
	cout << "      "<< endl;
	gotoxy(x,y+17);
	cout << "#####"<< endl;
	gotoxy(x,y+18);
	cout << "  #  "<<endl;
	gotoxy(x,y+19);
	cout << "  #  "<< endl;
	gotoxy(x,y+20);	
	cout << "  #  "<< endl;
	gotoxy(x,y+21);
	cout << "  #  "<< endl;
	gotoxy(x,y+22);
	cout << "#####"<< endl;
	gotoxy(x,y+23);
	cout << "      "<< endl;
}

void n()
{	int x=50, y=0;
	gotoxy(x,y+24);
	cout << "      "<< endl;
	gotoxy(x,y+25);
	cout << "#    #"<< endl;
	gotoxy(x,y+26);
	cout << "##   #"<< endl;
	gotoxy(x,y+27);
	cout << "# #  #"<< endl;
	gotoxy(x,y+28);	
	cout << "#  # #"<< endl;
	gotoxy(x,y+29);	
	cout << "#   ##"<< endl;
	gotoxy(x,y+30);
	cout << "#    #"<< endl;
	gotoxy(x,y+31);
	cout << "      "<< endl;
}

void b()
{	int x=60, y=0;
	gotoxy(x,y+32);
	cout << "      "<< endl;
	gotoxy(x,y+33);
	cout << "##### "<< endl;
	gotoxy(x,y+34);
	cout << "#    #"<< endl;
	gotoxy(x,y+35);
	cout << "##### "<< endl;
	gotoxy(x,y+36);
	cout << "#    #"<< endl;
	gotoxy(x,y+37);
	cout << "#    #"<<endl;
	gotoxy(x,y+38);
	cout << "##### "<< endl;
	gotoxy(x,y+39);
	cout << "      "<< endl;
}


//Task8(op)
#include <iostream>
using namespace std;
void menu();
void agg(string name,float intermarks,float matricmarks,float ecatmarks);
void compmarks(string name1,float ecatMarks1,string name2,float ecatMarks2);
main()
{	menu();
	char x;
	string name,name1,name2;
	float intermarks,matricmarks,ecatmarks,ecatMarks2,ecatMarks1;
	cout << "For calculating aggregate enter '1' for comparing ECAT marks enter '2': " ;
	cin >> x ;
	if(x=='1')
	{	
		agg(name,intermarks, matricmarks,ecatmarks);
	}
	if(x=='2')
	{
		compmarks(name1,ecatMarks1,name2,ecatMarks2);
	}
}
void menu()
{	
	cout << "******************************************************************************************************************************************************************" << endl;
	cout << "* -------------------------------------------------------------------------------------------------------------------------------------------------------------- *" << endl;	
	cout << "* |                                                                                                                                                            | *" << endl;
	cout << "* |		#   # ##### ##### #   # ##### ###    ### ##### ##### #   #          ##   ###   #   #  #####   ###   ### #####   ##   #####		        | *"<< endl;
	cout << "* |		#   # #   #   #   #   # #     #  #  #      #     #   #   #         #  #  #  #  ## ##    #    #     #      #    #  #  #   #		        | *"<< endl;
	cout << "* |		#   # #   #   #   #   # ###   ###    ##    #     #    ###          ####  #  #  # # #    #     ##    ##    #    #  #  #   #			| *"<< endl;
	cout << "* |		#   # #   #   #    ###  #     #  #     #   #     #     #           #  #  #  #  #   #    #       #     #   #    #  #  #   #	                | *"<< endl;
	cout << "* |		##### #   # #####   #   ##### #   # ###  #####   #     #           #  #  ###   #   #  #####  ###   ###  #####   ##   #   #                     	| *"<< endl;
	cout << "* |                                                                                                            					        | *"<< endl;
	cout << "* |			#   #   ##  #####   ##   ### ##### #   # ##### ##### #####              ### #   #   ###  ##### ##### #   # 				| *"<< endl;
	cout << "* |			## ##  #  # #   #  #  # #    #     ##### #     #   #   #               #    #   #  #       #   #     ##### 				| *"<< endl;
	cout << "* |			# # #  #### #   #  #### #  # ###   # # # ###   #   #   #                ##   ###    ##     #   ###   # # # 				| *"<< endl;
	cout << "* |			#   #  #  # #   #  #  # #  # #     #   # #     #   #   #                  #   #       #    #   #     #   # 				| *"<< endl;
	cout << "* |			#   #  #  # #   #  #  #  ##  ##### #   # ##### #   #   #               ###    #    ###     #   ####  #   # 		         	| *" << endl;
	cout << "* |                                                                                                                                                            | *" << endl;
	cout << "* -------------------------------------------------------------------------------------------------------------------------------------------------------------- *" << endl;
	cout << "******************************************************************************************************************************************************************" << endl;
}
void agg(string name,float intermarks,float matricmarks,float ecatmarks)
{
	cout << "Enter the student's name: " ;
	cin >> name ;
	cout << "Enter matriculation marks (out of 1100): " ;
	cin >> matricmarks ;
	cout << "Enter intermediate marks (out of 550): " ;
	cin >> intermarks ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecatmarks ;
	
	cout << "Aggregate score for "<< name << " in UET is: " << (matricmarks/1100)*30+(intermarks/550)*30+(ecatmarks/400)*40 << "%";
}
void compmarks(string name1,float ecatMarks1,string name2,float ecatMarks2)
{
	cout << "Enter the student's name: " ;
	cin >> name1 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecatMarks1 ;
	cout << "Enter the student's name: " ;
	cin >> name2 ;
	cout << "Enter Ecat marks (out of 400): " ;
	cin >> ecatMarks2;
	if(ecatMarks1>ecatMarks2)
	{
		cout << name1 << " has more marks in ECAT than " << name2 ;
	}
	if(ecatMarks1<ecatMarks2)
	{
		cout << name2 << " has more marks in ECAT than " << name1 ;
	}
	if(ecatMarks1==ecatMarks2)
	{
		cout << name1 << " and " << name2 << " have equal marks in ECAT." ;
	}


}


//PFlab4
//Task1
#include<iostream>
using namespace std;
void calculateFuel(float diatance);

main() 
{
	float distance;
	cout << "Enter the distance: ";
	cin>> distance;
	
	calculateFuel(distance);
}
void calculateFuel(float distance)
{
	float fuelNeeded;
	fuelNeeded= distance*10;
	cout << "Fuel needed: "<<fuelNeeded;
}


//Task2
#include <iostream>
using namespace std;
void inchesToFeet(float inft);

main()
{
	float in;
	cout << "Enter the measurement in inches: ";
	cin >> in;

	inchesToFeet(in);
}

void inchesToFeet(float inft)
{
	float ft;
	ft=inft/12;
	cout << "Equivalent in feet: "<< ft;
}


//Task3
#include <iostream>
using namespace std;
void howManyStickers(int stickers);

main()
{	int l;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> l;

	howManyStickers(l);
}


void howManyStickers(int stickers)
{
	int stickNeed;
	stickNeed=stickers*stickers*6;
	cout << "Number of stickers needed: "<<stickNeed;
}


//Task4
#include<iostream>
using namespace std;
void add(int n1, int n2);
void multiply(int n1, int n2);
void subtract(int n1, int n2);
void divide(int n1, int n2);

main()
{ 
	int n1;
	cout << "Enter 1st number: ";
	cin >> n1;
	int n2;
	cout << "Enter 2nd number: ";
	cin >> n2;
	char op;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;
if(op == '+'){ 
		add(n1, n2); 
	}
if(op == '*'){	
		multiply(n1, n2);
	}
if(op == '-'){
		subtract(n1, n2);
	}
if(op == '/'){	
		divide(n1, n2);
	}

}

void add(int n1, int n2)
{	int sum;
	sum= n1+n2;
	cout << "Addition: "<< sum;
}

void multiply(int n1, int n2)
{	int multi;
	multi=n1*n2;
	cout << "Multiplication: "<<multi;
}

void subtract(int n1, int n2)
{	int sub;
	sub=n1-n2;
	cout << "Subtraction: "<<sub;
}

void divide(int n1, int n2)
{	int div;
	div=n1/n2;
	cout << "Division: "<<div;
}


//Task5
#include<iostream>
using namespace std;
void Vote(int age);

main() 
{	int age;
	cout << "Enter your age: ";
	cin >> age;
	
	Vote(age);
}

void Vote(int age){

if(age >= 18){
	
cout << "You are eligible to vote.";
}
if(age < 18){
	
	cout << "You are not eligible to vote.";
}
}


//Task6
#include<iostream>
using namespace std;
void Pass(int num);

main() 
{ 	int num;
	cout <<"Enter your score: ";
	cin >> num;

	Pass(num);
}

void Pass(int num)
{	if(num > 50){
	cout << "Pass";
}
	if(num <= 50){
	cout << "Fail";
}

}


//Task7
#include<iostream>
using namespace std;
void evenOrOdd(int num);

main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;

	 evenOrOdd(num);
}

void evenOrOdd(int num)
{	if(num%2 == 0)
{	cout << "Number " <<num<< " is even";
}
	if(num%2 == 1)
{	cout << "Number "<<num<< " is odd";
}
}


//Task8
#include<iostream>
using namespace std;
void calculatePayableAmount(string a,float b);

main() {
	string day;
	cout << "Enter the day of purchase: ";
	cin >> day;
	float total;
	cout << "Enter the total purchase amount: $";
	cin >> total;

	calculatePayableAmount(day,total);
}

void calculatePayableAmount(string a,float b)
{	if(a== "Sunday")
	{b = b - (b * 0.1);
	cout <<"Payable Amount: $" <<b;
}
	else
	{cout << "Payable Amount: $"<<b;}


}


//Task9
#include<iostream>
using namespace std;
void calculateFuel(float fuel);

main(){
	float d;
	cout << "Enter the distance: ";
	cin >> d;
	float fuel;
	fuel = d*10;
	
	calculateFuel(fuel);
}

void calculateFuel(float fuel)
{	if(fuel > 100){
	cout << "Fuel needed: "<< fuel;
}
	if(fuel < 100){
	int x;
	x=100;
	cout << "Fuel needed: "<<x;
}
}

//task10
#include<iostream>
using namespace std;

main(){
	while(true)
{  cout <<  "My name is Zainab Ishtiaq";}
}


//Task11
#include<iostream>
using namespace std;
void personName(string name);

main(){
	while(true)
{	string name;
	cout << "Enter your name: ";
	cin >> name;
	
}
}


//Task12
#include<iostream>
using namespace std;
void calculatePayableAmount(string a,float b);

main() {
	while(true){
	string day;
	cout << "Enter the day of purchase: ";
	cin >> day;
	float total;
	cout << "Enter the total purchase amount: $";
	cin >> total;

	calculatePayableAmount(day,total);
}
}

void calculatePayableAmount(string a,float b)
{	if(a== "Sunday")
	{b = b - (b * 0.1);
	cout <<"Payable Amount: $" <<b<<endl;
}
	else
	{b= b-(b* 0.05);
	cout << "Payable Amount: $"<<b<<endl;}


}
	