#include "Invoker.hpp"
#include "Receiver.hpp"
#include "ConcreteCommandA.hpp"
#include "ConcreteCommandB.hpp"
#include "ICommand.hpp"

#include <iostream>
#include <memory>

/* #################################### Command - Behavioural ####################################
* Notes:   The Command pattern encapsulates a request as an object, allowing you to parameterize
*          clients with queues, requests, and operations. These operations can be stored and passed
*          around as first-class objects. The pattern also allows for the support of undoable operations.
*/

int main(){

    std::shared_ptr<Receiver> sp_receiver = std::make_shared<Receiver>();

    // Create then move the unique pointer to the Invoker
    std::unique_ptr<ICommand> up_commandA = std::make_unique<ConcreteCommandA>(sp_receiver);
    Invoker invoker(std::move(up_commandA));

    // Create the Invoker and pass the unique pointer to the Invoker
    Invoker invok(std::make_unique<ConcreteCommandB>(sp_receiver));

    invoker.executeCommand();
    invok.executeCommand();

    return 0;
}