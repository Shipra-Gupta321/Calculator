#include <iostream>
using namespace std;
int main () {
    int flag=1;
    char choice;
    while(flag) {

    cout<<"1). Addition of two numbers"<<endl;
    cout<<"2). Subtraction of two numbers"<<endl;
    cout<<"3). Multiplication of two numbers"<<endl;
    cout<<"4). Division of two numbers"<<endl;
    cout<<"5). Mod of two numbers"<<endl;
    cout<<"6). Matrix Addition"<<endl;
    cout<<"7). Matrix Multiplication"<<endl;
    cout<<"8). Sum of digits of a numbers"<<endl;
    cout<<"9). Multiplication of digits of a numbers"<<endl;
    cout<<"10). Percentage calculator of 1st semester"<<endl;
    
    cout<<"Enter the operation "<<endl;

int input;
cin>>input;

switch(input) {
case 1: 
    cout<<"Addition of two numbers"<<endl;
    int a,b;
    cout<<"Enter the value of 1st number "<<endl;
    cin>>a;
    cout<<"Enter the value of 2nd number "<<endl;
    cin>>b;
    cout<<"Addition of two numbers is: "<<a+b<<endl;
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }
    break;

case 2: 
    cout<<"Subtraction of two numbers"<<endl;
    int c,d;
    cout<<"Enter the value of 1st number"<<endl;
    cin>>c;
    cout<<"Enter the value of 2nd number"<<endl;
    cin>>d;
    cout<<"Subtraction of two numbers is: "<<c-d<<endl;
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }
    break;

case 3: 
    cout<<"Multiplication of two numbers"<<endl;
    int e,f;
    cout<<"Enter the value of 1st number"<<endl;
    cin>>e;
    cout<<"Enter the value of 2nd number"<<endl;
    cin>>f;
    cout<<"Multiplication of two numbers is: "<<e*f<<endl;
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }
    break;

case 4: 
    cout<<"Division of two numbers"<<endl;
    int g,h;
    cout<<"Enter value of 1st number"<<endl;
    cin>>g;
    cout<<"Enter value of 2nd number"<<endl;
    cin>>h;
    cout<<"Division of two numbers is: "<<g/h<<endl;
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }
    break;

case 5: 
    cout<<" mod of two numbers "<<endl;
    int i,j;
    cout<<"Enter the value of 1st number"<<endl;
    cin>>i;
    cout<<"Enter the value of 2nd number"<<endl;
    cin>>j;
    cout<<"Value of Mod is: "<<i%j<<endl;
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }
    break;

