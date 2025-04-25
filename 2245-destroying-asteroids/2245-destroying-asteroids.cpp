#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long currentMass = mass;
        for (int asteroidMass : asteroids) {
            if (currentMass < asteroidMass) {
                return false;
            }
            currentMass += asteroidMass;
        }
        return true;
    }
};