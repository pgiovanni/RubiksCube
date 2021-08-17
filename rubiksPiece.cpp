#ifndef RUBIKSPIECE_H
#define RUBIKSPIECE_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class rubiksPiece {
	
		public:
			vector<int> coordinates;
			vector<string>  orientation;
			string name;
			string color;
		
			rubiksPiece(int x, int y, int z, string Xo, string Yo, string Zo, string N)  {
			
				coordinates.push_back(x);
				coordinates.push_back(y);
				coordinates.push_back(z);		
				orientation.push_back(Xo);
				orientation.push_back(Yo);
				orientation.push_back(Zo);
				name = N;
			}
	
};
#endif
