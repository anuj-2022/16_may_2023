#include<iostream>
using namespace std;

class Data
{
	private:
		int temp=45;
	public:
		Data()
		{
			cout <<"tempeture without increment :"<<temp<<endl;
			++temp;
			cout <<"tempeture after increment :"<<temp<<endl;
		}
};

int main()
{
	Data a;
	return 0;
}
