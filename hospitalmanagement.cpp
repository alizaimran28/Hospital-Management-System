#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <list>
#include <map>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
#include <iterator>
#include <Windows.h>
using namespace std;

class HospitalIdentity{
	    private:
		string Hospital_name;
		string Address;
		long long Contact_Number;
		char e;
	    char a;
		public:
			
			ofstream outHospital;
			ifstream inHospital;
		void Hospital_Identity(string Hospital_name,string Address,long long Contact_Number)
		{
			
			this->Hospital_name=Hospital_name;
			this->Address=Address;
			this->Contact_Number=Contact_Number;
		}
		void Hospital_Identity()
		{
			while(a!='e')
			{
			cout<<endl<<endl<<"********************************************************"<<endl;
			cout<<"                MODIFYING HOSPITAL IDENTITY"<<endl;
			cout<<"Enter n to change Hospital Name "<<endl;
			cout<<"Enter a to change Hospital Address "<<endl;
			cout<<"Enter c to change Contact Number "<<endl;
			cout<<"Enter e if changing in hospital identity is finished : ";
			cin>>a;
			if(a=='n'){
			cout<<"Enter New Hospital Name : ";
			cin.ignore();
			getline(cin,Hospital_name);
			}
		    else if(a=='a'){
			cout<<"Enter New Address of your Hospital : ";
			cin.ignore();
			getline(cin,Address);
		    }
		    else if(a=='c'){
			cout<<"Enter New Contact Number of your Hospital : ";
			cin>>Contact_Number;
	    	}
			else if(a=='e'){
				break;
			}
		}
	}
		
		
		void display(){
			
			outHospital.open("HospitalFile.txt");
			outHospital<<endl<<endl<<"********************************************************"<<endl;
			outHospital<<"               Website of Hospital"<<endl;
			outHospital<<"********************************************************"<<endl;
			outHospital<<endl<<"Hospital name is :       "<<Hospital_name<<endl;
			outHospital<<"Address of Hospital is : "<<Address<<endl;
			outHospital<<"Contact Number is :      +92"<<Contact_Number<<endl;
			
			outHospital.close();
			inHospital.open("HospitalFile.txt",ios::app);
			string s;
			while(inHospital.eof()==0){
				getline(inHospital,s);
				cout<<s<<endl;
			}
			inHospital.close();
		}		
		
};
class Person {
	public:
		string nutritionist_dr1;
		string nutritionist_dr2;
		string dentist_dr1;
		string dentist_dr2;
		string child_specialist_dr1;
		string child_specialist_dr2;
		string ENT_dr1;
		string ENT_dr2;
		string Gynocologist_dr1;
		string Gynocologist_dr2;
		string optometrist_dr1;
		string optometrist_dr2;
		char s;
		char a;
		public:
		virtual void display()=0;
};
class Doctor : public Person{
		public:
			ofstream outdr;
			ifstream indr;
			void nutritionist(string nutritionist_dr1,string nutritionist_dr2){
				this->nutritionist_dr1=nutritionist_dr1;
				this->nutritionist_dr2=nutritionist_dr2;
			}
			void Dentist(string dentist_dr1,string dentist_dr2){
				this->dentist_dr1=dentist_dr1;
				this->dentist_dr2=dentist_dr2;
			}
			void Child_Specialist(string child_specialist_dr1,string child_specialist_dr2){
				this->child_specialist_dr1=child_specialist_dr1;
				this->child_specialist_dr2=child_specialist_dr2;
			}
			void ENT(string ENT_dr1,string ENT_dr2){
				this->ENT_dr1=ENT_dr1;
				this->ENT_dr2=ENT_dr2;
			}
			void Gynocologist(string Gynocologist_dr1,string Gynocologist_dr2){
				this->Gynocologist_dr1=Gynocologist_dr1;
				this->Gynocologist_dr2=Gynocologist_dr2;
			}
			void optometrist(string optometrist_dr1,string optometrist_dr2){
				this->optometrist_dr1=optometrist_dr1;
				this->optometrist_dr2=optometrist_dr2;
			}
			void nutritionist(){
				while(s!='a')
				{
				cout<<endl<<endl<<"********************************************************"<<endl;
				cout<<"Enter m for changing Morning Doctor "<<endl;
				cout<<"Enter e for changing evening doctor "<<endl;
				cout<<"Enter a if your changing in nutritionist doctor is finished : ";
				cin>>s;
				if(s=='m')
				{
				cout<<"Enter Name of change Morning Doctor of Nutritionist : ";
				cin.ignore();
				getline(cin,nutritionist_dr1);
		    	}
		    	else if(s=='e')
		    	{
				cout<<"Enter Name of change Evening Doctor of Nutritionist : ";
				cin.ignore();
				getline(cin,nutritionist_dr2);	
			    }
			    else if(s=='a'){
			    	break;
				}
			}
			}
			void Dentist(){
				
				while(s!='a')
				{
				cout<<endl<<endl<<"********************************************************"<<endl;
				cout<<"Enter m for changing Morning Doctor "<<endl;
				cout<<"Enter e for changing evening doctor "<<endl;
				cout<<"Enter a if your changing in Dentist doctor is finished : ";
				cin>>s;
				if(s=='m'){
				cout<<"Enter Name of change Morning Doctor of Dentist : ";
				cin.ignore();
				getline(cin,dentist_dr1);
		     	}
		     	if(s=='e'){
				cout<<"Enter Name of change Evening Doctor of Dentist : ";
				cin.ignore();
				getline(cin,dentist_dr2);	
		    	}
		    	 else if(s=='a'){
			    	break;
				}
			}
		}
			void child_specialist(){
				while(s!='a')
				{
				cout<<endl<<endl<<"********************************************************"<<endl;
				cout<<"Enter m for changing Morning Doctor "<<endl;
				cout<<"Enter e for changing evening doctor "<<endl;
				cout<<"Enter a if your changing in child specialist doctor is finished : ";
				cin>>s;
				if(s=='m'){
				cout<<"Enter Name of change Morning Doctor of child specialist : ";   
				cin.ignore();
				getline(cin,child_specialist_dr1);
			    }
			    else if(s=='e'){
				cout<<"Enter Name of change Evening Doctor of child specialist : ";
				cin.ignore();
				getline(cin,child_specialist_dr2);	
		    	}
				else if(s=='a'){
			    	break;
				}
			}
			}
			void ENT(){
				while(s!='a')
				{
				cout<<endl<<endl<<"********************************************************"<<endl;
				cout<<"Enter m for changing Morning Doctor "<<endl;
				cout<<"Enter e for changing evening doctor "<<endl;
				cout<<"Enter a if your changing in ENT doctor is finished : ";
				cin>>s;
				if(s=='m'){
				cout<<"Enter Name of change Morning Doctor of ENT : ";
				cin.ignore();
				getline(cin,ENT_dr1);
		    	}
		    	else if(s=='e'){
				cout<<"Enter Name of change Evening Doctor of ENT : ";
				cin.ignore();
				getline(cin,ENT_dr2);
		    	}
				 else if(s=='a'){
			    	break;
				}	
			}
		}
			void Gynocologist(){
				while(s!='a'){
				cout<<endl<<endl<<"********************************************************"<<endl;
				cout<<"Enter m for changing Morning Doctor "<<endl;
				cout<<"Enter e for changing evening doctor "<<endl;
				cout<<"Enter a if your changing in Gynocologist doctor is finished : ";
				cin>>s;
				if(s=='m'){
				cout<<"Enter Name of change Morning Doctor of Gynocologist : ";
				cin.ignore();
				getline(cin,Gynocologist_dr1);
		    	}
		    	else if(s=='e'){
				cout<<"Enter Name of change Evening Doctor of Gynocologist : ";
				cin.ignore();
				getline(cin,Gynocologist_dr2);	
		    	}
				 else if(s=='a'){
			    	break;
				}
			}
		}
			void optometrist(){
				while(s!='a')
				{
				cout<<endl<<endl<<"********************************************************"<<endl;
				cout<<"Enter m for changing Morning Doctor "<<endl;
				cout<<"Enter e for changing evening doctor "<<endl;
				cout<<"Enter a if your changing in optometrist doctor is finished : ";
				cin>>s;
				if(s=='m'){
				cout<<"Enter Name of change Morning Doctor of optometrist : ";
				cin.ignore();
				getline(cin,optometrist_dr1);
		    	}
		    	else if(s=='e'){
				cout<<"Enter Name of change Evening Doctor of optometrist : ";
				cin.ignore();
				getline(cin,optometrist_dr2);
		    	}
		    	else if(s=='a'){
			    	break;
				}
			}
		}
			void display(){
				outdr.open("Doctorlist.txt");
				outdr<<endl<<"********************************************************"<<endl;
			    outdr<<"           LIST OF DOCTOR IN HOSPITALS"<<endl;
			    outdr<<"********************************************************"<<endl;
				outdr<<"Morning Nutritionist Doctor :     "<<nutritionist_dr1<<endl;
				outdr<<"Evening Nutritionist Doctor :     "<<nutritionist_dr2<<endl;
				outdr<<"Morning dentist Doctor :          "<<dentist_dr1<<endl;
				outdr<<"Evening dentist Doctor :          "<<dentist_dr2<<endl;
				outdr<<"Morning child specialist Doctor : "<<child_specialist_dr1<<endl;
				outdr<<"Evening child specialist Doctor : "<<child_specialist_dr2<<endl;
				outdr<<"Morning ENT Doctor :              "<<ENT_dr1<<endl;
				outdr<<"Evening ENT Doctor :              "<<ENT_dr2<<endl;
				outdr<<"Morning Gynocologist Doctor :     "<<Gynocologist_dr1<<endl;
				outdr<<"Evening Gynocologist Doctor :     "<<Gynocologist_dr2<<endl;
				outdr<<"Morning optometrist Doctor :      "<<optometrist_dr1<<endl;
				outdr<<"Evening optometrist Doctor :      "<<optometrist_dr2<<endl;
				
				outdr.close();
				indr.open("Doctorlist.txt");
				string st;
				while(indr.eof()==0){
					getline(indr,st);
					cout<<st<<endl;
				}
				indr.close();
			}
			
};
class Patient : public Person{
	
