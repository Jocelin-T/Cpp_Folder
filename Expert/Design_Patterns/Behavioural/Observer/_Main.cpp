#include "ASubject.hpp"
#include "IObserver.hpp"
#include "ConcreteObserverA.hpp"
#include "ConcreteObserverB.hpp"

#include <iostream>
#include <string>

/* #################################### Observer - Behavioural ####################################
* Notes:   The Observer pattern is a behavioural design pattern that defines a one-to-many dependency
*          between objects so that when one object changes state, all its dependents are notified and
*          updated automatically. The pattern is also known as Dependents or Publish-Subscribe.
*/

int main(){

    ASubject subject;

    ConcreteObserverA observerA_1("Observer A1");
    ConcreteObserverA observerA_2("Observer A2");
    ConcreteObserverA observerA_3("Observer A3");

    ConcreteObserverB observerB_1("Observer B1");
    ConcreteObserverB observerB_2("Observer B2");

    subject.addObserver(&observerA_1);
    subject.addObserver(&observerA_2);
    subject.addObserver(&observerA_3);
    subject.addObserver(&observerB_1);
    subject.addObserver(&observerB_2);

    subject.notifyObserver("Hello, World!");

    subject.removeObserver(&observerA_2);

    std::cout << "\n";
    subject.notifyObserver("Hello, World!");

    return 0;
}