case 6: {
    cout<<"Addition of two matrix"<<endl;    
// matrix 1

    int A;
    cout<<"Enter the number of rows for 1st matrix"<<endl;
    cin>>A;

    int B;
    cout<<"Enter the number of columns for 1st matrix"<<endl;
    cin>>B;

    cout<<"Enter elements for 1st matrix"<<endl;

    int arr1[A][B];
    for(int i = 0; i<A; i++) {
            for(int j = 0; j<B; j++) {
    cin >> arr1[i][j];
    }
    }
    cout<<"1st Matrix is"<<endl;

    for(int i = 0; i<A; i++) {
        for(int j = 0; j<B; j++) {
            cout << arr1[i][j] <<" ";
        }
    cout<<endl;
    }


// matrix 2

    int C;
    cout<<"Enter the number of rows for 2nd matrix"<<endl;
    cin>>C;

    int D;
    cout<<"Enter the number of columns for 2nd matrix"<<endl;
    cin>>D;

    cout<<"Enter the elements for 2nd matrix"<<endl;

    int arr2[C][D];
    for(int i = 0; i<C; i++) {
        for(int j = 0; j<D; j++) {
            cin >> arr2[i][j];
        }
    }
    cout<<"2nd Matrix is"<<endl;


    for(int i = 0; i<C; i++) {
        for(int j = 0; j<D; j++) {
        cout << arr2[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<"Addition of the two matrix is"<<endl;

    
    

    if (A==C && B==D) {
    int result[A][B];
    

    for(int i=0; i<A; i++) {
        for (int j = 0; j<B; j++) {
        
            result[i][j] = arr1[i][j] + arr2[i][j];
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }   
    }

    else {
        cout<<"Matrix Addition is not possible"<<endl;
    }  

    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }
    break;
}



case 7: {
    cout<<"Multiplication of two matrix"<<endl;
    
    //matrix 1
    int E;
    cout<<"Enter the number of rows for 1st matrix"<<endl;
    cin>>E;

    int F;
    cout<<"Enter the number of columns for 1st matrix"<<endl;
    cin>>F;

    cout<<"Enter the elements of 1st matrix"<<endl;

    
    int arr3[E][F];

    for(int i = 0; i<E; i++) {
        for(int j = 0; j<F; j++) {
            cin >> arr3[i][j];
        }
    }

    cout<<"1st Matrix is"<<endl;
    for(int i = 0; i<E; i++) {
        for(int j = 0; j<F; j++) {
            cout << arr3[i][j] <<" ";
        }
        cout<<endl;
    }


// matrix 2
    int G;
    cout<<"Enter the number of rows for 2nd matrix"<<endl;
    cin>>G;

    int H;
    cout<<"Enter the number of columns for 2nd matrix"<<endl;
    cin>>H;

    cout<<"Enter the elements of 2nd matrix"<<endl;

    

    int arr4[G][H];

    for(int i = 0; i<G; i++) {
        for(int j = 0; j<H; j++) {
            cin >> arr4[i][j];
        }
    }

    cout<<"2nd Matrix is"<<endl;
    for(int i = 0; i<G; i++) {
        for(int j = 0; j<H; j++) {
            cout << arr4[i][j] <<" ";
        }
        cout<<endl;
    }


    cout<<" Matrix Multiplication is:"<<endl;
    if(F==G) {
    
    for(int i=0; i<E; i++) {
        for(int j=0; j<H; j++) {
            int ans =0;
            for(int k=0; k<F; k++) {
                ans = ans + arr3[i][k]*arr4[k][j];
            }
            
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    }
    
    else { 
        cout<<"Matrix Multiplication is not possible"<<endl;
    }
     
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }

    break;
}

case 8 : {
    cout<<"Sum of digits of a number"<<endl;
    int X;
    cout<<"Enter a number "<<endl;
    cin>>X;
    int sum = 0;
    while (X!=0)  {
        int digit = X%10;
        sum = sum + digit;
        X = X/10;
    }
    cout<<"Sum of digit is "<<sum<<endl; 
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }

    break;
}
case 9 : {
    cout<<"Multiplication of a digits of a number"<<endl;
    int Y;
    cout<<"Enter a number "<<endl;
    cin>>Y;
    int multi = 1;
    while (Y!=0)  {
        int digit = Y%10;
        multi = multi*digit;
        Y = Y/10;
    }
    cout<<"multiplication of digit is "<<multi<<endl; 
    cout<<"Do you want to continue? (y/n)"<<endl;
    cin>>choice;
    if(choice=='n'){
        flag=0;
    }
    break;
}

case 10: {
    cout<<"operation to calculate 1st semester percentage"<<endl;
    cout<<"a). Physics Semester"<<endl;
    cout<<"b). Chemistry Semester"<<endl;
    cout<<"Enter the char of your sem"<<endl;

    char n;
    cin>>n;

    if(n=='a') {
        cout<<"Physics semester"<<endl;
        cout<<"Enter your marks"<<endl;
        int Maths;
        cout<<"Maths"<<endl;
        cin>>Maths;

        int Physics;
        cout<<"Physics"<<endl;
        cin>>Physics;

        int CSK;
        cout<<"CSK"<<endl;
        cin>>CSK;

        int BEE;
        cout<<"BEE"<<endl;
        cin>>BEE;

        int BME;
        cout<<"BME"<<endl;
        cin>>BME;

         float percentage1 = (((Maths+Physics+BME+BEE+CSK)/500.0)*100);
         cout<<"Your semester percentage is: " <<percentage1<<endl;

        
         cout<<"Do you want to continue? (y/n)"<<endl;
         cin>>choice;
         if(choice=='n'){
         flag=0;
    }
    }

    else if(n=='b') { 
        cout<<"chemistry semester"<<endl;

        int Math;
        cout<<"Maths"<<endl;
        cin>>Math;

        int Chemistry;
        cout<<"Chemistry"<<endl;
        cin>>Chemistry;

        int HV;
        cout<<"HV"<<endl;
        cin>>HV;

        int BCE;
        cout<<"BCE"<<endl;
        cin>>BCE;

        int PPS;
        cout<<"PPS"<<endl;
        cin>>PPS;

        float percentage2 = (((Math+Chemistry+BCE+HV+PPS)/500.0)*100);
         cout<<"Your semester percentage is : "<<percentage2<<endl; 
     
    
         cout<<"Do you want to continue? (y/n)"<<endl;
         cin>>choice;
         if(choice=='n'){
             flag=0;
         }
           
        }
break;    
} 
return 0;
}
}
}

