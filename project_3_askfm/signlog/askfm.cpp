#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "signup.cpp"


std::string encode_id(int qid, int from, int to, int pid){
    std::stringstream ss {};
    ss << "(";
    ss << qid;
    ss << ",";
    ss << from;
    ss << ",";
    ss << to;
    ss << ",";
    ss << pid;
    ss << ")";

    std::string id {};
    id = ss.str();

    return id;
}


void ask(int from){
    int to {};
    std::cout << "Enter user id or -1 to cancel";
    std::cin >> to;

    if(to == -1){
        return;
    }

    std::cout << "For thread question, enter question id ";
    std::cout << "or enter -1 for a new question: ";
    int thread {};
    std::cin >> thread;

    std::string question {};
    std::cout << "Enter question text: ";
    getline(std::cin, question);
    
    int qid {generate_id("qid.txt")};
    encode_id(qid,from,to,thread);

}


int main(){
    std::cout << encode_id(111,2,13,-1) << std::endl;
    return 0;
}