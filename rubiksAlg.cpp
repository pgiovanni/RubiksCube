#include <iostream>
#include "rubiksSide.cpp"
#include "rubiksPiece.cpp"

using namespace std;

int main (int argc, char** argv){

	rubiksSide one;

	for (int i = 0; i < one.side1.size(); i++){
		
		cout << one.side1[i].coordinates[i] << endl;
	
	}

	return 0;

}