	public:
		ofstream outp;
		ifstream inp;
		ofstream outnp;
		ifstream innp;
		char e;
		void data(){
			outp.open("Patient_Record.txt");
			map<string, string> m;
			m= {{"Ali Khan", "Eye disease"}, 
              {"Alia Mehar", "Tooth disease"}, 
              {"Alina Choudhary","Throat infection"},
			  {"Shubham Khan","eye weekness"},
			  {"Subhan Abid","Nose infection"},
			  {"Abdullah Abid","Eye infection"},
			  {"Furqan Khan","Nose infection"},
			  {"Roman Anees","Tooth Infection"},
			  {"Rayan Shan","Bone infection"},
			  {"Azaan Shahid","Throat infection"},
			  {"Arham Asjad","Stomach Infection" }};
	map<string,string>::iterator itr;
	map<string,string>::iterator it;
    int i=0;
    outp<<endl<<"********************************************************"<<endl;
	outp<<"           Patient RECORD IN HOSPITALS"<<endl;
    outp<<"********************************************************"<<endl;
   
    for (itr = m.begin(); itr != m.end(); itr++) {
  {
            outp <<endl<<"Patient Name is : " <<itr->first<<endl;
			outp<<"Disease is :  "<<itr->second<<endl;
         }
     }
        
        outp.close();
            int p;
            
            while(p!=3){
            	cout<<endl<<endl<<"********************************************************"<<endl<<endl;
            	cout<<"Enter 1 to Search Patient Record by Patient name "<<endl;
            	cout<<"Enter 2 to insert Patient Data and to make appointment with doctor "<<endl;
            	cout<<"Enter 3 if your Searching or Inserting in Patient Record is finished : ";
            	cin>>p;
            	if(p==1){
                 string n;
                 cout<<"Enter Patient name to search : ";
                 cin.ignore();
                 getline(cin,n);
                for (itr = m.begin(); itr != m.end(); itr++) {
                 itr=m.find(n);
                 
                 if(itr==m.end()){
                 	cout<<"The patient you entered hasn't found in our previous record "<<endl;
				 	break;
				 }
				 else{
                     cout<<"The patient you entered has found in our previous record "<<endl;
					 cout<<"Details: "<<endl;
					 cout<<"Name : "<<itr->first<<endl<<"Disease : "<<itr->second<<endl;
					 break;
				 	}
				 } 
                
               }
               else if(p==2){
               	outnp.open("new_Patientfile.txt",ios::app);
               	time_t ttime = time(0);
                tm *local_time = localtime(&ttime);
                int a;
                a=local_time->tm_hour;
               	string patient_name;
               	string disease_name;
               	cout<<"Enter Patient name : ";
               	cin.ignore();
               	getline(cin,patient_name);
               	cout<<"Enter the disease type : ";
               	//cin.ignore();
               	getline(cin,disease_name);
               	m.insert({patient_name,disease_name});
                   	 outnp <<endl<<"Patient Name is :  " <<patient_name<<endl;
					 outnp<<"Disease is :  "<<disease_name<<endl;
					 outnp.close() ;
					 jum:
					 cout<<"Enter the type of doctor you want to get Appointment : ";
					 cout<<"Type of Doctor in our Hospital : "<<endl;
					 cout<<"1.Optometrist"<<endl;
					 cout<<"2.nutritionist"<<endl;
					 cout<<"3.ENT"<<endl;
					 cout<<"4.Dentist"<<endl;
					 cout<<"5.Gynocologist"<<endl;
					 cout<<"6.Child Specialist"<<endl;
					 string Doctor_type;
					 getline(cin,Doctor_type);
				     Doctor obj1;
               	if(Doctor_type=="Optometrist" || Doctor_type=="optometrist" ){
               		 obj1.optometrist("Ahmed Abid","Subhan Abid");
               		if(a<=12  &&  a>=1){
               			cout<<"As it is morning so Doctor of Eye which is free and appointed to you is : "<<obj1.optometrist_dr1;
					   }
					else if(a>=12  &&  a<=24){
						cout<<"As it is Afternoon or Evening so Doctor of eye appointed to you is : "<<obj1.optometrist_dr2;
					}
				   }
				else if(Doctor_type=="ENT" ){
               		 obj1.ENT("Abdullah Abid","Rohan Ahmed");
               		if(a<=12  &&  a>=1){
               			cout<<"As it is morning so Doctor of Eye which is free and appointed to you is : "<<obj1.ENT_dr1;
					   }
					else if(a>=12  &&  a<=24){
						cout<<"As it is Afternoon or Evening so Doctor of eye appointed to you is : "<<obj1.ENT_dr2;
					}
				}  
				else if(Doctor_type=="Dentist" || Doctor_type=="dentist"){
               		 obj1.Dentist("Malaika Razzaq","Areeba Amer");
               		if(a<=12  &&  a>=1){
               			cout<<"As it is morning so Doctor of Eye which is free and appointed to you is : "<<obj1.dentist_dr1;
					   }
					else if(a>=12  &&  a<=24){
						cout<<"As it is Afternoon or Evening so Doctor of eye appointed to you is : "<<obj1.dentist_dr2;
					}
				}  
				else if(Doctor_type=="Gynocologist" || Doctor_type=="gynocologist"){
               		 obj1.Gynocologist("Saniya Kashif","Ayisha Shamas");
               		if(a<=12  &&  a>=1){
               			cout<<"As it is morning so Doctor of Eye which is free and appointed to you is : "<<obj1.Gynocologist_dr1;
					   }
					else if(a>=12  &&  a<=24){
						cout<<"As it is Afternoon or Evening so Doctor of eye appointed to you is : "<<obj1.Gynocologist_dr2;
					}
				} 
				else if(Doctor_type=="Child Specialist" || Doctor_type=="child specialist"){
               		 obj1.Child_Specialist("Tariq Mehmood","Abid Mehmood");
               		if(a<=12  &&  a>=1){
               			cout<<"As it is morning so Doctor of Eye which is free and appointed to you is : "<<obj1.child_specialist_dr1;
					   }
					else if(a>=12  &&  a<=24){
						cout<<"As it is Afternoon or Evening so Doctor of eye appointed to you is : "<<obj1.child_specialist_dr2;
					}
				}  
                else if(Doctor_type=="Nutritionist" || Doctor_type=="nutritionist"){
               		 obj1.nutritionist("Eman Abid","Aneeba Farooq");
               		if(a<=12  &&  a>=1){
               			cout<<"As it is morning so Doctor of Eye which is free and appointed to you is : "<<obj1.nutritionist_dr1;
					   }
					else if(a>=12  &&  a<=24){
						cout<<"As it is Afternoon or Evening so Doctor of eye appointed to you is : "<<obj1.nutritionist_dr2;
					}
				}  
				else {
					cout<<"No such Doctor of this Field exist in our Hospital"<<endl;
					goto jum;
				}
                  
			   }
			   else if(p==3){
			   	cout<<"Exit";
			    break;
			    }
                }
			   }
               
            
            void display(){
            	inp.open("Patient_Record.txt");
            	while(inp.eof()==0){
            		string stp;
            		getline(inp,stp);
            		cout<<stp<<endl;
				}
				inp.close();
			}
			void display1(){
				innp.open("new_Patientfile.txt");
				while(innp.eof()==0){
            		string stnp;
            		getline(innp,stnp);
            		cout<<stnp<<endl;
				}
				innp.close();
			}

		
};
class Nurse : public Person{
	public:
		ofstream outn;
		ifstream inn;
		string n;
		string str;
	void Nurse_Data(){
		list<string> listOfNurses( {"Alina","Aneela","Zain","Aqsa","Atiya","Arfa","Ali","Asma","Nida","Sadia","Hamza","Sayeda" });
		
		outn.open("File_Nurse.txt");
		outn<<"Total List of Male and Female Nurse that helps with Doctors in hospital is : " <<endl;
        for (string nurses : listOfNurses)
        {
          outn<< nurses <<endl;
        }
        int c;
        while(c!=3){
        cout<<endl<<endl<<"Enter 1 to see list of nurse "<<endl;
        cout<<"Enter 2 to modify list of nurse"<<endl;
        cout<<"Enter 3 if your work with Nurse file is completed : ";cin>>c;
        
        
        if(c==1){
        cout<<endl<<"********************************************************"<<endl;
        cout<<"Total list of male and female nurses is : "<<endl;
        for (string nurses : listOfNurses)
        {
          cout<< nurses <<endl;
        }
        }
        else if(c==2){
        for (string nurses : listOfNurses)
        {
          cout<< nurses <<endl;
        }
        cout<<endl<<"Enter Present name of nurse to change nurse of Hospital : ";
        cin>>n;
        list<string>::iterator it;
		it=find(listOfNurses.begin(),listOfNurses.end(),n);
        
        if ( listOfNurses.end() == it )
        {
        cout << "Nurse name you entered doesn't belongs to our Hospital" << endl;
        }
        else
        {
        if(*it==n){
        	string nurse_name;
        	cout<<"Enter new name of Nurse to update your file of Nurse : ";  cin>>nurse_name;
        	*it=nurse_name;
        	outn<<endl<<"Updated List of Nurse in hospital is : " <<endl;
        	for (it = listOfNurses.begin(); it != listOfNurses.end(); ++it)
           {
             outn<< *it <<endl;
           }
		}
        outn.close();
        }
      }
      else if(c==3){
      	break;
	  }
    }
    }
        void display(){
        inn.open("File_Nurse.txt");
        while(inn.eof()==0){
        	getline(inn,str);
        	cout<<str<<endl;
		}
		inn.close();
    }
};


