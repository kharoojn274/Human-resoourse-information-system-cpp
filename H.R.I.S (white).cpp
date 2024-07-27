 /********************************************************************************************************************************************************
							PROJECT OF H.R.I.S 							   	
********************************************************************************************************************************************************/
#include<iostream>
#include <ctime>
#include<stdlib.h>
#include <string>
#include <time.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<fstream>
using namespace std ;

//void flag ();
void cusit();
/*********************************************************************************************************************************************
												ABOUT US 
**********************************************************************************************************************************************/
class about_us
{			
	
	public:
		
		
		about_us()
		{
			
		}
//********************************************************************************************************************************************************			
		const string currentDateTime() 
		{
			
 	 		time_t     now = time(0);
    		struct tm  tstruct;
    		char       buf[80];
    		tstruct = *localtime(&now);
    		strftime(buf, sizeof(buf), " %X", &tstruct);
    		return buf;
		}

		void date ()
		{
			cout<<"\tToday's Date ";
    		time_t t = time(0);   // get time now
    		struct tm * now = localtime( & t );
    		cout <<  now->tm_mday << '-' << (now->tm_mon + 1) << '-'<< (now->tm_year + 1900);
         
		}
		void created_by ()
		{
		
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),501);
			cout<<string (80,'_');	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 505);		
			cout<<"\n\n\t  !\3\3 C";Sleep(100);cout<<"I";Sleep(100);cout<<"T";Sleep(100);
			cout<<"Y";Sleep(100);cout<<" U";Sleep(100);cout<<"N";Sleep(100);cout<<"I";
			Sleep(100);cout<<"V";Sleep(100);cout<<"E";Sleep(100);cout<<"R";Sleep(100);cout<<"S";Sleep(100);
			cout<<"I";Sleep(100);cout<<"T";Sleep(100);cout<<"Y";Sleep(100);
			cout<<" OF";Sleep(100);cout<<" S";Sleep(100);cout<<"C";Sleep(100);
			cout<<"I";Sleep(100);cout<<"E";Sleep(100);cout<<"N";Sleep(100);cout<<"C";
			Sleep(100);cout<<"E";Sleep(100);
			cout<<" &";Sleep(100);cout<<" I";Sleep(100);cout<<"N";Sleep(100);cout<<"F";
			Sleep(100);cout<<"O";Sleep(100);cout<<"R";Sleep(100);cout<<"M";Sleep(100);
			cout<<"A";Sleep(100);cout<<"T";Sleep(100);cout<<"I";Sleep(100);cout<<"O";
			Sleep(100);cout<<"N";Sleep(100);cout<<" T";Sleep(100);cout<<"E";Sleep(100);
			cout<<"C";Sleep(100);cout<<"";Sleep(100);cout<<"H";Sleep(100);cout<<"N";Sleep(100);
			cout<<"O";Sleep(100);cout<<"L";Sleep(100);cout<<"O";Sleep(100);cout<<"G";Sleep(100);
			cout<<"Y \3\3!\n\n\t\t\t\t";
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 508);
			cout<<"  C";Sleep(100);cout<<"U";Sleep(100);cout<<"S";Sleep(100);cout<<"I";Sleep(100);cout<<"T\n\n";			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 501);
			cout<<string (80,'_');
		
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 506);
			cout<<"\n\n\t\t\t   ";

			cout<<"D";Sleep(100); cout<<"e";Sleep(100); cout<<"v";Sleep(100); cout<<"e";Sleep(100); cout<<"l";Sleep(100); cout<<"o";Sleep(100);
			cout<<"p";Sleep(100); cout<<"e";Sleep(100); cout<<"d";Sleep(100);Sleep(100); cout<<" B";Sleep(100); cout<<"y"; cout<<" : \n";Sleep(100);

			cout<<"\t\t\t"<<string (17,'_')<<endl ;
	
	//************************************************************************************************************************************
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 500);
	
			cout<<"\n\t\t\t";
	
			cout<<"1) ";Sleep(100); cout<<"S";Sleep(100);cout<<"H";Sleep(100); cout<<"A";Sleep(100); cout<<"M";Sleep(100); cout<<"S";Sleep(100);
			cout<<" U";Sleep(100);cout<<"R";Sleep(100); cout<<" R";Sleep(100); cout<<"E";Sleep(100); cout<<"H";Sleep(100); cout<<"M";Sleep(100);
			cout<<"A";Sleep(100);cout<<"N\n\n";Sleep(100);
		
	
	//******************************************************************************************************************************************
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 500);
	
			cout<<"\n\t\t\t";
	
			cout<<"2) ";Sleep(100); cout<<"H";Sleep(100); cout<<"A";Sleep(100); cout<<"R";Sleep(100);cout<<"O";Sleep(100);cout<<"O";Sleep(100);
			cout<<"N";Sleep(100); cout<<" R";Sleep(100);  cout<<"A";Sleep(100); cout<<"S";Sleep(100); cout<<"H";Sleep(100); cout<<"E";Sleep(100);
			cout<<"E";Sleep(100);cout<<"D\n\n";Sleep(100);
			
	//******************************************************************************************************************************************
	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 500);
			cout<<"\n\t\t\t";
	
			cout<<"3) ";Sleep(100); cout<<"M";Sleep(100); cout<<"O";Sleep(100); cout<<"H";Sleep(100);cout<<"D";Sleep(100);cout<<" A";Sleep(100);
			cout<<"S";Sleep(100); cout<<"I";Sleep(100);cout<<"M\n\n";Sleep(100);
	
	//******************************************************************************************************************************************
		//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),500);

			cout<<"\n\t\t\t";
		
			cout<<"4) ";Sleep(100); cout<<"H";Sleep(100);cout<<"a";Sleep(100); cout<<"s";Sleep(100); cout<<"n";Sleep(100);
			cout<<"a";Sleep(100);cout<<"i";Sleep(100); cout<<"n";Sleep(100); cout<<" A";Sleep(100); cout<<"l";Sleep(100); cout<<"i \n\n";Sleep(100);
						
					
			

