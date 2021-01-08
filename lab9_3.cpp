#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double n,mean=0,sd=0;
    while(getline(source,textline)){
        mean+=atof(textline.c_str());
        n++;
    }
    mean /=n;
    source.close();
    source.open("score.txt");
    double a;
    while(getline(source,textline)){
        a=atof(textline.c_str());
        sd+=pow(a-mean,2);
    }
    sd = sqrt(sd/n);

    cout << "Number of data = "<<n<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<sd;
    
    source.close();
}