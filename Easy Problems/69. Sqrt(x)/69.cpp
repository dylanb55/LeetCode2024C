#include<iostream>

using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int contador = 0;
        for(int i = 1;i<=x;i+=2){
        	x -= i;
        	if(x < 0){
        		break;
			}
			else{
				contador++;
			}
		}
		return contador;
    }
};

int main(){
	Solution* solucion1 = new Solution();
	
	cout << solucion1->mySqrt(8) << endl;
}