#include <iostream>
#include <cmath>
#include <unordered_map>
#include <numeric>
#include <algorithm>
#include<vector>
#include<time.h>
#include <cstdlib>

using namespace std;

const int MAX_ROW = 100;
const int MAX_COLUMN = 100;

class MainMenu {
public:
    void display() {
        system("clear");
        printHeader();
        cout << "1. Calculator\n";
        cout << "2. Unit Converter\n";
        cout << "3. Matrix Calculation\n";
        cout << "4. Statistical Operations\n";
        cout << "5. Complex number Operations\n";
        cout << "6. Date time Difference \n";
        cout << "7. Parse and Evaluate Mathematical Experssion\n";
        cout << "8. Exit\n";
        cout << "Choose an option: ";
    }

private:
    void printHeader() {
        // Print header with colored text and separator
        cout << "\033[1;34m"; // Set text color to blue
        cout << "==================== Calculator App ====================\n";
        cout << "\033[0m"; // Reset text color
    }
};


class Calculator {
public:
   double  sumfunction(){
    cout<< " Enter the integers:"<<endl;
    double sum,num;
    string buffer;
     while(true){
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin >> buffer;
            break;
        }
        sum += num;
    }
    
    return sum;
    }
    double  subfunction( ){
    cout<<" Enter the integers:";
    double sub,num;
    string buffer;
     while(true){
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin >> buffer;
            break;
        }
        sub -= num;
    }
    
    return sub;
    }
    double  multfunction( ){
    cout<<" Enter the integers:";
    double mult=1,num;
    string buffer;
     while(true){
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin >> buffer;
            break;
        }
        mult *= num;
    }
    
    return mult;
    }
     double  divfunction( ){
     cout<<" Enter the integers:";    
     double div,num;
     string buffer;
     while(true){
        cin >> num;
        if(cin.fail()){
            cin.clear();
            cin >> buffer;
            break;
        }
        div /= num;
    }
    
    return div;
    }
    double squareroot( ){
        cout<<" Enter the integers:";    
        double a;
        cin>>a;
        if(a>0){ 
            return sqrt(a);
        }
        else{
            cout << "error, cannot compute negative integers." << endl;
        }
        return 0;
    }
    double logrithim( ){
        cout<<" Enter the integers:";
        double a;
        cin>>a;
        if(a>0){
            return log(a);
        } else{
            cout << "error, cannot compute negative integers." << endl;
        }
        return -1;
    }  
    double sine( ) {
        cout<<" Enter the integers:";
        double a;
        cin >>a;
        return sin(a);
    }

    double cosine( ) {
        cout<<" Enter the integers:";
        double a;
        cin >>a;
        return cos(a);
    }

    double tangent( ) {
        cout<<" Enter the integers:";
        double a;
        cin>> a;
        return tan(a);
    }

    int displayMenu(Calculator cal){
        cout<<" ***Welcome to calculater ***"<<endl;
        char oper;
        cout<<" Enter any operation"<<endl;
        cout<<" please enter '+' for addition"<<endl;
        cout<<" please enter ' -' for substraction"<<endl;
        cout<<" Please enter '*' for multiplication"<<endl;
        cout<<" Please enter '/' for division"<<endl;
        cout<<" Please enter 'e' for exponent"<<endl;
        cout<<" Please enter 'r' for square root"<<endl;
        cout<<" Please enter 'l' for logarithm"<<endl;
        cout<<" Please enter 's' for sine"<<endl;
        cout<<" Please enter 'c' for cosine"<<endl;
        cout<<" Please enter 't' for tangent"<<endl;
        
        cin>> oper;
   
        double answer;
        switch (oper) {
            case '+':
                answer  = cal.sumfunction();
                break;
            case '-': 
                answer = cal.subfunction();
                break;
            case '*':
                answer = cal.multfunction();
                break;
            case '/':
                answer = cal.divfunction();
                break;
            case 'r':
                answer = cal.squareroot();
                break;
            case 'l':
                answer = cal.logrithim();
                break;
            case 's':
                answer = cal.sine();
                break;
            case 'c':
                answer = cal.cosine();
                break;
            case 't':
                answer = cal.tangent();
                break;
            default:
                cout<< "Error: Invalid operation." << endl;
                return 1;
        }

        cout << "Result: " << answer << endl;
        return 0;
    }
};


class UnitConverter {
public:
    // Length/Distance conversions
    double kmToMeter(double km) {
        return km * 1000.0;
    }

    double meterToKm(double meter) {
        return meter / 1000.0;
    }

    // Weight conversions
    double kgToGram(double kg) {
        return kg * 1000.0;
    }

