#include "../include/notes.h"
#include "../include/list.h"

int main(){
    bool q;
    int user;
    int counter = 0;
    list l;
    TextNote tmp;
    while (q != 1){
        cout << "My notes:\n";
        cout << "1 - add note\n"
                "2 - write list of notes\n"
                "3 - write existing note\n"
                "4 - exit\n";
        cin >> user;
        if (user == 1){
            tmp.setTitle();
            tmp.setContent();
            l.push_back(tmp);
            counter ++;
        }
        else if (user == 2){
            l.printList();
        }
        else if (user == 3){
            cout << "print number of note (counting from 1):";
            cin >> user;
            if (user <= counter && user > 0) {
                l.printNote(user).getTitle();
                l.printNote(user).getContent();
            }
            else
                cout << "you print incorrect number";
        }
        else if (user == 4){
            q = true;
        }
    }
    return 0;
}