//******************************************************************************************************************************************
		
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 500);
			
			cout<<"\n\t\t\t";
			
			cout<<"5) ";Sleep(100); cout<<"T";Sleep(100);cout<<"u";Sleep(100); cout<<"f";Sleep(100); cout<<"a";Sleep(100);
			cout<<"i";Sleep(100);cout<<"l";Sleep(100); cout<<" K";Sleep(100); cout<<"h";Sleep(100); cout<<"a";Sleep(100);  cout<<"n\n\n";Sleep(100); 
			
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 501);
			cout<<string (80,'_');
			getch();
					
		}
	friend class File_Handling;	

};

/*********************************************************************************************************************************************
												PERSONAL INFORMATION
**********************************************************************************************************************************************/

class personal : public about_us
{
	protected:
		static	string  last_name , address , contact , first_name;
		

	public:
		
		personal()
		{
			
		}
		
		
		void hris()
		{
			system("color f0");			
					cout<<"\n\n";
					cout<<string (80,'*') ;
					cout<<"\n\t\t  HUMAN RESOURCES INFORMATION SYSTEM\t\t\t\t\t\t\t\t\t\t\t\t\t\t";	
					cout<<string (80,'*') ;
								
					system("color f0");
					cout<<"\n\nA HRIS, or Human Resource Information System, is a software solution for small \n\n";
					cout<<string (80,'_') <<"\n";
					Sleep(1000);
								
					cout<<"to mid-sized businesses to help automate and manage their HR, payroll,management";
					cout<<string (80,'_') <<"\n";
					Sleep(1000);
								
					cout<<"\n\t\t\tand accounting activities.\n\n";
					cout<<string(80,'=');
					Sleep(1000);
								
					cout<<"\n\n\nA HRIS generally should provide the capability to more effectively plan, control\n";
					cout<<string (80,'_') <<"\n";
					Sleep(1000);
								
					cout<<"and manage HR costs; achieve improved efficiency and quality in HR decision\n\n";
					cout<<string (80,'_') <<"\n";
					Sleep(1000);
								
					cout<<"making and improve employee and managerial productivity and effectiveness.\n\n";
					cout<<string (80,'_') <<"\n";
					getch();		
		}
		
		
		void info()
		{
			system("color f1");
			cout<<string(79,'*')<<"\n\n";
			cout<<"\t\t\t !! INTRODUCTION !! \n\n";
			cout<<string(79,'*')<<"\n\n";
			cout<<"First name : ";
			cin>>first_name;
			cout<<"\nLast name  : ";
			cin>>last_name;
			cout<<"\nAddress    : ";
			cin>>address;
			cout<<"\nContact #  : ";
			cin>>contact;
			cout<<string(79,'*')<<"\n\n";
			cout<<"\t\t\t\t\tPress ANYKEY to Continue ....";
			getch();
			system("cls");
		}	
		
