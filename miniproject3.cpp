#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<fstream>
#include<windows.h>
#include<time.h>
using namespace std;
void admin();
void user();
void admins();
void modify();
void view();
void delet();
void bca();
void bscit();
void mca();
void bba();
void bcom();
void mba();
void bcav();
void bscv();
void mcav();
void bbav();
void bcomv();
void mbav();
void bcad();
void bscd();
void mcad();
void bbad();
void bcomd();
void mbad();
int status;
ofstream fout;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds+clock();
    while(goal>clock());
}
class add
{
	public:
		int fee()
		{
		  system("cls");
		  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER  ***************************************************"<<endl;
          int adm_fee,adm_fee1,tut_fee,tut_fee2,std_insu,std_insu2,exam_fee1,exam_fee,enroll_fee,cau_fee,cau_fee1,enroll_fee1,total1;
          fout<<"                    FEE PAYABLE AT THE TIME OF ADMISSION"<<endl<<endl;
	      fout<<"           PARTICULAR                                    FIRST YEAR"<<endl;
	      fout<<"                                                   1ST SEMESTER          2ND SEMESTER"<<endl<<endl<<endl;
	      cout<<"\n\n\n              Enter a ADMISSION FEE OF 1ST SEM : ";
	      cin>>adm_fee;
	      cout<<"\n\n                Enter a ADMISSION FEE OF 2ND SEM: ";
	      cin>>adm_fee1;
	      fout<<"          ADMISSION FEE (NON REFUNDABLE)                    "<<adm_fee<<"                      "<<adm_fee1<<endl<<endl;
          cout<<"\n\n                Enter a TUITION FEE OF 1ST SEM : ";
	      cin>>tut_fee;
	      cout<<"\n\n                ENTER A TUTION FEEE OF 2ND SEM FEE : ";
	      cin>>tut_fee2;
	      fout<<"          TUITION FEE                                       "<<tut_fee<<"                      "<<tut_fee2<<endl<<endl;
	      cout<<"\n\n                Enter a CAUTION MONEY OF 1ST SEM: ";
	      cin>>cau_fee;
	      cout<<"\n\n                Enter a CAUTION MONEY OF 2ND SEM: ";
	      cin>>cau_fee1;
	      fout<<"          CAUTION MONEY (ONE TIME,REFUNDABLE)               "<<cau_fee<<"                      "<<cau_fee1<<endl<<endl;
	      cout<<"\n\n                Enter a STUDENT INSURANCE OF 1ST SEM: ";
	      cin>>std_insu;
	      cout<<"\n\n                Enter a STUDENT INSURANCE OF 2ND SEM: ";
	      cin>>std_insu2;
	      fout<<"          STUDENT INSURANCE COVER (SIC)                     "<<std_insu<<"                      "<<std_insu2<<endl<<endl;
	      cout<<"\n\n                Enter a EXAMINATION FEE OF 1ST SEM : ";
	      cin>>exam_fee;
	      cout<<"\n\n                Enter a EXAMINATION FEE OF 2ND SEM : ";
	      cin>>exam_fee1;
	      fout<<"          EXAMINATION FEE                                   "<<exam_fee<<"                      "<<exam_fee1<<endl<<endl;
	      cout<<"\n\n                Enter a ENROLLMENT FEE OF 1ST SEM: ";
	      cin>>enroll_fee;
	      cout<<"\n\n                Enter a ENROLLMENT FEE OF 2ND SEM: ";
	      cin>>enroll_fee1;
	      fout<<"          ENROLLMENT FEE (ONE TIME)                         "<<enroll_fee<<"                      "<<enroll_fee1<<endl<<endl<<endl;
	      int total=adm_fee+tut_fee+cau_fee+std_insu+exam_fee+enroll_fee;
	      total1=adm_fee1+tut_fee2+cau_fee1+std_insu2+exam_fee1+enroll_fee1;
	      fout<<"TOTAL AMMOUNT IN RS                                   "<<total<<"                     "<<total1<<endl<<endl<<endl;
	      fout<<"  NOTE: 40% SEATS RESERVED FOR UTTARAKHAND DOMICILE STUDENTS"<<endl<<endl;
	      fout<<"  NOTE: ALL THE STUDENT WHO  ARE PERMANENT RESIDENTS OF UTTARAKHAND WILL BE GRANTED 26% WAIVER  ON TUTION FEE EVERY YEAR"<<endl<<endl;
	      fout<<"  NOTE: THERE WILL BE AN INCREASE OF 5% PER YEAR IN TUTION FEE  FOR ALL THE  COURSES. THIS WILL BE APPLICABLE TO BOTH ALL INDIA AND STATE QUOTA"<<endl<<endl;
	      cout<<"\n\n\n                                    DATA INSERTED SUCCESSFULLY......!!";
	      delay(3000);
          fout.close();
	      return 0;
		}
        int sys()
        {
          system("cls");
          cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER  ***************************************************"<<endl;
	      int n,subc,i;
	       string ch ;
	      cout<<"\n\n\n                ENTER NUMBER OF SUBJECT : ";
	      cin>>n;
	     // fout<<"                                     SEMESTER - "<<endl;
	      fout<<"\n\n\n\n                S.NO.                     SUBJECT NAME                    SUBJECT CODE "<<endl;
	      for(i=1;i<=n;i++)
	      {
	        cout<<"\n\n                ENTER THE NAME OF  SUBJECT : ";
		    cin>>ch;
		    cout<<"\n\n                ENTER THE SUBJECT CODE :  ";
		    cin>>subc;
		    fout<<"\n\n\n                 "<<i<<"                         "<<ch<<"                                  "<<subc<<endl;
       	  }
	      cout<<"\n\n                            DATA INSERTED SUCCESSFULLY......!!";
	      delay(3000);
	      fout.close();
	      return 0;
       }
};
int main()
{
    system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER  ***************************************************"<<endl;
		int x;
	cout<<"\n\n\n                                                                        1. ADMIN";
	cout<<"\n\n\n                                                                        2. USER ";

	cout<<"\n\n\n                                                                PRESS 0 TO EXIT THIS SOFTWARE";
	cout<<"\n\n\n                                                                     ENTER YOUR CHOICE : ";
	cin>>x;
	switch(x)
	{
		case 1:{
		        admin();
		        break;
		       }
		case 2:{
			    user();
			    break;
		       }
		case 0:{
			    system("cls");
			    cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER  ***************************************************"<<endl;
			    cout<<"\n\n\n\n\n\n                                            ######## THANKX FOR VISITING THIS SOFTWARE ##########";
			    break;
	           }
		default :{
			      system("cls");
                  delay(3000);
                 cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
	              delay(1000);
	              main();
	             }
	}
	return 0;
}

