#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

string username, e, pro[5];
int p;


struct pils {
	
	string name;
	string exp;
	string quanti;

	
	
};

class Medicine{

	int price;
	string name[5];

string med[5] = {"para","pana","ponstan"};
	

public:
	



	
	
	void sign(){
		
		string name;
		
		cout<<" enter user name: ";
		cin>>name;
		
		
		
		
		string s1, s2, l, s3, s4;
	
int j;

	char pass[8] , ipass[8];

	int i;


cout<<" enter password(password must contain 8 words symbols or numebrs): ";

	while(pass[i] != '\r'){

       pass[i] = getch();

		if(pass[i] != '\r'){

		cout<<"*";
		i++;


	}

	else{

		break;
	}

}





for(int i = 8; i >= 0; i--){

	s1 = pass[i];

	s2 = s1 + s2;

}




ofstream out("mypass.txt"), out2("myname.txt");

out<<s2;	
	out2<<name;
	
out.close();
		out2.close();
		
		
		username = name;
		
	}
	
	void log(){
		
		string n, n2;
		
		cout<<" enter name: ";
		cin>>n;
		
		ifstream in2("myname.txt");
		getline(in2, n2);
		
		
			
string s1, s2, sl;
 int i = 0;
char ipass[8];


	
	cout<<" enter pass : ";
	
	while(ipass[i] != '\r'){

       ipass[i] = getch();

		if(ipass[i] != '\r'){

		cout<<"*";
		i++;


	}

	else{

		break;
	}

}





for(int i = 8; i >= 0; i--){

	s1 = ipass[i];

	s2 = s1 + s2;

}

 ifstream in("mypass.txt");
 getline(in,sl);
 


if(sl == s2 && n == n2){
	
	cout<<endl;
	cout<<endl;
	cout<<"logined";

cout<<endl;

e = "logined";
	
}
else {
	
	
	 e= "invalid";
	 
	 	cout<<endl;
	cout<<endl;
	cout<<"invalid";
		cout<<endl;
	cout<<endl;
}
		


		
}
	

     void setData(){
     	int i = 0;

     	char ch = 'n';


cout<<" Please enter the name of the medicine if available they will be displayed"<<endl;

cout<<endl;
cout<<endl;

     	while(ch != 'y'){


     	cout<<" enter the medcine name or press y to save the list : ";
     	cin>>name[i];
        i++;
         ch = getch();

		 }
     	}

     	void getData(){



cout<<endl;

     			cout<<"Avaliable: "<<endl;

cout<<endl;
     		for(int i = 0; i < 5; i++){
     			for(int j = 0; j < 5; j++){


     			if(med[i] == name[j]){

                         
     			cout<<med[i]<<" "<<endl;
           
                          pro[i] = med[i];     
     			continue;

     			   if(med[i] != name[j]){

     				 cout<<med[j]<<" not avaliabe "<<endl;

				 }

     		    }







			 }
     	}
     	
     
		 }
		 
		 
		 	 	int setprice(){
	
		
		for(int i = 0; i < 5; i++){
			
			if(pro[i] == "para"){
				
				price += 15;
				
			}
			else if(pro[i] == "ponstan"){
				
				price += 10;
				
			}
			
			else if(pro[i] == "pana"){
				
				price += 20;
			}
			
		}
		
	return price;
	          
	}
	
		
		 
		
	


void Pilinfo(){
	
	string name; 
	
	ifstream in;
	
	in.open("myname.txt",ios::in);
	
	getline(in,name);
	
	
	
	
	string pil, r;
	
	pils p1, p2;
	
	cout<<" enter the complete name of tablet: ";
	cin>>pil;
	
	cout<<endl;
	
	
	p1.exp = "2-12-2024";
	p1.name = "panadol";
	p1.quanti = "25ml/50ml";
	
	p2.exp = "2-12-2020";
	p2.name = "rizek";
	p2.quanti = "10pils/20pils";
	
	
	if(pil == "panadol"){
		
		cout<<p1.name<<endl;
		cout<<p1.exp<<endl;
		cout<<p1.quanti<<endl;
	
	cout<<endl;	
		
	}
	
	else if(pil == "rizek"){
		
		cout<<p2.name<<endl;
		cout<<p2.exp<<endl;
		cout<<p2.quanti<<endl;
		
		cout<<endl;
		
	}
	
	
	
	cout<<" To place a order enter the medicine name here: ";
	cin>>r;
	
	cout<<endl;
	cout<<endl;
	
	if(r == "panadol"){
	
	  cout<<endl;
    cout<<endl;
		
		cout<<" order has been placed under the name: "<<name<<endl;
		
	}
	else if(r == "rizek"){
		
		  cout<<endl;
    cout<<endl;
    
		cout<<" order has been placed under the name: "<<name<<endl;
		
	}
	
}

	

};




