#include <iostream>
#include <map>
#include <string>

int main(){
    // std::map is an associative array (associating pairs of data)
    // its parameters are key, value types
    // so a map contains pair objects

    // the student_names object maps strings to strings
    std::map < std::string , std::string > student_names {}; 

    // the exam_grades object maps strings (student IDs)
    // to ints (grades)
    std::map < std::string , int > exam_grades {};

    // add (key,value) pairs: most common use [ ]
    // dict[key] = value;
    student_names["V001"] = "Ahmed Khalifa";
    student_names["V002"] = "Alhassan Mohamed";
    student_names["V003"] = "Amr Alaa";
    student_names["V004"] = "Mohamed Abdalla";
    student_names["V005"] = "Ramy Elwakil";

    // another way: add {key, value} pair when creating

    // another way: use .insert( std::make_pair( , ))
    exam_grades.insert(std::make_pair("V001", 99));
    exam_grades.insert(std::make_pair("V002", 89));
    exam_grades.insert(std::make_pair("V003", 98));
    exam_grades.insert(std::make_pair("V004", 99));
    exam_grades.insert(std::make_pair("V005", 85));    

    // task: print out the name and grade of student with id V001
    // using [ ] vs at() 
    std::cout << "Student with id V001 is: " << student_names.at("V001");
    std::cout << " and received grade of: " << exam_grades["V001"] << std::endl;
    
    // if u provide .at() with non-existent idx -> shows error
    // if u do the same with [ ] = xxx , it creates a new entry

    // task: change the grade of student id V002 to 97
    exam_grades["V002"] = 97;
    // exam_grades.at("V100") = 90; // throws exception


    // use for-each loops to print out each map
    // the first loop should print a list of IDs and names
    // the second loop shoud print IDs and grades
    for(auto [id, name]:student_names){
        std::cout << id << " " << name << " " << exam_grades.at(id) << std::endl;
    }



    // task: print a single list of ID, name, grade 


    return 0;
}