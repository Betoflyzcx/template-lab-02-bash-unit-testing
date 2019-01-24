#include <iostream>
   // just string function that takes in into and char
std::string echo(int length, char** chars){
// skip the first argc index because its thep program

	std::string ret= "";  // declaring empty string
	for(int i=1; i<length; i++){
	ret += chars[i];
	if(i < length-1){
		ret += " ";
		}
	}
	return ret;
}