    double gramToKg(double gram) {
        return gram / 1000.0;
    }

    // Temperature conversions
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }

    // Area conversions
    double sqMeterToSqKm(double sqMeter) {
        return sqMeter / 1.0e6;
    }

    double sqKmToSqMeter(double sqKm) {
        return sqKm * 1.0e6;
    }

    // Volume conversions
    double cubicMeterToLiter(double cubicMeter) {
        return cubicMeter * 1000.0;
    }

    double literToCubicMeter(double liter) {
        return liter / 1000.0;
    }

    int displayMenu(UnitConverter converter) {
        int choice;
        double value;

        cout << "Select conversion type:" << endl;
        cout << "1. Kilometers to Meters" << endl;
        cout << "2. Meters to Kilometers" << endl;
        cout << "3. Kilograms to Grams" << endl;
        cout << "4. Grams to Kilograms" << endl;
        cout << "5. Celsius to Fahrenheit" << endl;
        cout << "6. Fahrenheit to Celsius" << endl;
        cout << "7. Square Meters to Square Kilometers" << endl;
        cout << "8. Square Kilometers to Square Meters" << endl;
        cout << "9. Cubic Meters to Liters" << endl;
        cout << "10. Liters to Cubic Meters" << endl;

        cout << "Enter your choice (1-10): ";
        cin >> choice;

        cout << "Enter the value to convert: ";
        cin >> value;

        if (cin.fail()) {
                    cerr << "Error: Non-numeric input detected. Please enter numeric value";
                    exit(1);
                }

        switch (choice) {
            case 1:
                cout << value << " kilometers is equal to " << converter.kmToMeter(value) << " meters." << endl;
                break;
            case 2:
                cout << value << " meters is equal to " << converter.meterToKm(value) << " kilometers." << endl;
                break;
            case 3:
                cout << value << " kilograms is equal to " << converter.kgToGram(value) << " grams." << endl;
                break;
            case 4:
                cout << value << " grams is equal to " << converter.gramToKg(value) << " kilograms." << endl;
                break;
            case 5:
                cout << value << " Celsius is equal to " << converter.celsiusToFahrenheit(value) << " Fahrenheit." << endl;
                break;
            case 6:
                cout << value << " Fahrenheit is equal to " << converter.fahrenheitToCelsius(value) << " Celsius." << endl;
                break;
            case 7:
                cout << value << " square meters is equal to " << converter.sqMeterToSqKm(value) << " square kilometers." << endl;
                break;
            case 8:
                cout << value << " square kilometers is equal to " << converter.sqKmToSqMeter(value) << " square meters." << endl;
                break;
            case 9:
                cout << value << " cubic meters is equal to " << converter.cubicMeterToLiter(value) << " liters." << endl;
                break;
            case 10:
                cout << value << " liters is equal to " << converter.literToCubicMeter(value) << " cubic meters." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        return 0;
    }
};

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0), imaginary(0) {}

    Complex(double r, double i) : real(r), imaginary(i) {}

    // Function to add two complex numbers
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Function to multiply two complex numbers
    Complex multiply(const Complex& other) const {
        return Complex((real * other.real) - (imaginary * other.imaginary),
                       (real * other.imaginary) + (imaginary * other.real));
    }

    // Function to divide two complex numbers
    Complex divide(const Complex& other) const {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        return Complex(((real * other.real) + (imaginary * other.imaginary)) / denominator,
                       ((imaginary * other.real) - (real * other.imaginary)) / denominator);
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imaginary << "i";
    }

    int displayMenu(Complex complex) {
        double real1, imaginary1, real2, imaginary2;

        cout << "Enter the real and imaginary parts of the first complex number (e.g., 4 5): ";

        // Validate input for the first complex number
        if (!(cin >> real1 >> imaginary1)) {
            cerr << "Invalid input. Please enter numeric values.\n";
            return 1; // Exit with an error code
        }
        Complex num1(real1, imaginary1);

        cout << "Enter the real and imaginary parts of the second complex number (e.g., 1 -2): ";
        // Validate Input for the second complex number
        if (!(cin >> real2 >> imaginary2)) {
            cerr << "Invalid input. Please enter numeric values.\n";
            return 1; // Exit with an error code
        }
        Complex num2(real2, imaginary2);

        cout << "\n";
        cout << "Number1: "; 
        num1.display();

        cout << "\n";
        cout << "Number2: "; 
        num2.display();
        cout << "\n";

        int choice;
        cout << "Select operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Addition: ";
                num1.add(num2).display();
                break;

            case 2:
                cout << "Subtraction: ";
                num1.subtract(num2).display();
                break;

            case 3:
                cout << "Multiplication: ";
                num1.multiply(num2).display();
                break;

            case 4:
                cout << "Division: ";
                num1.divide(num2).display();
                break;

            default:
                cout << "Invalid choice";
        }

        return 0;
    }
};