			friend class File_Handling;
				
};

	string personal:: last_name="Not specified"; 
	string personal:: address="Not specified";
	string personal:: contact="Not specified";
	string personal:: first_name="Not specified";
		


/*********************************************************************************************************************************************
												EDUCATION
**********************************************************************************************************************************************/
class education : public personal
{
	protected :
		string m;
		static	string FA;
		static	string BA;
		static	string MA;
	public:
		
		education()
		{
			
		}
		
		void ed()
		{
			up:
				
			system("color f5");
			cout<<string(79,'*')<<"\n\n";
			cout<<"\t\t\t !! EDUCATION INFORMATION !! \n\n";
			cout<<string(79,'*')<<"\n\n";
				
			cout<<"Select Employee Inter Education \n 1.FA \n\n 2.FSC \n\n 3.F.Cs \n\n";
			cin>>FA;
			
			if(FA=="FA"||FA=="fa")
			{
				cout<<"\t*** F.A ***\n";
			}
			
			else if(FA=="FSC"||FA=="fsc")
			{
				cout<<"\t*** F.Sc ***\n";
			}
			
			else if(FA=="FCS"||FA=="fcs")
			{
				cout<<"\t*** F.Cs ***\n";
			}

			else
			{
				system("cls");
				cout<<" INVALID ENTERY \n";
				goto up;
			}
			
			cout<<endl<<string (79,'*')<<endl;
			getch();
			system("cls");
			ag:	
				
			cout<<string(79,'*')<<"\n\n";
			cout<<"\t\t\t !! EDUCATION INFORMATION !! \n\n";
			cout<<string(79,'*')<<"\n\n";
					
			cout<<"\nHas employee done bachlor y/n? \n";
			cin>>m;
			if(m=="y" || m=="Y")
			{
				system("cls");
				c:
			
				cout<<string(79,'*')<<"\n\n";
				cout<<"\t\t\t !! EDUCATION INFORMATION !! \n\n";
				cout<<string(79,'*')<<"\n\n";
			
			
				
				cout<<"\nSelect Employee Bachalor Education \n\n 1.BA \n\n 2.BCS \n\n 3.BSC \n\n 4.BBA  \n\n";
				cin>>BA;
			
				if(BA=="BA"||BA=="ba")
				{
					cout<<"\t*** B.A ***\n";
				}
				
				else if(BA=="BCS"||BA=="bcs")
				{
					cout<<"\t*** BCS ***\n";
				}
				
				else if(BA=="BSC"||BA=="bsc")
				{
					cout<<"\t*** B.Sc ***\n";
				}
				
				else if(BA=="BBA"||BA=="bba")
				{
					cout<<"\t*** B.B.A ***\n";
				}
			
					
				else
				{
					system("cls");
					cout<<" INVALID ENTERY \n";
					goto c;
				}
				
				cout<<endl<<string (79,'*')<<endl;
		
				getch();
				system("cls");
				d:
				cout<<string(79,'*')<<"\n\n";
				cout<<"\t\t\t !! EDUCATION INFORMATION !! \n\n";
				cout<<string(79,'*')<<"\n\n";
				
				cout<<"\nSelect Employee Master Education \n\n 1.MA \n\n 2.MSC \n\n 3.MCS \n\n 4.MBA \n\n 5.None \n\n";
				cin>>MA;
				
				if(MA=="MA"||MA=="ma")
				{
					cout<<"\t*** M.A ***\n";
				}
				
				else if(MA=="MCS"||MA=="mcs")
				{
					cout<<"\t*** MCS ***\n";
				}
				else if(MA=="MSC"||MA=="msc")
				{
					cout<<"\t*** MSC ***\n";
				}
				else if(MA=="MBA"||MA=="mba")
				{
					cout<<"\t*** MBA ***\n";
				}
				else if(MA=="NONE" || MA=="none")
				{
                    cout<<"\t***NO Master Done "<<endl;
				
                }
				
				else
				{
					system("cls");
					cout<<" INVALID ENTERY \n";
					goto d;
				}
				cout<<endl<<string (79,'*')<<endl;
				
			}
				else if (m=="n" || m=="N")
				{
					system("cls");
					cout<<"No Bachelor \n";
					
				}
				else
				{
					system("cls");
					cout<<" INVALID ENTERY \n";
					goto ag;
				}
				getch();
				getch();
				system("cls");
			
		}
			
