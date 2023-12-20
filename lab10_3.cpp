#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double count = 0, mean, sd, sum, sum2;
    
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        count++;
    }
    
    mean = sum/count;
    sd = sqrt((1/count)*sum2 - pow(mean,2));
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd;
}