#include <iostream>
#include <string>

void introduction() {
	std::cout << "Welcome to Help RTZ ruin DC!" << std::endl; 
}

void playerCreation() {
	std::string playerName;
	std::cout << "This is the main input loop. Enter your name." << std::endl;
	std::cin >> playerName;
	//eventuellt andra attributer som vi använder för att skapa en spelare. 
	std::cout << "Your name is: " << playerName << ". " << std::endl;
}

int main() {
	std::string playerName; 
	std::string command; 
	introduction(); 
	playerCreation(); 

	//huvudloopen som bör hantera alla händelser

	while (1) {
		std::cout << "This will now echo everything written to the terminal." << std::endl; 
		std::cin >> command; 
		std::cout << "Command: " << command << std::endl; 
	}

	return 0; 
}
