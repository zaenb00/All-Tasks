//PF lab 5
//Task 1
#include<iostream>
using namespace std;
float min(float num1,float num2);
main(){
    float num1, num2, result;
    cout << "Enter the first number: ";
    cin>> num1;
    cout << "Enter the second number: ";
    cin>> num2;
    result = min(num1,num2);
}

float min(float num1,float num2)
{   float result;
    if(num1 > num2){
        result=num2;
        cout <<"The minimum of "<< num1<< " and "<< num2<< " is: " << num2;
    }
    if(num1< num2){
        result= num1;
        cout<< "The minimum of "<< num1<< " and "<< num2<< " is: "<< num1;
    }
    return result;
}

//Task2
#include<iostream>
#include<cmath>
using namespace std;

main(){
	double num1, num2, result;
	cout << "Enter the base number: ";
	cin >> num1;
	cout << "Enter the exponent: ";
	cin >> num2;
	result = pow(num1, num2);
	cout << num1 << " raised to the power " << num2<< " is: " << result;
}

//Task3
#include<iostream>
#include<cmath>
using namespace std;

main(){
	double num1, result;
	cout << "Enter a number: ";
	cin>> num1;
	result= sqrt(num1);
	cout << "The square root of "<< num1 << " is: "<<result;
}

//Task4
#include<iostream>
#include<cmath>
using namespace std;
	
main(){
	double b, d, r, result;
	cout << "Enter the distance from the base of the tree (in feet): ";
	cin >> b;
	cout << "Enter the angle of elevation (in degrees): ";
	cin >> d;
	r = d/57.2958;
	tan(r);
	result =tan(r)*b;
	cout << "The height of the tree is: "<< result<< " feet";
}

//Task5
#include<iostream>
#include<cmath>
using namespace std;
void posdisc(float a, float b, float disc);
void zerodisc(float a, float b, float disc);
void negdisc(float a, float b, float disc);

main(){
	float a, b , c, disc;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	
	disc= pow(b,2) - (4*a*c);
	
	posdisc( a, b, disc);
	zerodisc(a, b, disc);
	negdisc( a, b, disc);
}

void posdisc(float a, float b, float disc)
{	
	if(disc > 0){
	float root1,root2;
	root1=((-b + sqrt(disc))/(2*a));
	root2=((-b - sqrt(disc))/(2*a));
	cout << "Solutions: x = "<< root1<< " and x = "<<root2;
	}
	
}

void zerodisc(float a, float b, float disc)
{	
	if(disc == 0){
	float root1;
	root1=(-b/(2*a));
	cout << "Solution: x = "<<root1;
	}
}

void negdisc(float a, float b, float disc)
{	
	if(disc < 0){
	float r1,r2;
	r1= -b/(2*a);
	r2= ((sqrt(-disc)) / (2*a));
	cout << "Complex Solutions: x = "<< r1<< " + "<<r2<< "i and "<<r1<< " - " <<r2<< "i";
	}
}

//Task6
#include<iostream>
using namespace std;
char checkAlphabetCase(char alpha);

main(){
	char alpha, result;
	cout <<"Enter a character (A/a): ";
	cin >> alpha;

	result=checkAlphabetCase(alpha);
}

char checkAlphabetCase(char Alpha)
{	char result;
	if(Alpha == 'A')
	{	cout << "You have entered Capital " << Alpha;
	}
	if(Alpha == 'a')
	{	cout << "You have entered small "<< Alpha;
	}
	return result;
}

//Task7
#include<iostream>
using namespace std;
void IsSymmetrical(int num);

main(){
	int num; 
	cout <<"Enter a three-digit number: ";
	cin>> num;
	
	IsSymmetrical(num);
}

void IsSymmetrical(int num)
{	int mod, div;
	div = num/100;
	mod = num%10;
	if(div == mod){
	cout << "The number is symmetrical.";
	}
	if(div != mod){
	cout << "The number is not symmetrical.";
	}
}

//Task8
#include<iostream>
using namespace std;
int OddishOrEvenish(int sum);