class Staff : public Person{
	public:
		ofstream outstaff;
		ifstream instaff;
		string s;
		string r;
		string str;
	void Staff_Data(){
		
		list<string> Sweepers( {"Umair","Uzair","Zain"} );
		list<string> receptioinist({"Asif","Hasaan","Atif"});
		outstaff.open("Staff.txt");
		outstaff<<endl<<endl<<"********************************************************"<<endl<<endl;
		outstaff<<"List of Sweepers in hospital is : " <<endl;
	
        for (string Sweper : Sweepers)
        {
          outstaff<< Sweper <<endl;
        }
        outstaff<<endl<<endl<<"********************************************************"<<endl<<endl;
		outstaff<<"List of Receptionist in hospital is : " <<endl;
		
        for(string rec : receptioinist){
        	outstaff<<rec<<endl;
		}
        int c;
        while(c!=4){
        	
        cout<<"Enter 1 to see list of Sweepers and Receptionist "<<endl;
        cout<<"Enter 2 to modify name of Sweepers "<<endl;
        cout<<"Enter 3 to modify name of receptionist "<<endl;
        cout<<"Enter 4 if you don't want to modify list of sweepers and receptionist : ";
        cin>>c;
        if(c==1){
        cout<<endl<<endl<<"********************************************************"<<endl<<endl;
		cout<<"List of Sweepers in hospital is : " <<endl;
        for (string Sweper : Sweepers)
        {
          cout<< Sweper <<endl;
        }
        cout<<endl<<endl<<"********************************************************"<<endl<<endl;
		cout<<"List of Receptionist in hospital is : " <<endl;
		
        for(string rec : receptioinist){
        	cout<<rec<<endl<<endl;
		}
    	}
    	else if(c==2)
        {
        cout<<endl<<endl<<"********************************************************"<<endl<<endl;
        cout<<"List of Sweepers in hospital is : " <<endl;
        for (string Sweper : Sweepers)
        {
          cout<< Sweper <<endl;
        }
        cout<<endl<<"Enter Present name of Sweepers to change Sweepers of Hospital : ";
        cin>>s;
        list<string>::iterator it;
		it=find(Sweepers.begin(),Sweepers.end(),s);
        
        if ( Sweepers.end() == it )
        {
        cout << "Sweepers name you entered doesn't belongs to our Hospital" << endl;
        }
        else
        {
        if(*it==s){
        	string Sweeper_name;
            cout<<"Enter new name of Sweepers to update your file of Nurse         : ";  cin>>Sweeper_name;
        	*it=Sweeper_name;
        	outstaff<<endl<<"Updated List of Sweepers in hospital is : " <<endl;
        	for (it = Sweepers.begin(); it != Sweepers.end(); ++it)
           {
             outstaff<< *it <<endl;
           }
		}
        }
      }
      else if(c==3){
      	cout<<endl<<endl<<"********************************************************"<<endl<<endl;
        cout<<"List of Receptionist in hospital is : " <<endl;
        for(string rec : receptioinist){
        	cout << rec << endl;
		}
        cout<<endl<<"Enter Present name of Sweepers to change receptioinist of Hospital : ";
        cin>>r;
        list<string>::iterator itr;
		itr=find(receptioinist.begin(),receptioinist.end(),r);
        
        if ( receptioinist.end() == itr )
        {
        cout << "receptioinist name you entered doesn't belongs to our Hospital" << endl;
        }
        else
        {
        if(*itr==r){
        	string receptioinist_name;
        cout<<"Enter new name of receptioinist to update your file of Nurse      : ";  cin>>receptioinist_name;
        	*itr=receptioinist_name;
        	outstaff<<endl<<endl<<"********************************************************"<<endl<<endl;
        	outstaff<<endl<<"Updated List of receptioinist in hospital is : " <<endl;
        	for (itr = receptioinist.begin(); itr != receptioinist.end(); ++itr)
           {
             outstaff<< *itr <<endl;
           }
		}
        outstaff.close();
        }
	  }
      else if(c==4){
      	break;
	  }
    }
    }
        void display(){
        instaff.open("Staff.txt");
        while(instaff.eof()==0){
        	getline(instaff,str);
        	cout<<str<<endl;
		}
		instaff.close();
    }
};
class Wards : public Person{
	protected:
		ofstream outwards;
		ifstream inwards;
		int ICU_room_no=25;
		int Emergency_room_no=25;
		int Doctors_room_no=12;
		int male_washroom=6;
		int female_washroom=6;
		int meditation_rooms=25;
		int pharmacy=1;
		int Tablets_Medicine=120;
		int Syrups_Medicine=100;
		int Injections=50;
		int vitamins=40;
		int Disposable_gloves=40;
		public:
			virtual void display(){
				outwards.open("RoomsData.txt");
				outwards<<endl<<endl<<"********************************************************"<<endl;
                outwards<<endl<<"             Room Section"<<endl;
                outwards<<endl<<"********************************************************"<<endl;
				outwards<<"ICU room numbers are        : "<<ICU_room_no<<endl;
				outwards<<"Emergency room numbers are  : "<<Emergency_room_no<<endl;
				outwards<<"Doctors room numbers are    : "<<Doctors_room_no<<endl;
				outwards<<"Male washroom numbers are   : "<<ICU_room_no<<endl;
				outwards<<"Female washroom numbers are : "<<ICU_room_no<<endl;	
				outwards.close();
				
				inwards.open("RoomsData.txt");
				while(inwards.eof()==0){
					string ward;
					getline(inwards,ward);
					cout<<ward<<endl;
				}
				inwards.close();
			}
			
};

