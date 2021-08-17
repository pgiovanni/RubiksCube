#ifndef RUBIKSSIDE_H
#define RUBIKSSIDE_H
#include <string>
#include <vector>
#include <iostream>
#include "rubiksPiece.cpp"

using namespace std;

class rubiksSide {
	
		public:
			vector<rubiksPiece> side1;
			vector<rubiksPiece> side2;
			vector<rubiksPiece> side3;
			vector<rubiksPiece> side4;
			vector<rubiksPiece> side5;
			vector<rubiksPiece> side6;
			
			rubiksSide() {
				//corners: there sides simultaneously
				rubiksPiece one24  = rubiksPiece(3, 3, 3, "4+x", "1+y","2+z", "124");
					side2.push_back(one24);
					side4.push_back(one24);
					side1.push_back(one24);
				rubiksPiece one43 = rubiksPiece(3, 3, 1, "+x", "+y", "-z", "143");
					side3.push_back(one43);
					side1.push_back(one43);
					side4.push_back(one43);
				rubiksPiece one35 = rubiksPiece(1, 3, 1, "5-x", "1+y", "3-z", "135");
					side3.push_back(one35);
					side1.push_back(one35);
					side5.push_back(one35);
				rubiksPiece one52 = rubiksPiece(1, 3, 3, "5-x", "1+y", "2+z", "152");
					side2.push_back(one52);
					side5.push_back(one52);
					side1.push_back(one52);
				rubiksPiece six34 = rubiksPiece(3, 1, 1, "4+x", "6-y", "3-z", "634");
					side3.push_back(six34);
					side6.push_back(six34);
					side4.push_back(six34);
				rubiksPiece six53 = rubiksPiece(1, 1, 1, "5-x", "6-y", "3-z","653" );
					side3.push_back(six53);
					side5.push_back(six53);
					side6.push_back(six53);
				rubiksPiece six52 = rubiksPiece(1, 1, 3, "5-x", "6-y", "2+z", "652");
					side2.push_back(six53);
					side6.push_back(six53);
					side5.push_back(six53);
				rubiksPiece six42 = rubiksPiece(3, 1, 3, "4+x", "6-y", "", "642");
					side3.push_back(six42);
					side6.push_back(six42);
					side2.push_back(six42);
				//edges: two sides simultaneously
				rubiksPiece one2= rubiksPiece(2, 3, 3, "0", "1+y", "2+z", "12");
					side2.push_back(one2);
					side1.push_back(one2);
				rubiksPiece one3 = rubiksPiece(2, 3, 1, "0", "1+y", "3-z" ,"13");
					side3.push_back(one3);
					side1.push_back(one3);
				rubiksPiece one4 = rubiksPiece(3, 3, 2, "4+x", "1+y", "0", "14");
					side1.push_back(one4);
					side4.push_back(one4);
				rubiksPiece one5 = rubiksPiece(1, 3, 2, "5-x", "1+y", "0", "15");
					side1.push_back(one5);
					side5.push_back(one5);
				rubiksPiece three4 = rubiksPiece(3, 2, 1, "4+x", "0", "3-z", "34");
					side3.push_back(three4);
					side4.push_back(three4);
				rubiksPiece two4 = rubiksPiece(3, 2, 3, "4+x", "0", "2+z", "24");
					side2.push_back(two4);
					side4.push_back(two4);
				rubiksPiece two5 = rubiksPiece(1, 2, 3, "5-x", "0", "2+z", "25");
					side2.push_back(two5);
					side5.push_back(two5);
				rubiksPiece three5 = rubiksPiece(1, 2, 1, "5-x", "0", "3-z", "35");
					side3.push_back(three5);
					side5.push_back(three5);
				rubiksPiece six2 = rubiksPiece(2, 1, 3, "0", "6-y", "2+z", "62");
					side6.push_back(six2);
					side2.push_back(six2);
				rubiksPiece six3 = rubiksPiece(2, 1, 1, "0", "6-y", "3-z", "63");
					side6.push_back(six3);
					side3.push_back(six3);
				rubiksPiece six4 = rubiksPiece(3, 1 , 2, "4+x", "6-y", "0", "64");
					side6.push_back(six4);
					side4.push_back(six4);
				rubiksPiece six5 = rubiksPiece(1, 1, 2, "5-x", "6-y", "0", "64");
					side6.push_back(six5);
					side5.push_back(six5);
				//Center: one edge
				rubiksPiece one = rubiksPiece(2, 3, 2, "0", "1+y", "0", "1");
					side1.push_back(one);
				rubiksPiece two = rubiksPiece(2, 2, 3, "0", "0", "2+z", "2");
					side2.push_back(two);
				rubiksPiece three = rubiksPiece(2, 2, 3, "0", "0", "3-z", "3");
					side3.push_back(three);
				rubiksPiece four = rubiksPiece(3, 2, 2, "4+x", "0", "0", "4");
					side4.push_back(four);
				rubiksPiece five = rubiksPiece(1, 2, 2, "5-x", "0", "0", "5");
					side5.push_back(five);
				rubiksPiece six = rubiksPiece(1, 1, 2, "0", "6-y", "0", "6");
					side6.push_back(six);
			}

		/*	vector<rubiksPiece> LCW (){}
			vector<rubiksPiece> LCCW () {}
			vector<rubiksPiece> RCW () {}
			vector<rubiksPiece> RCCW () {}
			vector<rubiksPiece> FCW () {}
			vector<rubiksPiece> FCCW () {}
			vector<rubiksPiece> UCW () {}
			vector<rubiksPiece> UCCW () {}
		*/
	
	
	};
#endif