main(){
	int num, result;
	cout << "Enter a five-digit number: ";
	cin >> num;
	int num1;
	num1 = num%10;
	int num2;
	num2 = num/10;
	int num3;
	num3 = num2%10;
	int num4;
	num4 = num/100;
	int num5;
	num5 = num4%10;
	int num6;
	num6 = num/1000;
	int num7;
	num7 = num6%10;
	int num8;
	num8 = num/10000;
	int num9;
	num9 = num8%10;
	int sum;
	sum=num1+num3+num5+num7+num9;
	
	result= OddishOrEvenish(sum);
}

int OddishOrEvenish(int sum)
{	int result;
	if(sum%2==1){
		result= 1;
		cout << "Oddish";
	}
	if(sum%2==0){
		result= 0; "Evenish";
		cout << "Evenish";
	}
	return result; 
}

//Task9
#include<iostream>
using namespace std;
void timeTravel(int hrs, int mins);

main(){
	int hrs, mins;
	cout<< "Enter Hours: ";
	cin >> hrs;
	cout << "Enter Minutes: ";
	cin >> mins;
	
	timeTravel(hrs,mins);
}

void timeTravel(int hrs, int mins)
{	int HH, MM, total;
	total = hrs*60 + mins +15;
	HH = total/60;
	MM = total%60;
	cout << HH <<":"<<MM;
}

//Task10
#include<iostream>
using namespace std;

main(){
	int n; 

cout<<"Enter a number (1-99): "; 

cin>>n; 

if(n/10==2)
{	cout<< "Twenty";
} 

if(n/10==3)
{	cout<< "Thirty";
} 

if(n/10==4)
{	cout<< "Forty";
} 

if(n/10==5)
{	cout<< "Fifty";
} 

if(n/10==6)
{	cout<< "Sixty";
} 	

if(n/10==7)
{	cout<< "Seventy";
} 

if(n/10==8)
{	cout<< "Eighty";
} 

if(n/10==9)
{	cout<< "Ninety";
} 

if(n%10==1){

	cout<<"One";
	} 

if(n%10==2) 

{	cout<<"Two";	} 

 

if(n%10==3) 

{	cout<<"Three";	} 

 

if(n%10==4) 

{	cout<<"Four";	} 

 

if(n%10==5) 

{	cout<<"Five";	} 

 

if(n%10==6) 

{	cout<<"Six";	} 

 

if(n%10==7) 

{	cout<<"Seven";	} 

 

if(n%10==8) 

{	cout<<"Eight";	} 

 

if(n%10==9) 

{	cout<<"Nine";	} 

 

if(n==10) 

{	cout<<"Ten";	} 

 

if(n==11) 

{	cout<<"Eleven";	} 

if(n==12)
{	cout<<"Twelve";
}

if(n==13)
{	cout<< "Thirteen";
}

if(n==14)
{	cout<<"Fourteen";
}

if(n==15)
{	cout<< "Fifteen";
}

if(n==16)
{	cout<< "Sixteen";
}

if(n==17)
{	cout<< "Seventeen";
}

if(n==18)
{	cout<< "Eighteen";
}

if(n==19)
{	cout<< "Nineteen";
}


} 

//Task11
#include<iostream>
using namespace std;
void calculatePoolState(float V, float p1, float p2, float h);

main(){
	float V, p1, p2, h;	
	cout << "Enter volume of the pool in liters: ";
	cin>> V;
	cout << "Enter flow rate of the first pipe per hour: ";
	cin >> p1;
	cout << "Enter flow rate of the second pipe per hour: ";
	cin >> p2;
	cout << "Enter hours that the worker is absent: ";
	cin >> h;
	

	calculatePoolState(V,p1,p2,h);
}

void calculatePoolState(float V, float p1, float p2, float h)
{	float filledV, filledp1, filledp2;
	float fp1,fp2;
	filledV= (p1+p2)*h;
	fp1 = p1*h;
	filledp1= (fp1/filledV)*100;
	fp2 = p2*h;
	filledp2= (fp2/filledV)*100;
	if(filledV <= V){
	float perV= (filledV*100)/V;
	cout << "The pool is "<< perV <<"% full. Pipe 1: " <<filledp1<< "%. Pipe 2: "<<filledp2<<"%";
	}
	if(filledV > V){
	float overflow = filledV -V;
	cout << "For " <<h<< " hours, the pool overflows with "<< overflow << " liters.";
	}
}

