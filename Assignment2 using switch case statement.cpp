//NAME:KEMBOI AMOS KIPNGENO
//REGNO:EB3/68883/23
//calculating commission using switch case statement
#include<iostream> 
#include<string>
using namespace std;
int main()
{
	string name;
	float salesVolume,commissionRate,commission;
	int category;
	
	//inputes
	cout<<"Enter the name of the sales agent:";
	getline(cin,name);
	cout<<"Enter the sales volume made:";
	cin>>salesVolume;
	if(salesVolume>=5000){
		category=1;
	}
	else if(salesVolume>=4000 && salesVolume<=4999){
		category=2;
	}
	else if(salesVolume>=3000 && salesVolume<=3999){
		category=3;
	}
	else if(salesVolume>=2000 && salesVolume<=2999){
		category=4;
	}
	else if(salesVolume<2000){
		category=5;
	}
	else{
		cout<<"invalid input!\n";
	}
	switch(category){
		case 1:
			commissionRate=15;
			break;
		case 2:
			commissionRate=12;
			break;
		case 3:
			commissionRate=9;
			break;
		case 4:
			commissionRate=6;
			break;
		case 5:
			commissionRate=3;
			break;
		default:
			cout<<"invalid input!\n";
	}
	commission=salesVolume*(commissionRate/100);
	cout<<"Sales agent:"<<name<<"\n";
	cout<<"Sales volume made:"<<salesVolume<<"\n";
	cout<<"commision Rate:"<<commissionRate<<"%\n";
	cout<<"Commission:"<<commission;
	return 0;
}