			friend class File_Handling;
		
		
};

		string education:: FA="Not specified";
		string education:: BA="Not specified";
		string education:: MA="Not specified";



/*********************************************************************************************************************************************
												EXPERIENCE
**********************************************************************************************************************************************/


class experiance : public education
{
	protected:
	static	string experiance_time;
	char ex;
	static	string current_experiance,previous_experiance;
	
	public:
		
		experiance()
		{
			
		}
		
		void exp()
		{
			ftn:
			system("color f1");
			cout<<string(79,'*')<<"\n\n";
			cout<<"\t\t\t !! EXPERIENCE INFORMATION !! \n\n";
			cout<<string(79,'*')<<"\n\n";
			cout<<"\t\t\t\tMinimum experience = 4 months\n";
			cout<<"\n\nEmploy has an experiance Y/N ?";
			cin>>ex;
			
			if(ex=='Y'||ex=='y')
			{	
			
				cout<<"\n\nPrevious experience in months      : ";
				cin>>previous_experiance;
				
				cout<<"\n\nCurrent experiance in months       : ";
				cin>>current_experiance;
				
				
				cout<<"\n\n Total Experiance time (months) :  ";
				cin>>experiance_time;
				
			}
			
		   
		}
			friend class File_Handling;
		
};

 
	string experiance::experiance_time="0";
	string experiance::current_experiance="Not specified";
	string experiance::previous_experiance="Not specified";


/*********************************************************************************************************************************************
												TRANING
**********************************************************************************************************************************************/


class traning : public experiance
{
	protected:
		
		static	int duration;
		string agree;
		static string train1;
		static	string training_from,training_kind;
	
	
	public:
			
			traning()
			{
				
			}
			