class Furniture : public Wards{
	protected:
		int available_beds=75;
		int stretchers=50;
		int Sterilizers=50;
		int Patient_Monitors=50;
		int Portable_Oxygen_Concentrators=45;
		int chairs=75;
        int rooms=50;
        int ambulances=5;
        int a;
    	public:
    		ofstream outf;
    		ifstream inf;
		    
		void modifyingFurniturenumber(){
			int f;
			cout<<endl<<endl<<"********************************************************"<<endl;
        	cout<<endl<<endl<<"             Changing Furniture number"<<endl;
			while(f!=9){
				cout<<endl<<endl<<"********************************************************"<<endl;
				cout<<"Enter 1 to modify numbers of Available Beds "<<endl;
			    cout<<"Enter 2 to modify numbers of stretchers "<<endl;
	    		cout<<"Enter 3 to modify numbers of Sterilizers "<<endl;
	    		cout<<"Enter 4 to modify numbers of Patient Monitors "<<endl;
    			cout<<"Enter 5 to modify numbers of Portable Oxygen Concentrators "<<endl;
	    		cout<<"Enter 6 to modify numbers of chairs "<<endl;
	    		cout<<"Enter 7 to modify numbers of rooms "<<endl;
	    		cout<<"Enter 8 to modify number of Ambulances  "<<endl;
	    		cout<<"Enter 9 if Your Modifying Furniture is finished : ";
				cin>>f;
				if(f==1){
					cout<<"Enter Number of Beds You have increase to maintain the record : ";
					cin>>a;
					available_beds+=a;
				}
				else if(f==2){
					cout<<"Enter Number of stretchers You have increase to maintain the record : ";
					cin>>a;
					stretchers+=a;
				}
				else if(f==3){
					cout<<"Enter Number of Sterilizers You have increase to maintain the record : ";
					cin>>a;
					Sterilizers+=a;
				}
				else if(f==4){
					cout<<"Enter Number of Patient Monitors You have increase to maintain the record : ";
					cin>>a;
					Patient_Monitors+=a;
				}
				else if(f==5){
					cout<<"Enter Number of Portable Oxygen Concentrators You have increase to maintain the record : ";
					cin>>a;
					Portable_Oxygen_Concentrators+=a;
				}
				else if(f==6){
					cout<<"Enter Number of chairs You have increase to maintain the record : ";
					cin>>a;
					chairs+=a;
				}
				else if(f==7){
					cout<<"Enter Number of rooms You have increase to maintain the record : ";
					cin>>a;
					rooms+=a;
				}
				else if(f==8){
					cout<<"Enter Number of Ambulances You have increase to maintain the record : ";
					cin>>a;
					ambulances+=a;
				}
				else if(f==9){
					cout<<"Your modification in furniture is made Successfully.";
					break;
				}
			}	
		}
		void display(){
			string fur;
			outf.open("FurnitureFile.txt");
			outf<<endl<<endl<<"********************************************************"<<endl;
        	outf<<endl<<endl<<"            Available Furniture number"<<endl;
			outf<<"Total Available beds                : "<<available_beds<<endl;
			outf<<"Total stretchers                    : "<<stretchers<<endl;
			outf<<"Total Sterilizers                   : "<<Sterilizers<<endl;
			outf<<"Total Patient Monitors              : "<<Patient_Monitors<<endl;
			outf<<"Total Portable Oxygen Concentrators : "<<Portable_Oxygen_Concentrators<<endl;
			outf<<"Total chairs                        : "<<chairs<<endl;
			outf<<"Total rooms                         : "<<available_beds<<endl;
			outf<<"Total ambulance                     : "<<available_beds<<endl;
			
			outf.close();
			inf.open("FurnitureFile.txt");
			while(inf.eof()==0){
				
				getline(inf,fur);
				cout<<fur<<endl;
			}
			inf.close();
		}
		
};
class Pharmacy : public Wards  {
	protected:
		int ph;
		int b;
	public:
		ofstream pharmacy;
		ifstream inpharmacy;
		void data(){
			while(ph!=6){
				
			cout<<endl<<endl<<"********************************************************"<<endl;
        	cout<<endl<<endl<<"            MODIFICATION IN PHARMACY ITEMS"<<endl;
			cout<<"Enter 1 to modify number of items of Tablets Medicine "<<endl;
			cout<<"Enter 2 to modify number of items of Syrups Medicine "<<endl;
			cout<<"Enter 3 to modify number of items of Injection Medicine "<<endl;
			cout<<"Enter 4 to modify number of items of Vitamins Medicine "<<endl;
			cout<<"Enter 5 to modify number of items of Disposable Gloves "<<endl;
			cout<<"Enter 6 to exit : ";
			cin>>ph;
			if(ph==1){
				int e;
				while(e!=3){
				cout<<endl<<endl<<"********************************************************"<<endl;
            	cout<<endl<<endl<<"            MODIFICATION IN TABLET MEDICINE"<<endl;
				cout<<"Enter 1 to add number of items of Tablets Medicine "<<endl;
				cout<<"Enter 2 to enter Number of items that have been sale out to maintain record "<<endl;
				cout<<"Enter 3 to exit : ";  cin>>e;
				if(e==1){
					cout<<"Enter Number of Tablets medicine that come in Pharmacy to maintain the record : ";
					cin>>b;
					Tablets_Medicine+=b;
				}
				else if(e==2){
					jump1:
					cout<<"Enter Number of Tablets medicine that are sold from Pharmacy to maintain the record : ";
					cin>>b;
					if(Tablets_Medicine>b){
					Tablets_Medicine-=b;
			    	}
			    	else {
			    		cout<<"The number of Tablet medicine you entered is much higher from actual so enter correct ";
						cout<<"number of items : "<<endl<<endl;
						goto jump1;
					}
				}
			}	
			}
			if(ph==2){
				int e;
				while(e!=3){
				cout<<endl<<endl<<"********************************************************"<<endl;
            	cout<<endl<<endl<<"            MODIFICATION IN SYRUP MEDICINE"<<endl;
				cout<<"Enter 1 to add number of items of Syrup Medicine "<<endl;
				cout<<"Enter 2 to enter Number of Syrup medicine that have been sale out to maintain record "<<endl;
				cout<<"Enter 3 to exit : ";   cin>>e;
				if(e==1){
					cout<<"Enter Number of Syrup medicine that come in Pharmacy to maintain the record : ";
					cin>>b;
					Syrups_Medicine+=b;
				}
				else if(e==2){
					jump2:
					cout<<"Enter Number of Tablets medicine that are sold from Pharmacy to maintain the record : ";
					cin>>b;
					if(Syrups_Medicine>b){
					Syrups_Medicine-=b;
			    	}
			    	else {
			    		cout<<"The number of Tablet medicine you entered is much higher from actual so enter correct ";
						cout<<"number of items : "<<endl<<endl;
						goto jump2;
					}
				}
			}	
			}
			if(ph==3){
				int e;
				while(e!=3){
				cout<<endl<<endl<<"********************************************************"<<endl;
            	cout<<endl<<endl<<"            MODIFICATION IN INJECTIONS"<<endl;
				cout<<"Enter 1 to add number of items of Injections "<<endl;
				cout<<"Enter 2 to enter Number of Injections that have been sale out to maintain record "<<endl;
				cout<<"Enter 3 to exit : ";
				cin>>e;
				if(e==1){
					cout<<"Enter Number of Injections that come in Pharmacy to maintain the record : ";
					cin>>b;
					Injections+=b;
				}
				else if(e==2){
					jump3:
					cout<<"Enter Number of Injections that are sold from Pharmacy to maintain the record : ";
					cin>>b;
					if(Injections>b){
					Injections-=b;
			    	}
			    	else {
			    		cout<<"The number of Injections you entered is much higher from actual so enter correct ";
						cout<<"number of items : "<<endl<<endl;
						goto jump3;
					}
				}
			}	
			}
			if(ph==4){
				int e;
				while(e!=3){
				cout<<endl<<endl<<"********************************************************"<<endl;
            	cout<<endl<<endl<<"            MODIFICATION IN VITAMINS"<<endl;
				cout<<"Enter 1 to add number of items of vitamins "<<endl;
				cout<<"Enter 2 to enter Number of vitamins that have been sale out to maintain record "<<endl;
				cout<<"Enter 3 to exit : ";
				cin>>e;
				if(e==1){
					cout<<"Enter Number of vitamins that come in Pharmacy to maintain the record : ";
					cin>>b;
					vitamins+=b;
				}
				else if(e==2){
					jump4:
					cout<<"Enter Number of vitamins that are sold from Pharmacy to maintain the record : ";
					cin>>b;
					if(vitamins>b){
					vitamins-=b;
			    	}
			    	else {
			    		cout<<"The number of vitamins you entered is much higher from actual so enter correct ";
						cout<<"number of items : "<<endl<<endl;
						goto jump4;
					}
				}
			}	
			}
			if(ph==5){
				int e;
				while(e!=3){
				cout<<endl<<endl<<"********************************************************"<<endl;
            	cout<<endl<<endl<<"            MODIFICATION IN DISPOSABLE GLOVES"<<endl;
				cout<<"Enter 1 to add number of items of Disposable gloves "<<endl;
				cout<<"Enter 2 to enter Number of vitamins that have been sale out to maintain record "<<endl;
				cout<<"Enter 3 to exit : ";
				cin>>e;
				if(e==1){
					cout<<"Enter Number of Disposable gloves that come in Pharmacy to maintain the record : ";
					cin>>b;
					Disposable_gloves+=b;
				}
				else if(e==2){
					jump5:
					cout<<"Enter Number of Disposable gloves that are sold from Pharmacy to maintain the record : ";
					cin>>b;
					if(Disposable_gloves>b){
					Disposable_gloves-=b;
			    	}
			    	else {
			    		cout<<"The number of Disposable gloves you entered is much higher from actual so enter correct ";
						cout<<"number of items : "<<endl<<endl;
						goto jump5;
					}
				}
			}	
			}
			else if(ph==6){
				break;
			}
		}
	}
		void display(){
			pharmacy.open("PharmacyData.txt");
			pharmacy<<endl<<endl<<"********************************************************"<<endl;
        	pharmacy<<endl<<endl<<"             Pharmacy Material "<<endl<<endl;
			pharmacy<<"The number of Tablets Medicine are  : "<<Tablets_Medicine<<endl;
			pharmacy<<"The numbers of Syrups Medicine are  : "<<Syrups_Medicine<<endl;
			pharmacy<<"The number of Injections are        : "<<Injections<<endl;
			pharmacy<<"The number of vitamins are          : "<<vitamins<<endl;
			pharmacy<<"The number of Disposable gloves are : "<<Disposable_gloves<<" packets"<<endl;
			pharmacy.close();
			inpharmacy.open("PharmacyData.txt");
			while(inpharmacy.eof()==0){
				string pharma;
				getline(inpharmacy,pharma);
				cout<<pharma<<endl;
			}
			inpharmacy.close();
		}
};


