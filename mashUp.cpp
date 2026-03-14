/* MTN MashUp Using C++ */
#include <iostream>
#include <string>
using namespace std;

//Menu function
void DisplayMenu(){
    cout<<"Welcome to MTN Pluse."<<endl;
    cout<<endl;
    cout<<"\t\t1.Mashup for Self"<<endl;
    cout<<"\t2.Mashup fo Others"<<endl;
    cout<<"3.Convert minutes to Data."<<endl;
    cout<<"\t\t\t4.Pluse Loyalty"<<endl;
    cout<<"5.Check Promo Points"<<endl;
    cout<<"\t\t\t\t99.More"<<endl;
    cout<<"\t\t\t\t0.Back"<<endl;

}
//MashUp for Self fuction
void MashUpSelf(){
    int option;
    int Opt;
    string number;

    cout<<"\tMashUp Offers"<<endl;
    cout<<"1.MashUp GHC 1"<<endl;
    cout<<"2.MashUp GhC 5"<<endl;
    cout<<"3.MashUp GHC 10"<<endl;
    cout<<"\t\t0.Back"<<endl;

    cout<<"Enter Option"<<endl;
    cin>>option;

    //One cedi MashUp Code
    if(option == 1){
        cout<<"\t\t\t\t 1.GHC 1"<<endl;
        cout<<"2.Enter amount GHC(0.07-4.99 ) "<<endl;
        cout<<"\t\t0.Back"<<endl;
       
        cout<<"Select one of the following above: "<<endl;
        cin>>Opt;

        if(Opt == 1){
            cout<<"Congrats! you have purchased a MashUp of Ghc 1.0 to be used for all networks."<<endl;
        }else if(Opt == 2 ){
            cout<<"Enter amout You want to Purchase: "<<endl;
            cin>>number;
            cout<<"Congrats! you have purchased a MashUp Of " << number <<"to used for all networks."<<endl;
        }else if(Opt == 0 ){
               DisplayMenu();
        }
        else{
            cout<<"Invalid Input.Try again other time."<<endl;
        }
   
    }
    //MashUp for 5 cedis
    else if(option == 2){
        int num;
        int ussd;
        cout<<"Select Payment Option: "<<endl;
        cout<<"\t\t\t1.Airtime."<<endl;
        cout<<"\t\t\t2.Mobile Money."<<endl;
        cout<<"Option: "<<endl; 
        cin>>num;
          
        if(num == 1){
            cout<<"Congrats! you have purchased a MashUp of Ghc 5.0 to be used for all networks."<<endl;
        }else if(num == 2){
          cout<<"Enter Your Momo Code: "<<endl;
          cin>>ussd;
          cout<<"Congrats! you have successfully purchased a MashUp of Ghc 5.0 to be used for all networks."<<endl;
        }

    }//MashUp for 10 cedis
    else if(option == 3){
         int num;
        int ussd;
        cout<<"Select Payment Option: "<<endl;
        cout<<"\t\t\t1.Airtime."<<endl;
        cout<<"\t\t\t2.Mobile Money."<<endl;
        cout<<"Option: "<<endl; 
        cin>>num;
          
        if(num == 1){
            cout<<"Congrats! you have purchased a MashUp of Ghc 10.0 to be used for all networks."<<endl;
        }else if(num == 2){
          cout<<"Enter Your Momo Code: "<<endl;
          cin>>ussd;
          cout<<"Congrats! you have successfully purchased a MashUp of Ghc 10.0 to be used for all network."<<endl;
    }else if(option == 0){
        DisplayMenu();
    }
    else{
        cout<<"Invalid Input."<<endl;
    }

    }

}

void MashUpOthers(){
    int number;
    int option;
    int Opt;
    cout<<"Enter Number"<<endl;
    cin>>number;
    cout<<"\tMashUp Offers"<<endl;
    cout<<"1.MashUp GHC 1"<<endl;
    cout<<"2.MashUp GhC 5"<<endl;
    cout<<"3.MashUp GHC 10"<<endl;
    cout<<"\t\t0.Back"<<endl;

    cout<<"Enter Option"<<endl;
    cin>>option;

    //One cedi MashUp Code
    if(option == 1){
        cout<<"\t\t\t\t 1.GHC 1"<<endl;
        cout<<"2.Enter amount GHC(0.07-4.99 ) "<<endl;
        cout<<"\t\t0.Back"<<endl;
       
        cout<<"Select one of the following above: "<<endl;
        cin>>Opt;

        if(Opt == 1){
            cout<<"Congrats! you have purchased a MashUp of Ghc 1.0 to be used for all networks."<<endl;
        }else if(Opt == 2){
            cout<<"Enter amout You want to Purchase: "<<endl;
            cin>>Opt;
            cout<<"Congrats! you have purchased a MashUp Of " << Opt << "for" <<number<< "to be used for all networks."<<endl;

        }else if(Opt == 0 ){
               DisplayMenu();
        }
        else{
            cout<<"Invalid Input.Try again other time."<<endl;
        }
    }
    
}

//Covert minutes to data
void MinutesConvert(){
       int mintues;
       int tion;
       cout<<"Enter the number of minutes to convert: "<<endl;
       cin>>mintues;

       cout<<"Y`ello" << mintues << "min(s)  gives" <<mintues * 2<<"MB this bundle does not expire."<<endl;
       cout<<"\t\t\t\t\t\t\t1.Confirm"<<endl;
       cout<<"\t\t\t\t\t\t\t2.Cancel"<<endl;
       cout<<"Enter Option: "<<endl;
       cin>>tion;

       if(tion == 1){
        cout<<"Congratulations! Conversion successful.You have successfully converted "<<mintues<<"MTN MIN to" <<mintues*2<<"MB"<<endl;
       }
       else{
        cout<<"Invalid Try another time."<<endl;
       }
}

//loyalty Pluse code
void PluseLoyalty(){

}




int main(){

    string code;
    int choice;

    cout<<"Enter Code:"<<endl;
    cin>>code;

    if(code == "*567#"){
       
        do{
            DisplayMenu();
            cin >> choice;

            switch(choice){
           
                case 1:
                    MashUpSelf();
                    break;
            
                case 2:
                    MashUpOthers();
                    break; 
               
                case 3:
                    MinutesConvert();
                    break;   

            }
        
        }while(choice != 0);

    }

    return 0;
}