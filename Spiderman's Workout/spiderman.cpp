#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX_HEIGHT = 1000; //max of total distance climbed

int main() {
    /*
        N - number of test scenarios (1 <= N <= 101)
        M - number of distances (M <= 40)
        X - temp var to store the value of each height change
    */
    int N, M, X;
    cin >> N;

    //number of test scenarios decrement after each iteration
    while (N--){
        cin >> M;
        vector<int> d; //stores height changes
        int sum = 0;

        //traverses through the number of distances
        for (int i = 0; i < M; i++){
            cin >> X;
            sum += X;
            d.push_back(X);
        }

        //2D vector initalizations
        vector<vector<int>> height(M, vector<int>(sum + 1, MAX_HEIGHT)); //stores min height considering each change of height
        vector<vector<int>> decision(M, vector<int>(sum + 1, 0)); //tracks U/D decisions to reach height

        height[0][d[0]] = d[0]; //initializes height achieveable after first distance --> up
        decision[0][d[0]] = 1; //records decision to reach height --> 1:up, -1:down

        //dynamic approach for height optimization
        for (int i = 1; i < M; i++){ //iterates over each height change
            for (int j = 0; j < sum + 1; j++){ //iterates through all possible heights from 0-sum(total height changes)
                if (height[i - 1][j] != MAX_HEIGHT){ //checks if prev height is not equal to the max
                    //up move
                    if (j + d[i] < height[i][j + d[i]]){
                        int k = max(j + d[i], height[i - 1][j]);
                        if(height[i][j + d[i]] >= k){
                            height[i][j + d[i]] = k;
                            decision[i][j + d[i]] = 1;
                        }
                    }
                    //down move
                    if (j >= d[i]){
                        if (j - d[i] < height[i][j - d[i]]){
                            if(height[i][j - d[i]] >= height[i - 1][j]){
                                height[i][j - d[i]] = height[i - 1][j];
                                decision[i][j - d[i]] = -1;
                            }
                        }
                    }
                }
            }
        }
        //checks if return to height 0 is possible
        if(decision[M - 1][0] != -1){ //not possible
            cout << "IMPOSSIBLE" << endl;
        } else { //possible
            int h = 0; //current height
            string s = ""; //record movements
            for (int i = M - 1; i >= 0; i--){
                if(decision[i][h] == 1) { //move up
                    h -= d[i];
                    s += "U";
                } else { //move down
                    h += d[i];
                    s += "D";
                }
            }
            //prints moves in reverse order
            for (int i = M - 1; i >= 0; i--){
                cout << s[i];
            }
            cout << endl;
        }
    }
    return 0; //success
}