class Matrix{
public:
void InputMatrix(int arr[][MAX_COLUMN], int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
}

void DisplayMatrix(int arr[][MAX_COLUMN], int m, int n){
    for(int i = 0; i<m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}

int SumMatrix(int arr[][MAX_COLUMN], int m, int n){
    int sum = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
    }

    return sum;
}
int SubsMatrix(int arr[][MAX_COLUMN], int m, int n){
    int subs = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j < n; j++){
            subs -= arr[i][j];
        }
    }

    return subs;
}
int multMatrix(int arr[][MAX_COLUMN], int m, int n){
    int mult = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j < n; j++){
            mult *= arr[i][j];
        }
    }

    return mult;
}
void TransposeMatrix(int A[][MAX_COLUMN], int B[][MAX_ROW], int m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = A[j][i];
        }
    }
}

void displayMenu(Matrix matrixOperation){
    int n=0, m=0;
    cout<< " Enter number of rows for(m)";
    cin>>m;
    cout << " Enter number of columns(n)";
    cin>>n;
    int matrix[MAX_ROW][MAX_COLUMN]={};
    int matrix_transpose[MAX_ROW][MAX_COLUMN] = {};
    int choice = 0;
    int answer;
    do{
         cout << "\nMatrix Operations :" << endl;
        cout << "1. Input elements into matrix" << endl;
        cout << "2. Display matrix elements" << endl;
        cout << "3. Sum of all elements" << endl;
        cout<<"4.substraction of matrics "<< endl;
        cout<<"5.multiplication of matrics "<< endl;
        cout << "6. Create determinant of matrix" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                matrixOperation.InputMatrix(matrix, m, n);
                break;
            case 2:
                matrixOperation.DisplayMatrix(matrix, m, n);
                break;
            case 3:
                cout << "Sum of all elements: " <<matrixOperation.SumMatrix (matrix, m, n) << endl;
                break;
            case 4:
                cout << "Sub of all elements: " <<  matrixOperation.SubsMatrix(matrix, m, n);
                break;
            case 5:
                answer = matrixOperation.multMatrix(matrix, m, n);
                break;
            case 6:
                 matrixOperation.TransposeMatrix(matrix, matrix_transpose, m, n);
                cout << "determinante of matrix:" << endl;
               matrixOperation.DisplayMatrix(matrix_transpose, n, m);
                break;
            case 7:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 7);
}
};

class StatisticsCalculator {
private:
    vector<double> numbers;

    double calculateMean() const {
        if (numbers.empty()) {
            return 0.0;  // Avoid division by zero
        }

        double sum = accumulate(numbers.begin(), numbers.end(), 0.0);
        return sum / numbers.size();
    }

    double calculateMode() const {
        unordered_map<double, int> frequency;

        for (double num : numbers) {
            frequency[num]++;
        }

        double mode = 0.0;
        int maxFrequency = 0;

        for (const auto& entry : frequency) {
            if (entry.second > maxFrequency) {
                maxFrequency = entry.second;
                mode = entry.first;
            }
        }

        return mode;
    }

    double calculateVariance(double mean) const {
        if (numbers.size() < 2) {
            return 0.0;  // Variance is undefined for less than two elements
        }

        double sumSquaredDiff = 0.0;

        for (double num : numbers) {
            double diff = num - mean;
            sumSquaredDiff += diff * diff;
        }

        return sumSquaredDiff / (numbers.size() - 1);
    }

    double calculateStandardDeviation(double variance) const {
        return sqrt(variance);
    }

    double calculateMedian() const {
        if (numbers.empty()) {
            return 0.0;
        }

        vector<double> sortedNumbers = numbers;
        sort(sortedNumbers.begin(), sortedNumbers.end());

        size_t size = sortedNumbers.size();

        if (size % 2 == 0) {
            // If the size is even, return the average of the middle two elements
            return (sortedNumbers[size / 2 - 1] + sortedNumbers[size / 2]) / 2.0;
        } else {
            // If the size is odd, return the middle element
            return sortedNumbers[size / 2];
        }
    }

public:
    void enterNumbers() {
        char stopInput;
        do {
            double num;
            cout << "Enter a number: ";
            cin >> num;
            numbers.push_back(num);

            cout << "Do you want to add another number? (y/n): ";
            cin >> stopInput;
        } while (stopInput != 'n' && stopInput != 'N');
    }