			void tr()
		 	{
		 		
		 		system("cls");
		 		tr:
				 system("color f6");
		 		cout<<endl<<string (79,'*')<<endl;
			 		
				cout<<"\nSelect Employee \n\n A.Without Training \n\n B.Trained  \n\n";
				cin>>train1;
					
				if(train1=="a" || train1=="A")
				{
					system("cls");
					ag:
					cout<<"\nNew employee \n";
					cout<<"\n\nNote: you are selected for 6 month training  \n\n A) agree \n\n B) disagree \n";
					cin>>agree;
					if( agree=="a"  || agree=="A")
					{
						cout<<"\n\nWe will call you for training \n";
						getch();
					}
					else if(agree=="b" || agree=="B")
					{
						cout<<"\n Ok ! Your choice \n";
						getch();
					}
					else
					{
						system("cls");
						cout<<"\n INVALID ENTRY \n";
						goto ag;
					}
				}
				else if(train1=="b" || train1=="B")
				{
						cout<<"\n\nTraining from :  ";
						cin>>training_from;
						
					//	cout<<"\n\nWhat kind of traning : ";
					//	cin>>training_kind;
						
						cout<<"\n\nDuration (months)    : ";
						cin>>duration;
						
				}
				else
				{
					system("cls");
					cout<<" INVALID ENTRY \n";
					goto tr;
				}
				cout<<endl<<string (79,'*')<<endl;
				getch();
				system("cls");
			
			}
			friend class File_Handling;
};


	string traning::train1="";
	int traning ::duration=0;
				
	string traning::training_from="Not specified";
	string traning::training_kind="Not specified";
	

/*********************************************************************************************************************************************
												SALARY
**********************************************************************************************************************************************/

class salary : public traning
{
	protected:
		
		static	int gross_salary;
		static	int net_salary;
		static	int allownces;
		float a;
		float b;
		int mult;
		public:
			
			salary()
			{
				
			}
			
			void salary_()
			{	
				system("color f0");
				float deduction;
				float after_deduction;
				int mult;
				
				system("color f0");
				cout<<string(79,'*')<<"\n\n";
				cout<<"\t\t\t !! SALARY INFORMATION !! \n\n";
				cout<<string(79,'*')<<"\n";
				
				cout<<"\t\t\t\t\t\ttotal tax deduction : 5 %";
				
				cout<<"\n\nGross salary           : "<<gross_salary;
				
				cout<<"\n\nMonthly Allownce       : "<<allownces;
				
				 deduction=(gross_salary*5)/100;
				 after_deduction=gross_salary-deduction;
				 
				 cout<<"\n\nAfter expences deduct  : "<<after_deduction;
				 net_salary=gross_salary+allownces-deduction;
				
				 cout<<"\n\nNet salary             : "<<net_salary;
				 mult=gross_salary*12;
				 cout<<"\n\nTotal year salary      : "<<mult<<endl;
				 cout<<string(79,'*')<<"\n";
				 getch();
			}

			friend class File_Handling;

};
	 int salary:: gross_salary=15000;
	 int salary:: net_salary;
	 int salary:: allownces=1100;
	

/*********************************************************************************************************************************************
												DISPLAY
**********************************************************************************************************************************************/

class display : public salary {
	
	public:
		
		display()
		{
			
		}
	   void	get()
		{
			system("color f0");
			
			cout<<string(79,'*')<<"\n\n";
			cout<<"\t\t\t !! RESULT !! \n\n";
			cout<<string(79,'*')<<"\n";
			
			
			cout<<"\n\nNAME        	      : "<<first_name;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nLAST NAME  	      : "<<last_name;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nADDRESS   	      : "<<address;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nContact #     	      : "<<contact;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nInter education       : "<<FA;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nBachalor education    : "<<BA;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nMasters education     : "<<MA;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nCurrent Experience    : "<<current_experiance;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nPrevious Experience   : "<<previous_experiance;
			cout<<"\n"<<string (79,'_')<<endl;
			
			cout<<"\n\nTotal Experience Time       : "<<experiance_time << " months";
			cout<<"\n"<<string (79,'_')<<endl;
			
			
			cout<<"\n\nTrained from Institution          : "<<training_from ;
			cout<<"\n"<<string (79,'_')<<endl;
			
			//cout<<"\n\nTraining kind         : "<<training_kind ;
			//cout<<"\n"<<string (79,'_')<<endl;
			
			getch();
		}
	
