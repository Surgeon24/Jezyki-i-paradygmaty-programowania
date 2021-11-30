#ifndef LAB_8_02_NOTES_H
#define LAB_8_02_NOTES_H

#include "iostream"
using namespace std;

class Note {
private:
    string title;
public:
    Note(){}

    void getTitle() {
        cout << "Title : " << title << endl;
    }
    void setTitle() {
        cout << "Print your title:\n";
        cin.get();
        getline(cin, title);
    }
    void virtual getContent() = 0;
    void virtual setContent() = 0;
};


class TextNote : public Note {
private:
    string content;
public:
    void getContent() override {
        cout << content << endl;
    }
    void setContent() override {
        cout << "Print content:\n";
        getline(cin, content);
    }
};


#endif //LAB_8_02_NOTES_H
