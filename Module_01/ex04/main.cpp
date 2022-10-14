# include <iostream>
# include <string>
# include <cctype>
# include <fstream>
# include <sstream>

void setNewFile(std::ofstream &fileOut, std::string buff){ 
	fileOut << buff;
	fileOut.close();
	return;
}

void findNewbuff(std::string &currentBuffer, std::string &newBuff, std::string &s1, std::string &s2){
	size_t i;
	while(currentBuffer.find(s1) != std::string::npos){
		i = currentBuffer.find(s1);
		newBuff.append(currentBuffer.substr(0, i));
		newBuff.append(s2);
		currentBuffer = currentBuffer.substr( i + s1.size(), currentBuffer.size());
	}
	newBuff.append(currentBuffer);
}
void findbuff(std::string &currentBuffer, std::ifstream &in){
	std::stringstream buffer;

	buffer << in.rdbuf();
	currentBuffer = buffer.str();
	in.close();
	return;
}

bool openInAndOut(std::ifstream &in, std::ofstream &out, std::string file){
	in.open(file.c_str());
	if(!in.is_open())
	{
		std::cout << "Has a problem with the file, it didn't open" << std::endl;
		in.close();
		return(false);
	}
	file.append(".replace");
	out.open(file.c_str());
	if (!out.is_open())
	{
		std::cout << "Something wrong creating the new file" << std::endl;
		in.close();
		return (false);
	}
	return(true);
}

void sedIsForLosers(std::string file, std::string s1, std::string s2){
	std::ifstream inFile;
	std::ofstream outFile;
	std::string		currentBuffer;
	std::string		newBuffer;

	if(!openInAndOut(inFile, outFile, file)){
		return;
	}
	findbuff(currentBuffer, inFile);
	findNewbuff(currentBuffer, newBuffer, s1, s2);
	setNewFile(outFile, newBuffer);
	return;
}

int main(int argc, char *argv[]){
	if (argc != 4)
	{
		std::cout << "Incorrect params" << std::endl;
		std::cout << "./main file s1 s2" << std::endl;
		return (1);
	}
	sedIsForLosers(argv[1], argv[2], argv[3]);
	return(0);
}