		friend class File_Handling;
};
/*************************************************************************************************************************************************************
													FILE HANDLING 
*************************************************************************************************************************************************************/							
class File_Handling
{
						
						
		public:
							
			void acess ()
			{
							
				display obt;
//*****************************************file handling*******************************************************
				string path="c:\\data\\";
				string filename;

				cout<<"Enter File Name\t:  ";
				cin>>filename;
				filename=path+filename+".dat",ios :: binary;
				cout<<endl<<filename;

				ofstream outfile(filename.c_str(),ios::out);
				
				outfile<<system("color 0f");
				outfile<<string(79,'*');
				
				outfile<<"\nFirst name             : "<<obt.first_name;
				outfile<<"\nLast name              : "<<obt.last_name;
				outfile<<"\nAdress                 : "<<obt.address;
				outfile<<"\nContact                : "<<obt.contact;			
				outfile<<"\nIntermediate Education : "<<obt.FA;
				outfile<<"\nBachalor Education     : "<<obt.BA;
				outfile<<"\nMasters education      : "<<obt.MA;
				outfile<<"\nCurrent Experience     : "<<obt.current_experiance;
				outfile<<"\nPrevious Experience    : "<<obt.previous_experiance;
				outfile<<"\nExperience Time        : "<<obt.experiance_time << " months";
				outfile<<"\nTrained from           : "<<obt.training_from ;
				//outfile<<"\nTraining kind          : "<<obt.training_kind ;
				outfile<<endl<<string(80,'*');		
				outfile<<"\n";
						
				outfile.close();
					
			}
			
			
				
void retrieve()
{
			char ch;	
			do
			{
				system("cls");
				system("color f0");
				
				string path="c:\\data\\";
				string filename;

				cout<<"\nEnter File Name\t:  ";
				cin>>filename;
				filename=path+filename+".dat";
					
				ifstream retrieve_data;
				retrieve_data.open(filename.c_str());	
				
				if (retrieve_data)
				{
					system("color f2");
					string line;	
					cout<<endl;
				
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),500);
						cout<<"\n\n\n\n\t\t\t\t";
	
						cout<<"  Searching ...\n";						
						cout<<"\n\t\t\t     ";
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
			 			for(int i=0; i<20; i++)
						 {
	 						
	 						
	 						cout<<" ";
	 						Sleep(200);
	 						
	 			
			 			}
			 			system("cls");
					
					while(getline(retrieve_data,line))
					{
						
						cout<<line<<endl;
					
					} 
				}		
				else 
				{
					
					cout<<"\n\nNO SUCH FILES FOUND...\n";
				}	
				getch();
				cout<<"\n\nWANT TO SEARCH AGAIN ... PRESS (Y) or ANYKEY + ENTER For MAIN MENU  \n";
				cin>>ch;
			}
			while(ch=='y' or ch=='Y');
			}
			
	
			void delete_record()
			{
				char ch;	
				do
				{
				
					fstream a;
					system("cls");
					system("color fc");
				
					string path="c:\\data\\";
					string filename;

					cout<<"\nEnter The Filename To Remove  :  ";
					cin>>filename;
					filename=path+filename+".bin";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),500);
						cout<<"\n\n\n\n\t\t\t\t";
	
						cout<<"Deleting File ...\n";						
						cout<<"\n\t\t\t     ";
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
						for(int i=0; i<20; i++)
						 {
	 						
	 						
	 						cout<<" ";
	 						Sleep(200);
	 						
	 			
			 			}
			 			system("cls");
					
				  	if( remove(filename.c_str()) != 0 )
    				{
						perror( "Error Deleting File" );
					}
  					else
    				{
						puts( "\n\nFile Successfully Deleted" );
  					}
  					
  				cout<<"\n\nWANT TO REMOVE ANOTHER FILE ...  Press (Y) or ANYKEY For MAIN MENU  \n";
				cin>>ch;	
				}
				while(ch=='y' or ch=='Y');
				
			}
};						
/*************************************************************************************************************************************************************
																START OF MAIN
*************************************************************************************************************************************************************/
main()
{
	char again;	
		//flag();
	cusit(); // cusit	
	do
	{

  	 	string pass ="";
   		char ch;   
   		string username ;
   		system("color f0");
   		
   		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  500);
		cout<<"\n\n\t\t\t  WELCOME TO  H.R.I.S \n\n";
   		cout<<"\t\t        ======== xxxxxx =======";
   
   		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 505);
   		cout<<"\n\n\n\t\t\tUSERNAME : "; 	
   		cin>>username;
   
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 505);
   		cout << "\n\n\n\t\t\tPASSWARD : ";
   		ch = _getch();
   
   		while(ch != 13)
   		{
      		pass.push_back(ch);
      		cout << '*';
      		ch = _getch();
   		}
   	
   		cout<<endl<<string (80,'_');
   		cout<<"\n\n\t\t\t\t\tPress ANYKEY to Continue...\n\n";
   		
   		if(pass == "rasheed"&&username=="haroon")
   		{	
   	
   			system("cls");
   			system("color 2f");
   			cout<<"\n\n\n\n\n\n\n";
   			cout<<string(80,'*')<<"\n";
   			cout<<"\t\t\t\tAccess Granted ... \n\n";
   			cout<<string(80,'*')<<"\n";
   			getch();
   			system("cls");
   			system("color 0f");
   			
   			
			char up;
			display ob1 ;  // objects of inherited class
			
			string x;
			start:					
						
			system("cls");
			
			system("color f0");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 500);
			cout << "Time " << ob1.currentDateTime() <<"\t\t\t\t\t";
			ob1.date ();
			
			cout<<"\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 509);
			cout<<"\t\t"<<string (38,'=') ;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 505);
			cout<<"\n\n\t\t  HUMAN RESOURCES INFORMATION SYSTEM\n\n";	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 509);
			cout<<"\t\t"<<string (38,'=') ;
		
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 501);
			cout<<"\n";
			cout<<"\t\t\n";
		
			cout<<"1) ABOUT DEVELOPER\n\n";
			cout<<"2) WHAT IS H.R.I.S\n\n";		
			cout<<"3) SALARY INFORMATION\n\n";		
			cout<<"4) EMPLOYEE NEW ENTRY\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 505);
			cout<<"5) SEARCH..\n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 508);
			cout<<"6) DELETE RECORD\n\n";
			cout<<"7) EXIT \n\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 500);
			cout<<"\t\t\t\t\t\tPlease Enter An Option (1-7) : ";
			cin>>x;

	    	system("color f0");
			
   				
	    		if(x=="1")
	    		{
						    					
	    			system("cls");
					ob1.created_by();
					
					goto start;
				}
								
						
				if(x=="2")
				{
					
					system("cls");
					 ob1.hris();		
					goto start;
				}							
				if(x=="3")
				{										
					system("cls");
					ob1.salary_();
					goto start;
							
				}	
								
				if(x=="4")
				{	
	    			system("cls");
	    			system("color f8");			
	    			cout << "\nTime" << ob1.currentDateTime() <<"\t\t\t\t\t";
					ob1.date ();
					cout<<"\n";	
					ob1.info();
							
					cout << "\nTime" << ob1.currentDateTime() <<"\t\t\t\t\t";
			    	ob1.date ();
					cout<<"\n";
					ob1.ed();
							
							
			    	cout << "\nTime" << ob1.currentDateTime() <<"\t\t\t\t\t";
					ob1.date ();
					cout<<"\n";
							
					ob1.exp();
							
					cout << "\nTime" << ob1.currentDateTime() <<"\t\t\t\t\t";
					ob1.date ();
					ob1.tr();
							
					cout << "\nTime" << ob1.currentDateTime() <<"\t\t\t\t\t";
					ob1.date ();
					cout<<"\n";
					ob1.get();
									
					File_Handling a ;	
					a.acess();  // accessing file 
					getch();
					goto start;											
				}			
				if(x=="5")
				{		
					File_Handling b ;
					b.retrieve();
					goto start;						
				}									
				if(x=="6")
				{					
					File_Handling l;
					l.delete_record();				
					goto start;						
				}
				if(x=="7")
				{
							
					system("cls");
   					system("color fc");
   					cout<<"\n\n\n\n\n\n\n";
   					cout<<string(80,'*')<<"\n";
   					cout<<"\n\t\t\t\t*** GOOD BYE ***  \n\n";
					cout<<string(80,'*')<<"\n";		
					exit(1);						
				}		
				else
				{
					system("cls");
   					system("color cf");
   					cout<<"\n\n\n\n\n\n\n";
   					cout<<string(80,'*')<<"\n\n";
   					cout<<"\t\t\t\tINVALID OPTION ... \n\n";
   					cout<<string(80,'*')<<"\n";
   					getch();	
					system("cls");
   					system("color 0f");
   					goto start;	
				}
	
		   } 
	else
	{
		
   		system("cls");
   		system("color cf");
   		cout<<"\n\n\n\n\n\n\n";
   		cout<<string(80,'*')<<"\n";
   		cout<<"\t\t\t\tAccess Denied ... \n\n";
   		cout<<string(80,'*')<<"\n";
   		cout<<"\nPRESS (B) TO GO BACK...";
   		cin>>again;
   		system("cls");
   		system("color 0f");
   		
  	}
}
while(again=='b'||again=='B');  
}
/************************************************************************************************************************************************************
														END OF MAIN		
*************************************************************************************************************************************************************/

