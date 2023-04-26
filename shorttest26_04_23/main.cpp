#include <iostream>
#include <fmt/ranges.h>
#include <vector>
#include <string>
#include <algorithm>

int main()
{





    return 0;
}


auto Student( std::string const& name, std::string const& surname, int age)
{
    std::string studentData[3];

    studentData[0] = name;
    studentData[1] = surname;
    studentData[2] = std::to_string(age);

    return studentData;

}

auto extractMaxes(std::vector<Student> const& students)
{
    for (int i = 0; i < students.size, i++ )
    {
        std::ranges::sort(students[i][0]);
        std::ranges::sort(students[i][2]);
        std::ranges::sort(students[i][3]);
    }
    return students[0];

}