struct Doc{

string name;
string degree;
string timing;
int app;
int id;


};


void docs();

int main(){
	
	

	Medicine m1;

	char c,u, ch = 'n';
string m;

	cout<<"\t\tWelcome To Medicate: "<<endl;
	cout<<endl;
	cout<<endl;

while(ch != 'y'){

	cout<<" To Sign Up press (S) ";
	cout<<" To Sign Ip press (I) ";
	
	cout<<endl; 
	u = getch();

	cout<<endl;

	if(u == 's' || u == 'S'){

		m1.sign();

      

cout<<endl;

        cout<<" your user name "<<username<<endl;

        cout<<endl;

	}


	if(u == 'i' || u == 'I'){

m1.log();

if(e == "invalid" ){
	
	continue;
}

else if( e == "logined") {
	
	break;
}


	}

}

while(c != 'e' ){


cout<<endl;

cout<<"\t\tWelcome"<<endl;
cout<<endl;
cout<<endl;



cout<<" 1: For Medcine purchase enter Med: "<<endl;
cout<<"  -----------------  "<<endl;

cout<<" 2: For Doctor information enter Doc: "<<endl;

cout<<"  -----------------  "<<endl;
cout<<" 3: search for any drug: Pils "<<endl;

cout<<endl;

cout<<endl;

cout<<" enter: ";
cin>>m;

if(m == "med" || m == "M"){



cout<<endl;


 m1.setData();

 m1.getData();
 



}

else if(m == "doc" || m == "Doc"){

    docs();
}


else if(m == "pils" || m == "Pils"){
	
	cout<<endl;
	m1.Pilinfo();
	
	
}

cout<<" press enter if you want to contiune else 'e' to exit "<<endl;

c = getch();

}


}


void docs(){
string name;

int id;
Doc d1, d2, d3, d4, d5;

ifstream i("myname.txt");
i>>name;


d1.name = " Dr. Arslan ";
d1.degree = " skin Specialist ";
d1.timing = " 5 pm to 8 pm ";
d1.id = 784;
d1.app = 1;

d2.name = " Dr. Rustom ";
d2.degree = " Heart Specialist ";
d2.timing = " 2 pm to 6 pm ";
d2.id = 234;
d2.app = 1;

cout<<" Name: "<<d1.name<<endl;
cout<<" Specialty: "<<d1.degree<<endl;
cout<<" Timing: "<<d1.timing<<endl;
cout<<" Id "<<d1.id<<endl;
cout<<" appoiment number: "<<d1.app<<endl;

cout<<endl;
cout<<endl;

cout<<" Name: "<<d2.name<<endl;
cout<<" Specialty: "<<d2.degree<<endl;
cout<<" Timing: "<<d2.timing<<endl;
cout<<" Id "<<d2.id<<endl;
cout<<" appoiment number: "<<d2.app<<endl;

cout<<endl;
cout<<endl;

cout<<" To make appoiment Please Enter the doctor Id number: ";
cin>>id;

if(id == 784){
	
	cout<<endl;
	cout<<endl;

    cout<<" Doctor "<<d1.name <<" will see you at time "<<d1.timing<<endl;
    cout<<" your appoimnet number "<<d1.app<<" mr/ms: "<<name;
    
    cout<<endl;
    cout<<endl;

}
else if(id == 234){


cout<<endl;
cout<<endl;

    cout<<" Doctor "<<d2.name <<" will see you at time "<<d2.timing<<endl;
    cout<<" your appoimnet number "<<d2.app<<" mr/ms: "<<name;
    
      cout<<endl;
    cout<<endl;

}

}



