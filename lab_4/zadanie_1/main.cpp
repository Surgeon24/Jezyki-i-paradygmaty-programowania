#include <iostream>
using namespace std;

struct samochod {
    string marka;
    string model;
    int rok;
    string kolor;
};

void print_tab(samochod arr[5], int number_of_car){
    cout << "---------------------------------------------------" << endl;
    for (int i = 0; i < number_of_car; i++){
        cout << arr[i].marka << "\t\t" << arr[i].model << "\t\t" << arr[i].rok << "\t" << arr[i].kolor << endl;
    }
    cout << "---------------------------------------------------" << endl;
}

int find_same (samochod arr[5], int number_of_car){
    int counter = 1;
    int answer = 0;
    string marka;
    for (int i = 0; i < number_of_car; i++){
        marka = arr[i].marka;
        for (int j = i+1; j < number_of_car; j++){
            if (marka == arr[j].marka)
                counter++;
            if (counter > 1){
                cout << marka << " = " << counter << endl;
                counter = 1;
                answer ++;
            }
        }
    }
    return answer;
}

int find_oldest (samochod arr[5], int number_of_car){
    int year = 9999;
    int answer = 0;
    for (int i = 0; i < number_of_car; ++i) {
        if(arr[i].rok < year)
            year = arr[i].rok;
            answer = i;
    }
    return  answer;
}


int main() {
    int x;
    cout << "Struktury.\nPodaj numer zadania: ";
    cin >> x;
    if (x == 1){}
        samochod arr[5];
    int number_of_car = 4;
        arr[0].marka = "Hundai";
        arr[0].model = "i30";
        arr[0].rok = 2013;
        arr[0].kolor = "czerwony";
        arr[1].marka = "Hundai";
        arr[1].model = "i30";
        arr[1].rok = 2010;
        arr[1].kolor = "bialy";
        arr[2].marka = "Nissan";
        arr[2].model = "Qashqai";
        arr[2].rok = 2011;
        arr[2].kolor = "bialy";
        arr[3].marka = "Nissan";
        arr[3].model = "Pusan";
        arr[3].rok = 2008;
        arr[3].kolor = "zielony";
        print_tab(arr, number_of_car);
    if (x == 2){
        cout << "wprowadz marke, model, rok i kolor samochodu: ";
        cin >> arr[4].marka >> arr[4].model >> arr[4].rok >> arr[4].kolor;
        number_of_car ++;
        print_tab(arr, number_of_car);
    }
    if (x == 3){
        cout << find_same(arr, number_of_car)<< " - liczba jednakowych modeli" ;
    }
    if (x == 4){
        cout << "najstarszy samochod jest pod indeksem " << find_oldest(arr,number_of_car);
    }
    return 0;
}
