#include <cstdlib>
#include <iostream>
#include <string.h>
#include "MyString.h"
using namespace std;

#define CHR static_cast<const char*>
//#define CIN static_cast<const int*>
int main(int argc, char** argv) {
    
    /*MyString mystr("ASDASDKD");
    std::cout << CHR(mystr) << std::endl;
    
    MyString mystr_dubl("ASDASD");
    //std::cout << *CIN(mystr_dubl) << std::endl;
    std::cout << mystr_dubl << std::endl;
    
    std::cout << std::boolalpha << (mystr == mystr_dubl) << std::endl;
    std::cout << std::boolalpha << (mystr != mystr_dubl) << std::endl;
    std::cout << std::boolalpha << (mystr > mystr_dubl) << std::endl;
    std::cout << std::boolalpha << (mystr < mystr_dubl) << std::endl;
    
    std::cout << std::boolalpha << (mystr >= mystr_dubl) << std::endl;
    std::cout << std::boolalpha << (mystr <= mystr_dubl) << std::endl;
    
    std::cout << mystr.index('K') << std::endl;
    mystr += MyString("ads!");
    std::cout <<  mystr << std::endl;
    MyString s ("123");
//    std::cout << (s + mystr) <<std::endl;
    MyString s1 ("A1A23A");
    
    std::cout << "::strspn(s, s1): " << ::strspn(s, s1) << std::endl;
    
    //MyString testStr ("abc");
   // std::cout << (testStr -= MyString("bc")) << std::endl;
   // std::cout << (s1 -= MyString("a3A")) << std::endl;
    
    MyString newstr("abcd12vg12c");*/
    
    //std::cout << "******************************* newstr - aba: " << (newstr -= MyString("12")) << std::endl;
    //std::cout << newstr << std::endl;
    
   /* MyString str1 = "123";
    MyString str2 = "456";
    
    str1.insert(200 ,str2 , 300);
    
    cout << str1 << endl;

    MyString str3 = "123456";
    str3.push_back("789");
    
    str3.push_front("ABC");
    
    cout << str3 << endl;
    
    cout << (str3.remove(0,9)) << endl;
    
    MyString str4 = "-123456789+";
    
    str4.pop_back();
    
    cout << str4 << endl;
    
    str4.pop_front();
    
    cout << "sss1:" << str3 << " " << str4 << endl;
    
    MyString sss((str3,str4));
    
    cout << "sss2: " << sss << endl;*/
    
    //MyString str = "-12345637839+";
    
    /*MyString str = "-14333+";
    cout << "str: " << str << endl;
    cout << "newstr.replace(): " << str.replace("433", "***", 1) << endl;*/
    
    MyString str4 = MyString("-123456789+");
    
    cout << "str4: " << str4 << endl;
   // cout << "str4[1] " << str4[1] << endl;
    cout << "str4[2] " << str4[2] << endl;
    //return 0;
//    cout << "str4[3] " << str4[3] << endl;
  //  cout << "str4[29] ";
    //cout << str4[29] << endl << endl;
    char c = str4[16];
    //char c = str4[2];
    std::string s(c,1);
    s.replace(s.begin(), s.end(), &c);
    cout << "string = " << c << " " << ((int)c) << std::endl ;
    
    return 0;
    
//    newstr = mystr;
//    
//    std::cout << CHR(newstr) << std::endl;
//    
//    std::cout << (mystr_dubl == mystr) << std::endl;
//    
//    std::cout << (mystr_dubl == mystr) << std::endl;
    
    return 0;
}

