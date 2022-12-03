/*average_grades(grades)
Given a vector of grades (integers 0 to 100), 
compute and return the average of all elements

Task: improve this code to deal with cases where the vector is empty
or the grades in the vector are outside rane 0 - 100*/

#include <iostream>
#include <vector>
#include <stdexcept>

float average_grades(std::vector<int> const& grades){
    if(grades.size() == 0){
        std::invalid_argument ex {"Can't compute average of 0 things"}; //msg for progrmmer
        throw ex;
    }
    int sum {0};
    for(int x : grades){
        if(0 > x || x > 100){
            std::out_of_range ex {"Grades can only be 0 - 100"};
            throw ex;
        }
        sum += x;
    }
    return sum / grades.size();
}

int main(){
    std::vector<int> grades1 {90, 80, 70};
    std::vector<int> grades2 {}; //invalid
    std::vector<int> grades3 {90, 80, -70}; // Invalid

    auto av { average_grades(grades3) };
    try{
        auto avg { average_grades(grades2) };
        std::cout << "Average: " << avg << std::endl;
    } catch (std::invalid_argument &e){
        std::cout << "Caught and invalid argument exception" << std::endl;
    } catch (std::out_of_range &e){
        std::cout << "Caught and out of range exception" << std::endl;
    }
    return 0;
}