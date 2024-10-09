#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
#include <memory> 

class USBConnection {
private:
    int ID;
    static std::stack<int> ids; 
    
    USBConnection(int id) : ID(id) {}

public:
    
    ~USBConnection() {
        ids.push(ID); 
    }

    
    static std::unique_ptr<USBConnection> createConnection() {
        if (!ids.empty()) {
            int newID = ids.top();
            ids.pop();
            return std::make_unique<USBConnection>(newID); 
        } else {
            return nullptr; 
        }
    }

    
    int getID() const {
        return ID;
    }
};


std::stack<int> USBConnection::ids({3, 2, 1});

#endif 
