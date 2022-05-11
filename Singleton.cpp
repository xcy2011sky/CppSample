#include <iostream>

using namespace std;

class Singleton{
	public:
	static Singleton & getInstance(){
		static Singleton instance;
		return instance;
	};
	void putString(){
		std::cout<<" singleton put string";
	};

	private:
	Singleton(){
		std::cout<<" hello Singleton"<<std::endl;
	}
	~Singleton(){};

};


int main() {
	cout << "hello https://tool.lu/" << endl;
	Singleton::getInstance().putString()；
		return 0;
}
