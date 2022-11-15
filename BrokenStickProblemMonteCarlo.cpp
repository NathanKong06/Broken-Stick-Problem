#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    unsigned int segmentOne = 0, segmentTwo = 0, segmentThree = 0, pointA, pointB;
    double triangleFailure = 0.0, triangleSuccess = 0.0;
    for (unsigned int i = 0; i <= 10000000; i++) {
            pointA  = rand() % 1001;
            pointB  = rand() % 1001;
            segmentOne = min(pointA,pointB);
            segmentTwo = max(pointA,pointB) - min(pointA, pointB);
            segmentThree = 1000 - max(pointA,pointB);
            if ((((min(min(segmentOne,segmentTwo),segmentThree)) + (max(min(segmentOne,segmentTwo), min(max(segmentOne,segmentTwo), segmentThree))))) > (max(max(segmentOne,segmentTwo), segmentThree)))
                triangleSuccess++;
            else
                triangleFailure++;
    }
    cout << "Probability: " << setprecision(3) << triangleSuccess / (triangleSuccess + triangleFailure) << endl;
}