#include <iostream>
#include <fstream> 
#include <sstream>

int main(){
    /*
    std::freopen("read.txt", "rt", stdin);
    std::freopen("write.txt", "wt", stdout);

    int x {}; 
    int y {};
    std::cin >> x >> y;
    std::cout << y << " " << x;
    */
    // create input file object
    std::ifstream ifile {};
    std::ofstream ofile {};

    // associate file objects with files
    ofile.open("write.txt");
    // check if properly opened
    if(ofile.fail()){
        std::cout << "Could not open file" << std::endl;
        return 0;
    }

    // add some input to file
    ofile << "Line 1: Here is some input";
    ofile << "\nLine 2: Here is more input on a new line";
    ofile << "\nLine 3";
    ofile << "\nLine 4";

    // close it
    ofile.close();


    ifile.open("write.txt");
    if(ifile.fail()){
        std::cout << " Could not open file";
        return 0;
    }
    std::string line1 {};
    std::string line2 {};

    ifile >> line1 >> line2;

    std::cout << "Line 1: " << line1 << std::endl;
    ifile.close();


    // read the whole file
    std::fstream file;
    file.open("write.txt");
    std::string line;

    while(getline(file, line)){
        std::cout << line << std::endl;
    }



    std::string name {"Ali"};
    int age {10}; 

    std::stringstream ss; 
    ss << name;
    ss << " is ";
    ss << age;
    ss << " years old.";

    //Now “ss” object has grouped these different bits of data types together
    //We can convert it to string
    // ss.str(); 
    //And print it
    std::cout << ss.str() << std::endl;

    std::stringstream bs;
    bs.str("Mohamed 9 years old");
    bs >> name >> age;
    

    std::cout << name << " " << age << std::endl;
    
    return 0;
}