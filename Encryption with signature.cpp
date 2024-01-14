using namespace std;
using ll = long long;
#include <bits/stdc++.h>
#include <iostream>

ll Pow_mod ( ll a , ll b, ll n ) {  
    ll power = 1 , i ;  
    for ( i = 1 ; i <= b ; i++) {  
        power = power * a ;
        power = power % n; 
    }  
    return power ;  
} 

/* The function above is used to raise the numeric value of the characters in the message to the power of b, which in the program will be the n not this n above. 

Why I used the mod after every power? That is because C++ is a limited langauge when it comes to deal with the large number. So this helps to lower the value of numbers, with taking into consideration that the value after raised to the power (mod n) = the value raised to power then taking mod and so on.... */

int main() {
   int reverse;
   ll p, q, n, f,coprime_numbers_with_n, e, d, encrypted_code_letter,signuature_code_letter; 
   string message, encrypted_message, signuature,encrypted_signuature; 
   vector<string>  ASCII_code,ASCII_code_signuature;
   vector<ll>  encrypted_messages_vec, encrypted_messages_signuature; 
   p = 47; 
   q = 59; 
   n= p*q; 

/* What does each variable mean? 
   1. reverse_sign is used in the signuature to store the numeric of each char in the signature to make it stored in signuature_message_vec. 
   2. reverse is used for the same purpose but with the message
   
   */

  coprime_numbers_with_n = (p-1) *  (q-1);
  
  
       for(ll i = 2; i <coprime_numbers_with_n; i++){
        if( (__gcd(i, coprime_numbers_with_n) == 1) && (__gcd(i,n) == 1 )){
            e =  i; 
            break;
        }
    }
    
      for(ll i = 2; i <coprime_numbers_with_n; i++){
        if( ((i*e) % coprime_numbers_with_n == 1) ){
            d = i;
            break;
        }
    }
    

  cout << "Please enter the message you want to encrypt\n"; 
   getline(cin, message); 
   
   signuature = message;
    
      for (int i = 0; i < message.length(); i++)
    {
        char c = message.at(i);
        f = int(c);
        ASCII_code.push_back(to_string(f));
    }
    
       
        for(int i = 0; i < ASCII_code.size();i++){
        encrypted_code_letter = Pow_mod(stoi(ASCII_code[i]), e, n);
        encrypted_message += to_string(encrypted_code_letter) + " "; 
    }
    
    
      for (int i = 0; i < signuature.length(); i++)
    {
        char c = signuature.at(i);
        f = int(c);
        ASCII_code_signuature.push_back(to_string(f));
    }
    
    for(int i = 0; i < ASCII_code_signuature.size();i++){
        signuature_code_letter = Pow_mod(stoi(ASCII_code_signuature[i]), d, n);
        encrypted_signuature += to_string(signuature_code_letter) + " "; 
    }
    
        
          cout << "Our Key is (" << n << "," << e << ")" << endl; 
          
          cout << "The signature is that: " << encrypted_signuature << endl; 
  
     
    
    cout << "This is our Encoded message:" << encrypted_message << endl;
}