void admin()
{
	string username;
	string passward;
	int loginattempt=0;
	while(loginattempt<5)
	{
		system("cls");
		cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORE   ***************************************************"<<endl;
		cout<<"\n\n                                          ENTER YOUR USERNAME : ";
		cin>>username;
		cout<<"\n\n                                          ENTER YOUR PASSWARD : ";
		cin>>passward;
		if(username=="UIM"&&passward=="BCA")
		{
			cout<<"\n\n                                                          LOGIN SUCCESSFULLY!!!!";
			delay(3000);
			admins();
			break;
		}
		else
		{
			cout<<"\n\n                                                  INVALID LOGIN ATTEMPT . PLEASE TRY AGAIN"<<endl;
		    delay(2000);
			loginattempt++;
		}

	}
}

void admins()
{
    system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
	cout<<"\n\n\n                                                                            1. ADD";
	cout<<"\n\n\n                                                                            2. DELETE";
	cout<<"\n\n\n                                                                            3. VIEW";
	cout<<"\n\n\n                                                                            4. EXIT";
	int d;

	cout<<"\n\n\n                                                                   ENTER YOUR CHOICE : ";
	cin>>d;
	switch(d)
	{
		case 1:{
			    modify();
			    break;
		       }
		case 2:{
			    delet();
			    break;
		       }
		case 3:{
		        view();
			    break;
		       }
		case 4:{
			    system("cls");
			    cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER  ***************************************************"<<endl;
			    cout<<"\n\n\n\n                                             ######## THANKX FOR VISITING THIS SOFTWARE ##########";
			    break;
		       }
		default:{
                system("cls");
                delay(2000);
                cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		        cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                delay(3000);
                admins();
			    break;
	           }
	}
}
void modify()
{
 system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"\n\n\n                                                    IT";
 cout<<"\n\n\n                                                                       1.BCA[BACHELOR OF COMPUTER APPLICATION]";
 cout<<"\n\n\n                                                                       2.BSC(IT)";
 cout<<"\n\n\n                                                                       3.MCA";
 cout<<"\n\n\n\n\n                                                MANAGEMENT";
 cout<<"\n\n\n                                                                       4.BBA";
 cout<<"\n\n\n                                                                       5.B.COM(HONS.)";
 cout<<"\n\n\n                                                                       6.MBA";
 cout<<"\n\n\n                                                             PRESS 0 TO EXIT THIS PAGE";
 int d;
 cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
 cin>>d;
 switch(d)
 {
 	case 1:{
 		     bca();
		     break;
	       }
	case 2:{
		     bscit();
		     break;
	       }
	case 3:{
		     mca();
		     break;
	       }

	case 4:{
		     bba();
			 break;
	       }
	case 5:{
		     bcom();
			 break;
       	   }
	case 6:{
		     mba();
			 break;
	       }
	case 0:{
		    admins();
		    break;
	       }

	default:{
             system("cls");
			 delay(2000);
             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		    delay(3000);
             modify();
		     break;
	        }
 }
}
void view()
{
 system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN VIEW MODE  ***************************************************"<<endl;
 cout<<"\n\n\n                                                IT";
 cout<<"\n\n\n                                                                1.BCA[BACHELOR OF COMPUTER APPLICATION]";
 cout<<"\n\n\n                                                                2.BSC(IT)[BACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY]";
 cout<<"\n\n\n                                                                3.MCA[MASTER OF COMPUTER APPLICATION]";
 cout<<"\n\n\n\n\                                             MANAGEMENT";
 cout<<"\n\n\n                                                                4.BBA[BACHELOR OF BUSINESS APPLICATION]";
 cout<<"\n\n\n                                                                5.B.COM(HONS.)[BACHELOR OF COMMERCE WITH HONOURS]";
 cout<<"\n\n\n                                                                6.MBA[MASTER OF BUSINESS APPLICATION]";
 cout<<"\n\n\n                                                           PRESS 0 TO EXIT THIS PAGE";
 int d;
 cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
 cin>>d;
 switch(d)
 {
 	case 1:{
 	        bcav();
		    break;
	       }
	case 2:{
	        bscv();
		    break;
	       }
	case 3:{
            mcav();
		    break;
	       }
	case 4:{
	        bbav();
		    break;
	       }
	case 5:{
	        bcomv();
		    break;
       	   }
	case 6:{
	        mbav();
		    break;
	       }
	case 0:{
	        admins();
	        break;
	       }
	default:{
             system("cls");
			 delay(2000);
             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		     delay(3000);
             view();
		     break;
	        }

}}
void delet()
{
	system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"\n\n\n                                                        IT";
 cout<<"\n\n\n                                                                       1.BCA";
 cout<<"\n\n\n                                                                       2.BSC(IT)";
 cout<<"\n\n\n                                                                       3.MCA";
 cout<<"\n\n\n\n\n                                                    MANAGEMENT";
 cout<<"\n\n\n                                                                       4.BBA";
 cout<<"\n\n\n                                                                       5.B.COM(HONS.)";
 cout<<"\n\n\n                                                                       6.MBA";
 cout<<"\n\n\n                                                             PRESS 0 TO EXIT THIS PAGE";
 int d;
 cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
 cin>>d;
 switch(d)
 {
 	case 1:{
 	        bcad();
		    break;
	       }
	case 2:{
	        bscd();
		    break;
	       }
	case 3:{
            mcad();
		    break;
	       }
	case 4:{
	        bbad();
		    break;
	       }
	case 5:{
	        bcomd();
		    break;
       	   }
	case 6:{
	        mbad();
		    break;
	       }
	case 0:{
	        admins();
	       }
	default:{
             system("cls");
			 delay(2000);
             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		     delay(3000);
             delet();
		     break;
	        }

}
}
void user()
{
	view();
}
void bca()
{
	system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
    cout<<"\n\n\n                                                                      1. FEE     "<<endl;
    cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
    cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
	int n;
	cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
    cin>>n;
       switch(n)
    {
    	case 1:{
		        fout.open("bcaf.txt", ios::out);
	            add obj;
	            obj.fee();
	            admins();
    		    break;
		       }
		case 2:{
			     ab:
                system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                case 1:
    {
                        fout.open("bca1.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 2:{
                        fout.open("bca2.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 3:{
                        fout.open("bca3.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 4:{
                        fout.open("bca4.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 5:{
                        fout.open("bca5.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 6:{
                        fout.open("bca6.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 0:{
                         modify();
                       }
                default:{
			              system("cls");
			              delay(2000);
                          cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
                        cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                 delay(3000);
                           goto ab;
			             break;
		                }
		     }  }
		case 0:{
			    modify();
		       }
		default:{
			      system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bca();
			      break;
		        }
	}


}
void bscit()
{
	system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
    cout<<"\n\n\n                                                                      1. FEE     "<<endl;
    cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
    cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
	int n;
	cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
    cin>>n;
    switch(n)
    {
    case 1:{
    	        fout.open("bscitf.txt", ios::out);
	            add obj;
	            obj.fee();
	            admins();
			    break;
		       }
		case 2:{
			     ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                case 1:
    {
                        fout.open("bscit1.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 2:{
                        fout.open("bscit2.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 3:{
                        fout.open("bscit3.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 4:{
                        fout.open("bscit4.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 5:{
                        fout.open("bscit5.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 6:{
                        fout.open("bscit6.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 0:{
                         modify();
                       }
                default:{
			              system("cls");
			              delay(2000);
                          cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
                        cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                 delay(3000);
                           goto ab;
			             break;
		                }

		     }
		       }
		case 0:{
		        modify();
		       }
		default:{
		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bscit();
			      break;
		        }
	}


}
void mca()
{
	system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
    cout<<"\n\n\n                                                                      1. FEE     "<<endl;
    cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
    cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
	int n;
	cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
    cin>>n;
    switch(n)
    {
    	case 1:{
                fout.open("mcaf.txt", ios::out);
	            add obj;
	            obj.fee();
	            admins();
			    break;
		       }
		case 2:{
			ab:
                 system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                case 1:
    {
                        fout.open("mca1.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 2:{
                        fout.open("mca2.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 3:{
                        fout.open("mca3.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 4:{
                        fout.open("mca4.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 5:{
                        fout.open("mca5.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 6:{
                        fout.open("mca6.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 0:{
                         modify();
                       }
                default:{
			              system("cls");
			   delay(2000);
                          cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
                        cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		         delay(3000);
                           goto ab;
		                }
		     }
		       }
		case 0:{
		        modify();
		       }

		default:{
		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  mca();
			      break;
		        }
	}


}
void bba()
{
	system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
    cout<<"\n\n\n                                                                      1. FEE     "<<endl;
    cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
    cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
	int n;
	cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
    cin>>n;
    switch(n)
    {
    	case 1:{
                fout.open("bbaf.txt", ios::out);
	            add obj;
	            obj.fee();
	            admins();
			    break;
		       }
		case 2:{
			    ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                case 1:
    {
                        fout.open("bba1.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 2:{
                        fout.open("bba2.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 3:{
                        fout.open("bba3.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 4:{
                        fout.open("bba4.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 5:{
                        fout.open("bba5.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 6:{
                        fout.open("bba6.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 0:{
                         modify();
                       }
                default:{
			              system("cls");
			   delay(2000);
                          cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
                        cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                delay(3000);
                           goto ab;
		                }

		     }
		       }
		case 0:{
		        modify();
	       }
		default:{
		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bba();
			      break;
		        }
	}
}
void bcom()
{
	system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
    cout<<"\n\n\n                                                                      1. FEE     "<<endl;
    cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
    cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
	int n;
	cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
    cin>>n;
    switch(n)
    {
    	case 1:{
                fout.open("bcomf.txt", ios::out);
	            add obj;
	            obj.fee();
	            admins();
			    break;
		       }
		case 2:{
			    ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                case 1:
    {
                        fout.open("bcom1.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 2:{
                        fout.open("bcom2.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 3:{
                        fout.open("bcom3.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 4:{
                        fout.open("bcom4.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 5:{
                        fout.open("bcom5.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 6:{
                        fout.open("bcom6.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 0:{
                         modify();
                       }
                default:{
			              system("cls");
			   delay(2000);
                          cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
                        cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		         delay(3000);
                           goto ab;
			             break;
		                }
            }
		       }
		case 0:{
                modify();
		       }
		default:{
	               system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bcom();
			      break;
		        }}
}
void mba()
{

	system("cls");
	cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
    cout<<"\n\n\n                                                                      1. FEE     "<<endl;
    cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
    cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
	int n;
	cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
    cin>>n;
    switch(n)
    {
    	case 1:{
                fout.open("mbaf.txt", ios::out);
	            add obj;
	            obj.fee();
	            admins();
			    break;
		       }
		case 2:{
			    ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                case 1:
    {
                        fout.open("mba1.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 2:{
                        fout.open("mba2.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 3:{
                        fout.open("mba3.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 4:{
                        fout.open("mba4.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 5:{
                        fout.open("mba5.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 6:{
                        fout.open("mba6.txt", ios::out);
	                    add obj;
	                    obj.sys();
    		            admins();
                        break;
                       }
                case 0:{
                         modify();
                       }
                default:{
			              system("cls");
			   delay(2000);
                          cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
                        cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		         delay(3000);
                           goto ab;
			            // break;
		                }

		     }
		       }
		case 0:{
		        modify();
		       }
		default:{
		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  mba();

		        }
	}


}

void bcav()
{
 system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN VIEW MODE IN BCA  **********************************************"<<endl;
 cout<<"\n\n\n                                                                    BCA [ BACHELOR OF COMPUTER APPLICATION ]";
 cout<<"\n\n\n               This course is meant for the students having a strong taste for information technology and computer applications. The BCA program seeks to provide";
 cout<<"\n               the students not only comprehensive understanding of the theory but its applications too in diverse fields. The course prepares the young";
 cout<<"\n               professionals for a range of computers applications, computers organization, techniques of computer networking, software engineering, e-commerce,";
 cout<<"\n               web designing, latest programming technologies along with managerial aspects of business such as organization structure and personnel management";
 cout<<"\n               etc. In order to enhance programming skills of the young IT professionals, Uttaranchal University has introduced the concept of project development";
 cout<<"\n               in each language/technology learnt during semester duration.";

 cout<<"\n\n\n               Eligibility:-    Passed 10+2 or equivalent examination from any recognized board with Mathematics as one of the subjects, minimum 45% marks in ";
 cout<<"\n               aggregate for general category and 40% for SC/ST category.  ";
 cout<<"\n\n\n               COURSE DURATION :-       3YEARS";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         string line;
         ifstream myfile ("bcaf.txt");
         if(myfile.is_open())
         {
          while ( getline (myfile,line) )
          {
           cout << line << '\n';
          }
         myfile.close();
         }
         cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
         int m;
         cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
         cin>>m;
         view();
         break;
        }
 case 2:{
          ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            string line;
                            ifstream myfile ("bca1.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                  case 2:{
                           system("cls");
                            string line;
                            ifstream myfile ("bca2.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                   case 3:{
                            system("cls");
                            string line;
                            ifstream myfile ("bca3.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 4:{
                             system("cls");
                            string line;
                            ifstream myfile ("bca4.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 5:{
                             system("cls");
                            string line;
                            ifstream myfile ("bca5.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 6:{
                             system("cls");
                            string line;
                            ifstream myfile ("bca6.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                    case 0:{
                             view();
                           }
                    default:{
		                     system("cls");
			                 delay(2000);
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                             delay(3000);
                              goto ab;
                            }
        }}
 case 0:{
         view();
        }
 default:{

		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bcav();
        }
}}
void bscv()
{
 system("cls");
 cout<<"\n\n\n            *******************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN VIEW MODE IN BSC(IT)  **********************************************"<<endl;
 cout<<"\n\n\n                                                         BSC (IT)[ BACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY ]";
 cout<<"\n\n\n              This course is meant for the students who wish to acquire high skills in computers, computers applications and Information Technology. The B.Sc(IT)";
 cout<<"\n              program seeks to provide the students a comprehensive understanding of the theory and practical implementation of learnt concept in real time ";
 cout<<"\n              environment. This course is a fascinating mix of skills, methods and techniques with computer science as a fundamental subject. This program aims";
 cout<<"\n              at imparting to the students the skills to use wide range of technologies and programming language for system analysis and software development.";
 cout<<"\n              The students are also trained with latest technologies used for web designing, handling big data and animation. In order to enhance the programming";
 cout<<"\n              skills of the young IT professionals, Uttaranchal University has introduced the concept of project development in each language/technology learnt";
 cout<<"\n              during semester duration.  ";
 cout<<"\n\n\n              Eligibility :-";
 cout<<"\n                                      - 10+2 examination with any stream.";
 cout<<"\n                                      - Minimum 45% marks (40% in case of SC/ST category)";
 cout<<"\n\n\n              Course Duration :-      3 Years";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         string line;
         ifstream myfile ("bscitf.txt");
         if(myfile.is_open())
         {
          while ( getline (myfile,line) )
          {
           cout << line << '\n';
          }
         myfile.close();
         }
         cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
         int m;
         cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
         cin>>m;
         view();
         break;
        }
 case 2:{
          ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            string line;
                            ifstream myfile ("bscit1.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                  case 2:{
                           system("cls");
                            string line;
                            ifstream myfile ("bscit2.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                   case 3:{
                            system("cls");
                            string line;
                            ifstream myfile ("bscit3.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 4:{
                             system("cls");
                            string line;
                            ifstream myfile ("bscit4.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 5:{
                             system("cls");
                            string line;
                            ifstream myfile ("bscit5.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 6:{
                             system("cls");
                            string line;
                            ifstream myfile ("bscit6.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                    case 0:{
                             view();
                           }
                    default:{
		                     system("cls");
			                 delay(2000);
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                             delay(3000);
                              goto ab;
                            }
        }}
 case 0:{
         view();
        }
 default:{

		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bscv();
        }
}
}
void mcav()
{
 system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN VIEW MODE IN MCA  ******************************************"<<endl;
 cout<<"\n\n\n                                                                 MCA[ MASTER OF COMPUTER APPLICATION ]";
 cout<<"\n\n\n                This course is meant for the students who have fascination for the wonderful world of computers, vast range of computers applications and ";
 cout<<"\n                Information Technology with a perfect blend of managerial knowledge and skill.";
 cout<<"\n\n                The MCA program seeks to provide the students comprehensive understanding of the theory and practical implementation of the learnt concepts.";
 cout<<"\n                This course bridges the gap between industry and academics by preparing the young professionals for the nitty-gritty of computers applications,";
 cout<<"\n                Computer Organization, Compiler Design and various tools and techniques of Computer Network and Software Engineering, E-Commerce.";
 cout<<"\n\n                The students are also trained with latest technologies used for Web Designing , Handling Big Data, Animation and Simulation.";
 cout<<"\n\n                In order to enhance programming skills of the young IT professionals, Uttaranchal University has introduced the concept of project development";
 cout<<"\n                in each language/technology learnt during semester duration.";
 cout<<"\n\n\n                Eligibility :-    ";
 cout<<"\n                                           - BCA/B.Sc.(IT/CSE) with minimum 50% marks (45% in case of SC/ST)";
 cout<<"\n\n\n                Course Duration :-        2 Years";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         string line;
         ifstream myfile ("mcaf.txt");
         if(myfile.is_open())
         {
          while ( getline (myfile,line) )
          {
           cout << line << '\n';
          }
         myfile.close();
         }
         cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
         int m;
         cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
         cin>>m;
         view();
         break;
        }
 case 2:{
          ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            string line;
                            ifstream myfile ("mca1.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                  case 2:{
                           system("cls");
                            string line;
                            ifstream myfile ("mca2.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                   case 3:{
                            system("cls");
                            string line;
                            ifstream myfile ("mca3.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 4:{
                             system("cls");
                            string line;
                            ifstream myfile ("mca4.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 5:{
                             system("cls");
                            string line;
                            ifstream myfile ("mca5.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 6:{
                             system("cls");
                            string line;
                            ifstream myfile ("mca6.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                    case 0:{
                             view();
                           }
                    default:{
		                     system("cls");
			                 delay(2000);
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                             delay(3000);
                              goto ab;
                            }
        }}
 case 0:{
         view();
        }
 default:{

		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  mcav();
        }
}

}
void bbav()
{
 system("cls");
 cout<<"\n\n\n            ********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN VIEW MODE IN BBA ***********************************************"<<endl;
 cout<<"\n\n\n                                                                 BBA [ BACHELOR OF BUSSINESS ADMINSTRATION ]  ";
 cout<<"\n\n\n               This program gives the students strategic outlook on problems of business organization, management & solutions to them. The BBA program seeks to";
 cout<<"\n               provide to the management trainees the understanding of the theory, practice of management and the required knowledge and skills to succeed in the";
 cout<<"\n               business world. The degree course is intended for those who wish to acquire business and managerial knowledge and skills. The curriculum provides";
 cout<<"\n               the students with a strategic perspective on contemporary issues in management. The academic curriculum of this 3 years course involves comprehensive";
 cout<<"\n               learning that would produce managers who are well equipped with technical expertise and practical knowledge relevant to today’s globalized environment.";
 cout<<"\n               This program provides the students with practical orientation and broad specialization in marketing, finance, information systems, human resource ";
 cout<<"\n               management and international business. The course has extensive in-house practical training, with audio-visual support, class room session, case ";
 cout<<"\n               studies;seminar session, summer training and industrial visits";
 cout<<"\n\n\n               Eligibility :-  ";
 cout<<"\n\                                 - 10+2 examination with any stream.";
 cout<<"\n                                  - Minimum 45% marks (40% in case of SC/ST category)";
 cout<<"\n\n\n               Course Duration :-         3 Years ";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         string line;
         ifstream myfile ("bbaf.txt");
         if(myfile.is_open())
         {
          while ( getline (myfile,line) )
          {
           cout << line << '\n';
          }
         myfile.close();
         }
         cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
         int m;
         cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
         cin>>m;
         view();
         break;
        }
 case 2:{
          ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            string line;
                            ifstream myfile ("bba1.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                  case 2:{
                           system("cls");
                            string line;
                            ifstream myfile ("bba2.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                   case 3:{
                            system("cls");
                            string line;
                            ifstream myfile ("bba3.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 4:{
                             system("cls");
                            string line;
                            ifstream myfile ("bba4.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 5:{
                             system("cls");
                            string line;
                            ifstream myfile ("bba5.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 6:{
                             system("cls");
                            string line;
                            ifstream myfile ("bba6.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                    case 0:{
                             view();
                           }
                    default:{
		                     system("cls");
			                 delay(2000);
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                             delay(3000);
                              goto ab;
                            }
        }}
 case 0:{
         view();
        }
 default:{

		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bbav();
        }
}
}
void bcomv()
{
 system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"\n\n\n                                                             B.COM(HONS.)[BACHELOR OF COMMERCE WITH HONOURS]  ";
 cout<<"\n\n\n              B.Com.(Hons.) a three year under graduate is a much sought after course because it has application oriented -approach. The degree is a full-time ";
 cout<<"\n                  3-year program designed to provide the student with a wide range of managerial skills, while at the same time, building competence in a particular ";
 cout<<"\n                  area. Uttaranchal University has designed the course in such a way that in addition to their major subjects, the students are exposed to general ";
 cout<<"\n                  business principles, accounting, economic and quantitative skills. The students are given an exposure to soft skills, presentation skills, ";
 cout<<"\n                  professional communication and office etiquettes. In short, the students have to explore this course to realize the significance of it. ";
 cout<<"\n\n\n              Eligibility :-           ";
 cout<<"\n                                    - 10+2 examination in any stream.";
 cout<<"\n                                    - Minimum 50% marks(45% in case of SC/ST category)";
 cout<<"\n\n\n              Course Duration :-      3 Years";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         string line;
         ifstream myfile ("bcomf.txt");
         if(myfile.is_open())
         {
          while ( getline (myfile,line) )
          {
           cout << line << '\n';
          }
         myfile.close();
         }
         cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
         int m;
         cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
         cin>>m;
         view();
         break;
        }
 case 2:{
          ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            string line;
                            ifstream myfile ("bcom1.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                  case 2:{
                           system("cls");
                            string line;
                            ifstream myfile ("bcom2.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                   case 3:{
                            system("cls");
                            string line;
                            ifstream myfile ("bcom3.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 4:{
                             system("cls");
                            string line;
                            ifstream myfile ("bcom4.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 5:{
                             system("cls");
                            string line;
                            ifstream myfile ("bcom5.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 6:{
                             system("cls");
                            string line;
                            ifstream myfile ("bcom6.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                    case 0:{
                             view();
                           }
                    default:{
		                     system("cls");
			                 delay(2000);
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                             delay(3000);
                              goto ab;
                            }
        }}
 case 0:{
         view();
        }
 default:{

		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  bcomv();
        }
}}
void mbav()
{
  system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"\n\n\n                                                               MCA [ MASTER OF BUSINESS APPLICATION ]";
 cout<<"\n\n\n              A majority of people view management as a passport to strategic decision making positions and an integral development tool for management education ";
 cout<<"\n              and development.";
 cout<<"\n\n              Our MBA programme is designed to match the needs and requirements of industry and commerce and to fulfill the aspirations of future managers. Managers";
 cout<<"\n              need to be perceptive, thoughtful, and flexible to manage their internal and external environment. They have to be proactive, versatile and have the";
 cout<<"\n              knowledge and skill to explore new market and opportunities. They need to provide practical, workable solution to a range of complex problems.";
 cout<<"\n\n              The solution requires innovative and flexible approaches, supported by general and specialized knowledge that is sensitized to international and ";
 cout<<"\n              multi-cultural environments. The complexity of operations raises the need for the generalists as well as specialists, having knowledge of particular";
 cout<<"\n              functions like Finance, HR, International Business and Marketing, Retail and Event Management. ";
 cout<<"\n\n\n              Eligibility :-           Minimum 50% marks at graduation level with valid MAT/CAT/CMAT/XAT Score/Percentile. ";
 cout<<"\n\n\n              Course Duration :-       2 Years";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         string line;
         ifstream myfile ("mbaf.txt");
         if(myfile.is_open())
         {
          while ( getline (myfile,line) )
          {
           cout << line << '\n';
          }
         myfile.close();
         }
         cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
         int m;
         cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
         cin>>m;
         view();
         break;
        }
 case 2:{
          ab:
		         system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            string line;
                            ifstream myfile ("mba1.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                  case 2:{
                           system("cls");
                            string line;
                            ifstream myfile ("mba2.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                         }
                   case 3:{
                            system("cls");
                            string line;
                            ifstream myfile ("mba3.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 4:{
                             system("cls");
                            string line;
                            ifstream myfile ("mba4.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 5:{
                             system("cls");
                            string line;
                            ifstream myfile ("mba5.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                   case 6:{
                             system("cls");
                            string line;
                            ifstream myfile ("mba6.txt");
                            if(myfile.is_open())
                            {
                              while ( getline (myfile,line) )
                              {
                                cout << line << '\n';
                              }
                              myfile.close();
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            view();
                            break;
                          }
                    case 0:{
                             view();
                           }
                    default:{
		                     system("cls");
			                 delay(2000);
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                     cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
                             delay(3000);
                              goto ab;
                            }
        }}
 case 0:{
         view();
        }
 default:{

		           system("cls");
			      delay(2000);
                  cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		          cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		          delay(3000);
                  mbav();
        }
}

}

void bcad()
{
    system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"                                                                           ";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
         status=remove("bcaf.txt");
         if(status==0)
	     {
		   cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	     }
	     else
	     {
	       	cout<<"\n\n\n                                                               UNABLE TO DELETE FILE ";
	     	perror("\n\n\n                                                              ERROR MESSAGE ");
	     }
        cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
        int m;
        cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
        cin>>m;
        delet();
        break;

        }
 case 2:{
          ab:
                system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bca1.txt");
                            if(status==0)
	                        {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
                            }
                             else
	       	                {    cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                          	perror("\n\n\n                                                                  ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 2:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bca2.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
	                         else
                             {
	                        	cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                 ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                             break;
                            }
                    case 3:{
                              system("cls");
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                              status=remove("bca3.txt");
                              if(status==0)
	                          {
		                          cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                          }
	                          else
	                          {
	                         	cout<<"\n\n\n                                                                        UNABLE TO DELETE FILE";
	     	                    perror("\n\n\n                                                                       ERROR MESSAGE ");
	                          }

                              cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                              int m;
                              cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                              cin>>m;
                              delet();
                              break;
                           }
                  case 4:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bca4.txt");
                            if(status==0)
	                        {
		                        cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
                            {
                                cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                         	perror("\n\n\n                                                                 ERROR MESSAGE ");
	                        }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 5:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bca5.txt");
                            if(status==0)
	                        {
		                       cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
	                        {
	       	                   cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	     	                   perror("\n\n\n                                                                 ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 6:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bca6.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
                             else
	                         {
	                        	cout<<"\n\n\n                                                                 UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                              break;
                         }
                  case 0:{
                           bcad();
                         }
                  default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              goto ab;
                           }
        }}
 case 0:{
          delet();
        }
 default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              bcad();
                           }

}}
void bscd()
{
    system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"                                                                           ";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
         status=remove("bscitf.txt");
         if(status==0)
	     {
		   cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	     }
	     else
	     {
	       	cout<<"\n\n\n                                                               UNABLE TO DELETE FILE ";
	     	perror("\n\n\n                                                              ERROR MESSAGE ");
	     }
        cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
        int m;
        cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
        cin>>m;
        delet();
        break;

        }
 case 2:{
          ab:
                system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bscit1.txt");
                            if(status==0)
	                        {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
                            }
                             else
	       	                {    cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                          	perror("\n\n\n                                                                  ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 2:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bscit2.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
	                         else
                             {
	                        	cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                 ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                             break;
                            }
                    case 3:{
                              system("cls");
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                              status=remove("bscit3.txt");
                              if(status==0)
	                          {
		                          cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                          }
	                          else
	                          {
	                         	cout<<"\n\n\n                                                                        UNABLE TO DELETE FILE";
	     	                    perror("\n\n\n                                                                       ERROR MESSAGE ");
	                          }

                              cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                              int m;
                              cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                              cin>>m;
                              delet();
                              break;
                           }
                  case 4:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bscit4.txt");
                            if(status==0)
	                        {
		                        cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
                            {
                                cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                         	perror("\n\n\n                                                                 ERROR MESSAGE ");
	                        }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 5:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bscit5.txt");
                            if(status==0)
	                        {
		                       cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
	                        {
	       	                   cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	     	                   perror("\n\n\n                                                                 ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 6:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bscit6.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
                             else
	                         {
	                        	cout<<"\n\n\n                                                                 UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                              break;
                         }
                  case 0:{
                           bscd();
                         }
                  default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              goto ab;
                           }
        }}
 case 0:{
          delet();
        }
 default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              bscd();
                           }

}}
void mcad()
{
  system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"                                                                           ";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
         status=remove("mcaf.txt");
         if(status==0)
	     {
		   cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	     }
	     else
	     {
	       	cout<<"\n\n\n                                                               UNABLE TO DELETE FILE ";
	     	perror("\n\n\n                                                              ERROR MESSAGE ");
	     }
        cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
        int m;
        cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
        cin>>m;
        delet();
        break;

        }
 case 2:{
          ab:
                system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("mca1.txt");
                            if(status==0)
	                        {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
                            }
                             else
	       	                {    cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                          	perror("\n\n\n                                                                  ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 2:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("mca2.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
	                         else
                             {
	                        	cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                 ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                             break;
                            }
                    case 3:{
                              system("cls");
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                              status=remove("mca3.txt");
                              if(status==0)
	                          {
		                          cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                          }
	                          else
	                          {
	                         	cout<<"\n\n\n                                                                        UNABLE TO DELETE FILE";
	     	                    perror("\n\n\n                                                                       ERROR MESSAGE ");
	                          }

                              cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                              int m;
                              cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                              cin>>m;
                              delet();
                              break;
                           }
                  case 4:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("mca4.txt");
                            if(status==0)
	                        {
		                        cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
                            {
                                cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                         	perror("\n\n\n                                                                 ERROR MESSAGE ");
	                        }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 5:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("mca5.txt");
                            if(status==0)
	                        {
		                       cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
	                        {
	       	                   cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	     	                   perror("\n\n\n                                                                 ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 6:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("mca6.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
                             else
	                         {
	                        	cout<<"\n\n\n                                                                 UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                              break;
                         }
                  case 0:{
                           mcad();
                         }
                  default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              goto ab;
                           }
        }}
 case 0:{
          delet();
        }
 default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              mcad();
                           }

}}

void bbad()
{
    system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"                                                                           ";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
         status=remove("bbaf.txt");
         if(status==0)
	     {
		   cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	     }
	     else
	     {
	       	cout<<"\n\n\n                                                               UNABLE TO DELETE FILE ";
	     	perror("\n\n\n                                                              ERROR MESSAGE ");
	     }
        cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
        int m;
        cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
        cin>>m;
        delet();
        break;

        }
 case 2:{
          ab:
                system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bba1.txt");
                            if(status==0)
	                        {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
                            }
                             else
	       	                {    cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                          	perror("\n\n\n                                                                  ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 2:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bba2.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
	                         else
                             {
	                        	cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                 ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                             break;
                            }
                    case 3:{
                              system("cls");
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                              status=remove("bba3.txt");
                              if(status==0)
	                          {
		                          cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                          }
	                          else
	                          {
	                         	cout<<"\n\n\n                                                                        UNABLE TO DELETE FILE";
	     	                    perror("\n\n\n                                                                       ERROR MESSAGE ");
	                          }

                              cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                              int m;
                              cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                              cin>>m;
                              delet();
                              break;
                           }
                  case 4:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bba4.txt");
                            if(status==0)
	                        {
		                        cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
                            {
                                cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                         	perror("\n\n\n                                                                 ERROR MESSAGE ");
	                        }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 5:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bba5.txt");
                            if(status==0)
	                        {
		                       cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
	                        {
	       	                   cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	     	                   perror("\n\n\n                                                                 ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 6:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bba6.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
                             else
	                         {
	                        	cout<<"\n\n\n                                                                 UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                              break;
                         }
                  case 0:{
                           bbad();
                         }
                  default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              goto ab;
                           }
        }}
 case 0:{
          delet();
        }
 default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              bbad();
                           }

}}

void bcomd()
{
    system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"                                                                           ";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
         status=remove("bcomf.txt");
         if(status==0)
	     {
		   cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	     }
	     else
	     {
	       	cout<<"\n\n\n                                                               UNABLE TO DELETE FILE ";
	     	perror("\n\n\n                                                              ERROR MESSAGE ");
	     }
        cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
        int m;
        cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
        cin>>m;
        delet();
        break;

        }
 case 2:{
          ab:
                system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bcom1.txt");
                            if(status==0)
	                        {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
                            }
                             else
	       	                {    cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                          	perror("\n\n\n                                                                  ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 2:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bcom2.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
	                         else
                             {
	                        	cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                 ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                             break;
                            }
                    case 3:{
                              system("cls");
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                              status=remove("bcom3.txt");
                              if(status==0)
	                          {
		                          cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                          }
	                          else
	                          {
	                         	cout<<"\n\n\n                                                                        UNABLE TO DELETE FILE";
	     	                    perror("\n\n\n                                                                       ERROR MESSAGE ");
	                          }

                              cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                              int m;
                              cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                              cin>>m;
                              delet();
                              break;
                           }
                  case 4:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bcom4.txt");
                            if(status==0)
	                        {
		                        cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
                            {
                                cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                         	perror("\n\n\n                                                                 ERROR MESSAGE ");
	                        }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 5:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("bcom5.txt");
                            if(status==0)
	                        {
		                       cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
	                        {
	       	                   cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	     	                   perror("\n\n\n                                                                 ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 6:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("bcom6.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
                             else
	                         {
	                        	cout<<"\n\n\n                                                                 UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                              break;
                         }
                  case 0:{
                           bcomd();
                         }
                  default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              goto ab;
                           }
        }}
 case 0:{
          delet();
        }
 default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              bcomd();
                           }

}}

void mbad()
{
 system("cls");
 cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
 cout<<"                                                                           ";
 cout<<"\n\n\n                                                                      1. FEE     "<<endl;
 cout<<"\n\n\n                                                                      2. SYLLABUS"<<endl;
 cout<<"\n\n\n                                                               PREE 0 TO EXIT THIS PAGE"<<endl;
 int n;
 cout<<"\n\n\n                                                                    ENTER YOUR CHOICE : ";
 cin>>n;
 switch(n)
 {
 case 1:{
         system("cls");
         cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
         status=remove("mbaf.txt");
         if(status==0)
	     {
		   cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	     }
	     else
	     {
	       	cout<<"\n\n\n                                                               UNABLE TO DELETE FILE ";
	     	perror("\n\n\n                                                              ERROR MESSAGE ");
	     }
        cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
        int m;
        cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
        cin>>m;
        delet();
        break;

        }
 case 2:{
          ab:
                system("cls");
                cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                cout<<"\n\n\n                                                                         1.SEMESTER-1";
                cout<<"\n\n\n                                                                         2.SEMESTER-2";
                cout<<"\n\n\n                                                                         3.SEMESTER-3";
                cout<<"\n\n\n                                                                         4.SEMESTER-4";
                cout<<"\n\n\n                                                                         5.SEMESTER-5";
                cout<<"\n\n\n                                                                         6.SEMESTER-6";
                cout<<"\n\n\n                                                                   PRESS 0 TO EXIT THIS PAGE";
                int c;
                cout<<"\n\n\n                                                                ENTER YOUR CHOICE : ";
                cin>>c;
                switch(c)
                {
                  case 1:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("mba1.txt");
                            if(status==0)
	                        {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
                            }
                             else
	       	                {    cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                          	perror("\n\n\n                                                                  ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 2:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("mba2.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
	                         else
                             {
	                        	cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                 ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                             break;
                            }
                    case 3:{
                              system("cls");
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                              status=remove("mba3.txt");
                              if(status==0)
	                          {
		                          cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                          }
	                          else
	                          {
	                         	cout<<"\n\n\n                                                                        UNABLE TO DELETE FILE";
	     	                    perror("\n\n\n                                                                       ERROR MESSAGE ");
	                          }

                              cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                              int m;
                              cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                              cin>>m;
                              delet();
                              break;
                           }
                  case 4:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("mba4.txt");
                            if(status==0)
	                        {
		                        cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
                            {
                                cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	                         	perror("\n\n\n                                                                 ERROR MESSAGE ");
	                        }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 5:{
                            system("cls");
                            cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                            status=remove("mba5.txt");
                            if(status==0)
	                        {
		                       cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                        }
                            else
	                        {
	       	                   cout<<"\n\n\n                                                                  UNABLE TO DELETE FILE";
	     	                   perror("\n\n\n                                                                 ERROR MESSAGE ");
                            }
                            cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                            int m;
                            cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                            cin>>m;
                            delet();
                            break;
                         }
                  case 6:{
                             system("cls");
                             cout<<"\n\n\n            **********************************************  WELCOME  TO  'UIM  COURSE  EXPLORER' IN ADMIN MODE  ***************************************************"<<endl;
                             status=remove("mba6.txt");
                             if(status==0)
                             {
		                         cout<<"\n\n\n                                                                 FILE DELETED SUCCESSFULLY...!!";
	                         }
                             else
	                         {
	                        	cout<<"\n\n\n                                                                 UNABLE TO DELETE FILE";
                                perror("\n\n\n                                                                ERROR MESSAGE ");
	                         }
                             cout<<"\n\n                                          PRESS 0 TO EXIT THIS PAGE";
                             int m;
                             cout<<"\n\n\n                                           ENTER YOUR CHOICE :";
                             cin>>m;
                             delet();
                              break;
                         }
                  case 0:{
                           mbad();
                         }
                  default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              goto ab;
                           }
        }}
 case 0:{
          delet();
        }
 default :{
                              system("cls");
			                  delay(2000);
                              cout<<"\n\n\n            **********************************************  WELCOME  TO  UIM  COURSE  EXPLORER IN ADMIN MODE  ***************************************************"<<endl;
		                      cout<<"\n\n\n                                                         ########## INVALID CHOICE ##########                                        "<<endl;
		                      delay(3000);
                              mbad();
                           }

}}


















