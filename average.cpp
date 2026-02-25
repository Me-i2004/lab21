#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc,char *argv[]){
    if(argc == 1){
        cout << "Please input numbers to find average.";
    }
    else{
        int count = argc-1;
        double sum = 0.0;
        
        for(int i=1;i<argc;i++){
            sum += atof(argv[i]);
        }
        
        cout << "---------------------------------\n";
        cout << "Average of " << count << " numbers = " << sum/count << "\n";
        cout << "---------------------------------";
    }
return 0;
}
