#include <iostream>
#include <string>
#include<stdio.h>
#include <vector>
#include <cmath>
using namespace std;

class Calculator{
public:

    Calculator(){
        string name;
        cout << "Hi there,  What is your name please? " ;
        cin >> name;
        cout << "Welcome to my calculator " << name << "\n";
    }

    int add(int x, int y){
        return x + y;
    }
    int subtract(int x, int y){
        return x - y;
    }
    int mutiply(int x, int y){
        return x * y;
    }
    float divide(float x, float y){
        return x / y;
    }
    int square(int x){
        return pow(x, 2);
    }

    float squareroot(float x){
        float thisIndex = 0.5;
        return pow(x, thisIndex);
    }

};

class Person{
public:
    string name  ;
    string school;
    string course ;
    string bestDish ;
    int age ;
    int energy;

    Person(string thisname = "Jibola", string thisschool = "FUNAAB", string thiscourse = "Mechatronics", string thedish = "Rice and stew", int thisage = 17,int thisenergy = 100){
        name  = thisname;
        school = thisschool;
        course = thiscourse;
        bestDish = thedish;
        age = thisage;
        energy = thisenergy;

        cout << "The constructor has been called. \n \n" << endl;
    }

    int eat(){
        energy += 20;
        return energy;
    }

    int run(){
        energy -= 20;
        return energy;
    }

    int dance(){
        energy -= 30;
        return energy;
    }

};


int main(){
    Calculator myCalc;
    cout << myCalc.add(334,4748) << endl;
    cout << myCalc.subtract(356,200) << endl;
    cout << myCalc.divide(250,186) << endl;
    cout << myCalc.mutiply(530,230) << endl;
    cout << myCalc.square(56) << endl;
    cout << myCalc.squareroot(400) << endl;
    return 0;
}
//    Person jibs("Michael", "University Of Ibadan", "Mechanical engineering", "Dodo", 47, 100);
//    cout << "I am " << jibs.age << " years old." << endl;
//    cout << "I attend " << jibs.school << endl;
//    cout << "I study " << jibs.course << endl;
//    cout << "I love eating " << jibs.bestDish << endl;
//    cout << "My name is " << jibs.name << endl;
//    int forNow = jibs.eat();
//    int forNew = jibs.run();
//    int forNaw = jibs.dance();
//
//    cout << "After eating: " << jibs.eat() << "\nAfter running: " << jibs.run() << "\nAfter dancing: " << jibs.dance() << endl;




//   int *p = &arr[1];
//    cout << *p;

//    cout << "He is" << arr[i] << "years old"  << "\n";



//    string name;
//    cin >> name;
//
//    cout << "Your name is: " << name << endl;

//    cout << "Hello World" << endl;
//    int64_t numberOfSchools = 40000 * 67;
//    cout << numberOfSchools << endl;

//    int32_t  numberofSchools = 7684 / 4;
//      cout << numberofSchools << endl;

//    uint16_t days = 23 * 100;
//    cout << days << endl ;
//        float grey = 0.333333f;
//        cout << grey ;

//    bool istrue = true;
//    cout << istrue;

//        cout << "What is your name?" << endl;
//        string hisName;
//        cin >> hisName;
//        cout << "Your name is :" << hisName << endl;


//        cout << "Your name is?" << endl;
//        string myName;
//        cin >> myName;
//        cout << "My name is " <<myName << endl;

//        cout << "Your age is?"  << endl;
//        int16_t myAge;
//        cin >> myAge;
//        cout << "My age is " <<myAge <<" years old "<< endl;

//        cout << "Your gender is male?" << endl;
//        string isMale;
//        cin >> isMale;
//        if (isMale == "yes"){
//            cout << "You are Male";
//        }
//        else{
//            cout << "You are female";
//        }

        // Creating our own special type of class
//enum Color{
//            Red,
//            Blue,
//            Green
//        };
//
//enum State {Working = 1 , Not_Working , Freeze};
//enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
//enum ShoppingCart {Biro = 20, eraser = 40, basket = 50, razor_blade = 100, peanuts = 20};
//enum State underState = Working;
//enum State FindWorkingState() {return underState;}
//enum Months {January = 0, February = 1, March, April, May, June, July = 6, August, September, October, November, December
//        int i = Red;
//        cout << i << "\n";
//
//        int a = Green;
//        cout << a << "\n";
//
//        printf("%d, %d, %d \n", Working, Not_Working, Freeze);
//          printf("%d, %d, %d, %d, \n", Tuesday, Wednesday, Thursday, Friday);
//
//          enum Day nowDay = Wednesday;
//          printf("The day of the week that its happening is %d  \n", nowDay);
//
//                enum ShoppingCart CurrentStationary = Biro;
//                printf("The Biro cost %d naira \n", CurrentStationary);
//                enum ShoppingCart Mike = eraser;
//                printf("I bought the eraser %d dollars \n", Mike);
//                enum Months Birthdays = June, July, August;
//                printf("His appointment is on d 13th of %d, or probably 20th of %d \n", Birthdays);
//                enum Months Game = May;
//                printf("We are going out to play football in the month of %d but no specific date yet for the football match, if it is out I would let you know,Okay?.So chill don't be scared you are going there with us but wear a nice out fit that day.Less I forget tell Ajibola to behave well that day because he do behave stupid   \n", Game);