int main()
{
	system("color 80");
	char arr[]={'H','O','S','P','I','T','A','L',' ','M','A','N','A','G','E','M','E','N','T',' ','S','Y','S','T','E','M'};
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t";
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout<<arr[i];
		Sleep(30);
	}
	Sleep(1000);
	system("cls");
    HospitalIdentity objhos;
    Person *ptr;
    Doctor objd;
    Patient objp;
    Nurse objnu;
    Staff objst;
    objhos.Hospital_Identity("AEA Hospital","Sialkot,Pakistan",3020574422);
    
    	int a;
        cout<<endl<<endl<<"********************************************************"<<endl<<endl;
        cout<<"         Hospital Authority Authentication "<<endl<<endl;
    	cout<<"********************************************************"<<endl<<endl;	
    	cout<<"Enter password of Management of Hospital : ";
    	jump:
    	cin>>a;
    	try{
    	if(a==786)
    	{
    		system("cls");
    cout<<endl<<endl<<"********************************************************"<<endl<<endl;
    cout<<"         Welcome to Hospital Authority "<<endl<<endl;
	cout<<"********************************************************"<<endl;	
	time_t now = time(0);
    char* dt = ctime(&now);
    cout <<endl<< "The Current date and time when you entered in"<<endl;
	cout<< "Hospital Authority is : " << dt << endl;
	cout<<"Enter Any character to run program : ";
    	getch();
    	system("cls");
    int n;
    while(n!=7)
    {
    cout<<endl<<endl<<"********************************************************"<<endl;
    cout<<"Enter 1 To Change Your Hospital Identity    "<<endl;
    cout<<"Enter 2 To Change Doctor Of Any Field       "<<endl;
    cout<<"Enter 3 to get list of nurses or to modify nurses in hospital   "<<endl;
    cout<<"Enter 4 to know about rooms  "<<endl;
    cout<<"Enter 5 to Enter or Search Patient Details "<<endl;
    cout<<"Enter 6 to get detail or to modify other staff detail "<<endl;
    cout<<"Enter 7 to Exit : ";
    cin>>n;
    system("cls");
    if(n==1){
    	
    	objhos.Hospital_Identity();
     	objhos.display();

   }
    else if (n==7)
    {
    char arr[]={'P','R','O','G','R','A','M',' ','E','X','I','T','S'};
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t";
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		cout<<arr[i];
		Sleep(30);
	}
	Sleep(1000);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
    	break;
	}
    else if(n==2){
    int k;
    while(k!=3){
    cout<<endl<<endl<<"********************************************************"<<endl;
   	cout<<endl<<"                        Doctors Section"<<endl<<endl;
    cout<<"Enter 1 to get list of Doctors "<<endl;
    cout<<"Enter 2 to modify Doctors "<<endl;
    cout<<"Enter 3 to exit : ";
    cin>>k;
    if(k==1){
    ptr=&objd;
   	objd.nutritionist("Eman Abid","Aneeba Farooq");
   	objd.Dentist("Malaika Razzaq","Areeba Amer");
   	objd.ENT("Abdullah Abid","Rohan Ahmed");
   	objd.Child_Specialist("Tariq Mehmood","Abid Mehmood");
   	objd.optometrist("Ahmed Abid","Subhan Abid");
   	objd.Gynocologist("Saniya Kashif","Ayisha Shamas");
   	ptr->display();
    }
    if(k==2){
   	int b;
   	while(b!=7){
   	cout<<endl<<endl<<"********************************************************"<<endl;
   	cout<<endl<<endl<<"                Changing Doctor"<<endl;
   	cout<<"Enter 1 to change nutritionist doctors      "<<endl;
   	cout<<"Enter 2 to change Dentist doctors           "<<endl;
   	cout<<"Enter 3 to change ENT doctors               "<<endl;
   	cout<<"Enter 4 to change child specialist doctors  "<<endl;
   	cout<<"Enter 5 to change Optometrist doctors       "<<endl;
   	cout<<"Enter 6 to change Gynocologist doctors      "<<endl;
   	cout<<"Enter 7 to exit : ";
   	cin>>b;
   	if(b==7){
   		break;
	   }
   	else if(b==1){
   		objd.nutritionist();
	   }
	  
   	else if(b==2){
   		objd.Dentist();
	   }
	  
    else if(b==3){
   		objd.ENT();
	   }
	 
	else if(b==4){
   		objd.child_specialist();
   	}
   	
	else if(b==5){
   		objd.optometrist();
   	}
   	
   	else if(b==6){
   		objd.Gynocologist();
	   }
	   }
    }
    else if(k==3){
    	break;
	}
    }
    }
    else if(n==3){
    	system("cls");
    	cout<<endl<<endl<<"********************************************************"<<endl;
        cout<<endl<<endl<<"             Nurse Section"<<endl;
    	ptr=&objnu;
    	objnu.Nurse_Data();
    	ptr->display();
	}
	else if(n==4){
	Wards objroom;
	Wards *ptr1;
	ptr1=&objroom;
	ptr1->display();
	Furniture objfu;
	int r;
	while(r!=3){
	cout<<endl<<endl<<"********************************************************"<<endl;
	cout<<"Enter 1 to see Furniture Items "<<endl;
	cout<<"Enter 2 to see Pharmacy Details "<<endl;
	cout<<"Enter 3 to exit : ";
	cin>>r;
	if(r==1){
	char q;
	ptr1=&objfu;
	ptr1->display();
	while(q!=a){
	cout<<endl<<endl<<"********************************************************"<<endl;
	cout<<"Enter f to modify number of Furniture Items  "<<endl;
	cout<<"Enter a if you don't want to modify number of furniture items : ";
	cin>>q;
	if(q=='f'  || q=='F'){
		objfu.modifyingFurniturenumber();
		ptr1->display();
	}
	else if(q=='a'){
		break;
	}	
    }
    system("cls");
    }
    else if(r==2){
    	Pharmacy objphar;
    	ptr1=&objphar;
    	int s;
    	while(s!=3){
    	cout<<endl<<endl<<"********************************************************"<<endl;
    	cout<<endl<<"Enter 1 to see Pharmacy Details  "<<endl;
    	cout<<"Enter 2 to modify number of items of pharmacy materials "<<endl;
    	cout<<"Enter 3 to exit : ";
    	cin>>s;
    	if(s==1){
    		ptr1->display();
		}
		else if(s==2){
    	objphar.data();
    	ptr1->display();
        }
    	else if(s==3){
    		break;
		}
	}
    }
	else if(r==3){
		break;
	}
	}
}
	else if(n==5){
		int p;
            while(p!=3){
            	cout<<endl<<endl<<"********************************************************"<<endl<<endl;
            	cout<<"Enter 1 to see recorded Patient Information : "<<endl;
                cout<<"Enter 2 to search or insert Patient Information "<<endl;
                cout<<"Enter 3 if your work with Patient information is finished : ";
                cin>>p;
            	if(p==1){
	                objp.display();
				}
				else if(p==2){
					objp.data();
					objp.display();
					objp.display1();
					
				}
				else if(p==3){
					cout<<"Exited Successfully"<<endl;
					break;
				}
			
		        
	}	
	}
	else if(n==6){
		cout<<endl<<endl<<"********************************************************"<<endl;
        cout<<endl<<endl<<"             Staff Section"<<endl;
    	ptr=&objst;
    	objst.Staff_Data();
    	ptr->display();
	}

   }
}
else {
	throw a;
}
}
catch(int a){
	cout<<endl<<endl<<"********************************************************"<<endl<<endl;
	cout<<"WARNING!!!!!!"<<endl;
	cout<<"Your Password "<<a<<" is wrong.";
	cout<<endl<<endl<<"********************************************************"<<endl<<endl;
	cout<<"\nEnter Correct Password to access Hospital Authority : ";
	goto jump;
}
   return 0;
}

