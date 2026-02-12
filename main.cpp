#include <iostream>
#include <sstream>
#include <fstream>

int main(){
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;
	int num1;
	int num2;
	std::string sNum1;
    	std::string sNum2;
    	std::string text;

	inFile.open("data.csv");
	
	while (getline(inFile, currentLine)){
		ss.clear();
            	ss.str("");
            	converter.clear();
            	converter.str("");

		ss.str(currentLine);

		getline (ss, sNum1, ',');
		getline (ss, sNum2, ',');
		getline (ss, text);

		converter << sNum1;
		converter >> num1;
		converter.clear();
            	converter.str("");

		converter << sNum2;
                converter >> num2;
                converter.clear();
                converter.str("");

		int total = num1 + num2;
	
		for(int i = 0; i < total; i++){
			std::cout << text;
		}

	std::cout << std::endl;

	}
	
	inFile.close();

}
