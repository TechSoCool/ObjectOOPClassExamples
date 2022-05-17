#include <iostream>
using namespace std;

class BuckysClass {
	public:
		void coolSayings()
		{
			cout << "Whats up! I'm the greatest of all time" << endl;
		}
};

int main()
{

	BuckysClass BuckysObject;
	BuckysObject.coolSayings();
	return 0;
}