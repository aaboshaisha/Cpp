#include <iostream>
#include <vector>
#include <string>


// function to compare vectors , see if one is prefix of other
bool is_prefix(std::vector<std::string> prefix, std::vector<std::string> fullname){
    if(prefix.size() > fullname.size()){
        return false;
    }
    
    for(int i {}; i < prefix.size(); i++){
        if(prefix.at(i) != fullname.at(i)){
            return false;
        }
    }
    return true;
}

void print_vector(std::vector<std::string> vs){
    for(auto s:vs){
        std::cout << s << " ";
    }
    std::cout << std::endl;
}

int main(){

    /* test code
    std::vector<std::string> prefix {"mostafa"};
    std::vector<std::string> fullname {"mostafa", "saad", "ibrahim"};

    std::cout << is_prefix(prefix, fullname) << std::endl;
    */

   // create a 2D vector of strings for the queries
   std::vector<std::vector<std::string>> Table {};

   int N {};
   int k {};

   std::cout << "How many full names will you enter? ";
   std::cin >> N;

   for(int i {}; i < N; i++){
    
    std::cout << "Enter number of names followed by fullname: ";
    std::cin >> k;
    
    
    std::vector<std::string> row {};
    std::string name;

    for(int j{}; j < k; j++){
        std::cin >> name;
        row.push_back(name);
    }
    Table.push_back(row);
    
   }

   // for printing the table
   for(int i {}; i < N; i++){
    for(auto x:Table.at(i)){
        std::cout << x << " ";
    }
    std::cout << std::endl;
   }

   // Now for the queries
   std::cout << "Enter the number of queries then num names in query ";
   std::cout << "followed by the actual names: ";

   int num_queries {};
   std::cin >> num_queries;

   std::string qname;
   int num_names;

    //store queries in vectors
    for(int i {}; i < num_queries; i++){
        std::cin >> num_names;
        std::vector<std::string> prefix {};
        for(int j {}; j < num_names; j++){
            std::cin >> qname;
            prefix.push_back(qname);
        }

        // 
        for(auto row:Table){
            if(is_prefix(prefix, row)){
                print_vector(row);
        }
        }
    }


    return 0;
}