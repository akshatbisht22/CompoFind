#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int compo(){
    int user_number_check_compo;
    int compo_func_loop_counter = 1;
    int total_facs = 0;
    string result;

    cout << "Welcome to Composite Number Checker." << endl<<endl;    
    cout << "Enter the Number : ";
    cin >> user_number_check_compo;
    cout << endl<<endl;
    while (compo_func_loop_counter<=user_number_check_compo){
        if(user_number_check_compo % compo_func_loop_counter == 0){
            total_facs++;
        }
        compo_func_loop_counter++;
    }   
    if (total_facs > 2){
        result = "The given number is composite";
        cout << result << endl;
        return 0;
    }else{
        result = "The number is not composite";
        cout << result << endl;
        return 0;
    }
}



int fac_find(){
    int user_number_find_facts;
    int fact_find_loop_counter = 1;
    string result;

    cout << "Welcome to Factor Finder." << endl<<endl;    
    cout << "Enter the Number : ";
    cin >> user_number_find_facts;
    cout << endl<<endl;
    cout << "The factors of "<< user_number_find_facts << " are : "<<endl<<endl;
    while (fact_find_loop_counter<=user_number_find_facts){
        if(user_number_find_facts%fact_find_loop_counter == 0){
            cout << fact_find_loop_counter<<endl;
        }
        fact_find_loop_counter++;
    }
    
}




int main(){
    int init_choice;
    cout << "Welcome to CompoFind. Select your operation." << endl<<endl;
    cout << "Composite number checker. (ENTER 1)" << endl;
    cout << "Factors Finder. (ENTER 2)"<<endl<<endl;
    cout << "Your choice : ";
    cin >> init_choice;
    cout << endl<<endl;
    if (init_choice == 1){
        compo();
    }else if(init_choice == 2){
        fac_find();
    }else{
        cout << "Invalid Input. Exiting......";
        exit(0);
    }
}