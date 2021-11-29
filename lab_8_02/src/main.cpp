#include "../include/car.h"
#include "../include/human.h"

int main(){
    human dude("Mike", 1);
    human kid("Alex", 0);
    passengerCar Opel;
    sportCar Porshe;
    dude.sitInCar(Porshe);
    kid.sitInCar(Opel);
    kid.drive(Opel);
    dude.drive(Porshe);
    return 0;
}
