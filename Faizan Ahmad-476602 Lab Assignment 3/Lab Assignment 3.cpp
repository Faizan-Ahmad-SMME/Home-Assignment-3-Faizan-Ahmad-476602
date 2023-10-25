#include<iostream>
using namespace std;
int main (){

//Lab Task 1

//int x, y, A, f;
//
//cout<<"Enter values for 2 numbers, if x + y then enter 1, if x - y then 2, if y - x then 3, if x * y then 4, if x/y then 5, if y/x then 6."<<endl;
//cin>>x>>y>>f;
//
//switch (f)
//{
//	case 1: 
//		A = x + y;
//		cout<<"answer:"<<endl;
//		cout<<A<<endl;
//		break;
//	
//	case 2:
//		A = x - y;
//		cout<<"answer:"<<endl;
//		cout<<A<<endl;
//		break;
//		
//	case 3:
//		A = y - x;
//		cout<<"answer:"<<endl;
//		cout<<A<<endl;
//		break;
//		
//	case 4:
//		A = x * y;
//		cout<<"answer:"<<endl;
//		cout<<A<<endl;
//		break;
//		
//	case 5:
//		A = x / y;
//		cout<<"answer:"<<endl;
//		cout<<A<<endl;
//		break;
//		
//	case 6:
//		A = y / x;
//		cout<<"answer:"<<endl;
//		cout<<A<<endl;
//		break;
//}

//Lab Task 2

//int m;
//
//cout<<"Enter 1 if your month is amoung November, April, June, and September, if your month is February then enter 2"<<endl;
//cout<<"if your month is amoung January, March, May, July, August, October, and December then enter 3"<<endl;
//
//cin>>m;
//
//switch (m)
//{
//	case 1:
//		cout<<"Your month has 30 days"<<endl;
//		break;
//		
//	case 2:
//		cout<<"Your month has 28 days"<<endl;
//		break;
//		
//	case 3:
//		cout<<"your month has 31 days"<<endl;
//		break;
//		
//}

//Lab Task 3

//int i, j;
//
//cout<<"Enter 2 integers"<<endl;
//
//cin>>i>>j;
//
//if (i == j) {
//	cout<<"Your input integers are equal"<<endl;
//	}
//	
//else if (i != j)	
//{
//	if (i > j) {
//		cout<<"Your the first integer is greater then the secound"<<endl;
//	}
//	
//	else {
//		cout<<"Your secound integer is greater then the first"<<endl;
//	}
//}

//Lab Task 4

int m, n;

cout<<"Enter an integer value for m"<<endl;
cin>>m;

if (m == 0) { 
n = 0;
}

else if (m != 0) {
	if (m > 0) {n = 1;
	}
	
	else {n = -1;
	}
}

cout<<"the value of n is:"<<endl<<n;

return 0;		
}