void flag ()

{
	
   		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
 		cout<<"\n";
		cout<<"******************************************************\n";cout<<"***********               *                          *\n";
		cout<<"***********            ****                          *\n";cout<<"***********          *****        *                  *\n";
		cout<<"***********        *****         ***                 *\n";cout<<"***********      ******        *******               *\n";
		cout<<"***********      ******         *****                *\n";cout<<"***********       ******       *******               *\n";
		cout<<"***********        ******      *     *               *\n";cout<<"***********          *****                           *\n";
		cout<<"***********            *****                         *\n";cout<<"***********               ****                       *\n";
		cout<<"***********                   *                      *\n";cout<<"******************************************************\n";
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 );
		cout<<"\n\n\t\t  P ";Sleep(200);cout<<"A ";Sleep(200);cout<<"K ";Sleep(200);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10 );
		cout<<"I ";Sleep(200);cout<<"S ";Sleep(200);cout<<"T ";Sleep(200);cout<<"A ";Sleep(200);cout<<"N   ";
		
		getch();
	   	system("cls");
	   	system("color 0f");
}
void cusit()
{
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	system("color f1");
	cout<<"\n\n";cout<<"\t **********   **        **  **********  **********  **********\n";
	cout<<"\t*********     **        **  **********  **********  **********\n";cout<<"\t***           **        **  **              **          **\n";
	cout<<"\t***           **        **  **              **          **\n";cout<<"\t***           **        **  **********      **          **\n";
	cout<<"\t***           **        **          **      **          **\n";cout<<"\t***           **        **          **      **          **\n";
	cout<<"\t***********   **        **  **********  **********      **\n";cout<<"\t ************  **********   **********  **********      **\n\n";
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),500);
	cout<<"\n\n\n\n\t\t\t\t";
	cout<<"    LOADING\n";
	cout<<"\n\t\t\t     ";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
	 		
			 
	for(int i=0; i<20; i++)
	{
	 			
  		cout<<" ";
		
		if(i<7)
		{
  			Sleep(300);
	    }
  		else
		    Sleep(100);
	}
		 			
    
			 
			
	system("cls");
	system("color 0f");

}
