#include "../include/notes.h"
#include "../include/list.h"

int main(){
    bool q;
    int user;
    list l;
    TextNote tmp;
    while (q != 1){
        cout << "My notes:\n";
        cout << "1 - add note"
                "2 - write list of notes"
                "3 - write existing note"
                "4 - exit";
        cin >> user;
        if (user == 1){
            tmp.setTitle();
            tmp.setContent();
            l.push_back(tmp);
        }
        else if (user == 2){
            l.printList();
        }
        else if (user == 3){
            cout << "print number of note:";
            cin >> user;
            l.printNote(user).getTitle();
            l.printNote(user).getContent();
        }
        else if (user == 4){
            q = true;
        }
    }
    return 0;
}