//        (FindWorkingState() == Working)? printf("It works"): printf("It is not working as we thought it would");
//    cout << arr[1] << " is " << ages[1] << " years old";

//    for (int i = 0; i < 3; i++){
//        cout << arr[i] << " is " << ages[i] << " years old" << "\n";
//    }
//string arr[15] = {"James", "John", "Micheal"};
//    int ages[15]  = { 23, 45, 66 };
//    string school[15] = {"University Of Ibadan", "University of Lagos", "University of Ilorin"};
//    for (int i=0; i<3; i++){
//        cout << arr[i] << " is " << ages[i] << " years old " << " and attends " << school[i] << "\n";
//    int shift  = 11;
//    int *jiers = &shift;
//    printf("This is the pointer to shift %p", jiers);
//    printf("This is the value of the integer %d", *jiers );

//      int famous = 16;
//      int *wayne = &famous;
//      printf("The pointer to famous is %p \n", wayne);
//      printf("The value of the integer is %d", *wayne);

//        int moon = 23;
//        int *minaj = &moon;
//        printf("The pointer to moon is %p \n", minaj);
//        printf("The value of the integer is %d", *minaj);
//    int minna  = 1200;
//    int *number;
//    number  = &minna;
//    printf("This is a pointer %p", number);
//    string thiString  = "Players";
//    string *play = &thiString;
//    printf("This is the pointer to the string %p \n", play);
////    cout << "This is the value of the string " << *play;

//    int ages[10] = {11, 12, 13};
//    int *point = ages;
//    printf("This is the first part of the array  %d", *ages);
//    int arr[20] = {20, 30, 40, 50, 60};
//        for (int i=4; i>=0; i--){
//           printf("This is the value to %d", arr[i]);
//           cout << "\n";
//           printf("This is the pointer to %p ", &arr[i]);
//           cout << "\n";
//    }

//    int arr[15] = {12, 13, 14};
//    for(int i=0; i<3; i++){
//        printf("This is the value to %d", arr[i]);
//        cout << "\n";
//        printf("This is the pointer to %p ", &arr[i]);
//        cout << "\n";
// vector<int>jibs;
//
//   for(int i=0; i<=20; i++){
//        jibs.push_back(i);
//   }
//
//    cout << "Size : " << jibs.size();
//    cout << "\nCapacity : " << jibs.capacity();
//    cout << "\nMax_Size : " << jibs.max_size();

//      int i = 5;
//      while (i > -10){
//
//          cout << "Hello world" <<  "\n";
//          i++;

//    int i = 15;
//    do{
//       cout << "Hello World \n";
//       i--;
//    }while (i > 12);
//int i = 5;
//    do{
//        cout << i << "\n";
//        i++;
//    }while (i <= 10);

//int show(int x, int y){
//
//    return x + y;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = show(a, b);
//    cout << c;

//int mayne(int x, int y){
//
//     return x - y;
//}
//int main()
//{
//    int a = 10000;
//    int b = 1000;
//    int c = mayne(a, b);
//    cout << c;
//}
//int famous(int a, int b){
//
//    return a * b;
//}
//      int w = 53;
//      int x = 22;
//      int z = famous(w, x);
//      cout << z;
        //      int w = 53;
//      int x = 22;
//      int z = famous(w, x);
//      cout << z;

//int max(int w, int z){
//    if (w > z){
//        return w;
//    }else{
//        return z;
//    }
//
//
//     ;
//}
//int main()
//{
//   int a = 230;
//    int c = 2000;
//    int e = max(a, c);
//    cout << e;


//int min(int q, int r){
//    if(q < r){
//    return q;
//    }else{
//    return r;
//    }
//}
//int main()
//    {
//        int y = 50;
//        int z = 17;
//        int a = min(y, z);
//        cout << a;
//    }
//void introduction(string name, int age, string school){
//    cout << "His name is " << name << "\n";
//    cout << "He is " << age << " years old \n";
//    cout << "He attends " << school << "\n \n";
////}
//string thisName = "Jibola";
//    string thisSchool = "FUNAAB";
//    int thisAge  = 18;
//    introduction(thisName,thisAge, thisSchool);
//    introduction("Michael", 21, "University Of Ibadan");
//string conclusion(string surname, int numberOfPeople, int motherage){
//    cout << "His father name is" << surname << "\n";
//    cout << "They are " << numberOfPeople << " in their family \n";
//    cout << "His mother is " << motherage << " years old \n";
//}
//string thisSurname = " Innocent";
//  int thisNumber = 10;
//  int thisAge = 75;
//  conclusion(thisSurname, thisNumber, thisAge);
