#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    unsigned int segmentOne = 0, segmentTwo = 0, segmentThree = 0;
    double triangleFailure = 0.0, triangleSuccess = 0.0;
    for (unsigned int pointA = 0; pointA <= 10000; pointA++) {
        for (unsigned int pointB = 0; pointB <= 10000; pointB++){
            segmentOne = min(pointA,pointB);
            segmentTwo = max(pointA,pointB) - min(pointA, pointB);
            segmentThree = 10000 - max(pointA,pointB);
            if ((min(min(segmentOne,segmentTwo),segmentThree) + max(min(segmentOne,segmentTwo), min(max(segmentOne,segmentTwo), segmentThree))) > max(max(segmentOne,segmentTwo), segmentThree))
                triangleSuccess++;
            else
                triangleFailure++;
        }
    }
    cout << "Probability: " << setprecision(3) << triangleSuccess / (triangleSuccess + triangleFailure) << endl;
    return 0;
}