    void displayMenu() {
        char choice;

        do {
            cout << "\nMenu:\n";
            cout << "1. Enter numbers\n";
            cout << "2. Calculate Mean\n";
            cout << "3. Calculate Mode\n";
            cout << "4. Calculate Median\n";
            cout << "5. Calculate Variance\n";
            cout << "6. Calculate Standard Deviation\n";
            cout << "7. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == '1') {
                // Input numbers
                enterNumbers();
            } else if (numbers.empty()) {
                cout << "Please enter numbers first.\n";
            } else {
                switch (choice) {
                    case '2':
                        // Calculate mean
                        cout << "Mean: " << calculateMean() << endl;
                        break;

                    case '3':
                        // Calculate mode
                        cout << "Mode: " << calculateMode() << endl;
                        break;

                    case '4':
                        // Calculate median
                        cout << "Median: " << calculateMedian() << endl;
                        break;

                    case '5':
                        // Calculate variance
                        {
                            double mean = calculateMean();
                            double variance = calculateVariance(mean);
                            cout << "Variance: " << variance << endl;
                        }
                        break;

                    case '6':
                        // Calculate standard deviation
                        {
                            double mean = calculateMean();
                            double variance = calculateVariance(mean);
                            double stdDeviation = calculateStandardDeviation(variance);
                            cout << "Standard Deviation: " << stdDeviation << endl;
                        }
                        break;

                    case '7':
                        // Exit the program
                        cout << "Exiting the program. Goodbye!\n";
                        break;

                    default:
                        cout << "Invalid choice. Please enter a valid option.\n";
                }
            }

        } while (choice != '7');
    }
};

class TimeCalculator{
    public:
    struct Time {
    int hour;
    int mins;
    int secs;
    };
    
    Time findTimeDifference(Time t1, Time t2){
    Time diff;
        if(t2.secs > t1.secs){
            --t1.mins;
            t1.secs += 60;
        }
    
        diff.secs = t1.secs - t2.secs;
        if(t2.mins > t1.mins) {
            --t1.hour;
            t1.mins += 60;
        }
        
        diff.mins = t1.mins-t2.mins;
        diff.hour = t1.hour-t2.hour;
        
        return diff;
    }
    struct date {
    int year;
    int month;
    int day;
    };
    
    date finddateDifference(date d1, date d2){
    date diff;
        if(d2.day > d1.day){
            --d1.month;
            d1.day += 30;
        }
    
        diff.day = d1.day - d2.day;
        if(d2.month > d1.month) {
            --d1.year;
            d1.month += 30;
        }
        
        diff.month = d1.month-d2.month;
        diff.year = d1.year-d2.year;
        
        return diff;
    }

    int displayMenu(){
    Time t1, t2, diff;
     
    cout << "Enter earlier time in hours, minutes and seconds\n";
    cin >> t1.hour >> t1.mins >> t1.secs;
 
    cout << "Enter current time in hours, minutes and seconds\n";
    cin >> t2.hour >> t2.mins >> t2.secs;
     
    diff = findTimeDifference(t1, t2);
 
    cout << "Difference = "<< diff.hour << ":"
        << diff.mins << ":" << diff.secs;


    date d1, d2, difff;
     
    cout << "Enter earlier date in years, month and day\n";
    cin >> d1.year >> d1.month >> d1.day;
 
    cout << "Enter current date in years, month and day\n";
    cin >> d2.year >> d2.month>> d2.day;
     
    difff = finddateDifference(d1, d2);
 
    cout << "Difference = "<< difff.year << ":"
        << difff.month << ":" << difff.day << endl;    
    return 0;
    }
};



         


int main() {
    MainMenu menu;
    Calculator calculator;
    UnitConverter unitConverter;
    Complex complex;
    Matrix matrix;
    StatisticsCalculator statistic;
    TimeCalculator datetime;

    int choice;

    do {
        menu.display();
        cin >> choice;

        switch (choice) {
            case 1:
                calculator.displayMenu(calculator);
                break;
            case 2:
                unitConverter.displayMenu(unitConverter);
                break;
            case 3:
                matrix.displayMenu(matrix);
                break;
            case 4:
                statistic.displayMenu();
                break;
            case 5:
                complex.displayMenu(complex);
            case 6:
                datetime.displayMenu();
            
            case 8:
                cout << "Exiting Calculator App. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        // Pause the system before clearing the screen (for better visibility)
        cout << "Press Enter to continue...";
        cin.ignore();
        cin.get();

    } while (choice != 6);

    return 0;
}
