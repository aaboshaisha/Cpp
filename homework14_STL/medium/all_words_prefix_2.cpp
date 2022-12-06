#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <set>


std::map< std::string, std::queue<std::string> > names {};

void create_substrings(std::string name){
    std::string substring {};
    
    for(int i{}; i < name.size(); i++){
        substring += name[i];
        names[substring].push(name);
    }
}


void print_queue(std::queue<std::string> q){
    std::set< std::string> printed {};
    std::queue<std::string> copy {q};
    
    while(!copy.empty()){
        // if u found name in the set, it has been printed before
        // so get rid of it
        if(printed.count(copy.front())){
            copy.pop();
        }
        else{
            // add it to the set
            printed.insert(copy.front());
            // print it
            std::cout << copy.front() << " ";
            // then remove it
            copy.pop();
        }
        
    }
    std::cout << std::endl;

}





int main(){

    create_substrings("mostafa");
    create_substrings("mostafa");
    create_substrings("mostafa");
    create_substrings("mostafa");
    create_substrings("morad");
    create_substrings("nawal");
    create_substrings("marwa");
    create_substrings("mohamed");
    create_substrings("michael");
    
    /*
    for(auto x:names){
        std::cout << x.first << " ";
    }
    std::cout << std::endl;
    */


    print_queue(names["m"]);
    print_queue(names["mo"]);
    print_queue(names["mos"]);
    print_queue(names["naw"]);



    return 0;
}