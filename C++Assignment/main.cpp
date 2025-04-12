#include <iostream>
#include <string>

std::string calculateGrade(int score) {
    std::string grade;

    switch (score) {
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
            grade = "A+";
            break;
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
            grade = "A";
            break;
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
            grade = "A-";
            break;
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
            grade = "B+";
            break;
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
            grade = "B";
            break;
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
            grade = "C+";
            break;
        case 63:
        case 62:
        case 61:
        case 60:
            grade = "C";
            break;
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
            grade = "C-";
            break;
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
            grade = "D";
            break;
        default:
            grade = "F"; // Assuming F for failing for scores outside the specified range
    }

    return grade;
}

int main() {
    int score;

    // Input the numerical score
    std::cout << "Enter the numerical score: ";
    std::cin >> score;

    // Validate the input (assuming a valid score is between 0 and 100)
    if (score >= 0 && score <= 100) {
        std::string grade = calculateGrade(score);
        std::cout << "The corresponding letter grade is: " << grade << std::endl;
    } else {
        std::cout << "Invalid score. Please enter a score between 0 and 100." << std::endl;
    }

    return 0;
}
