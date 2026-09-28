#include<iostream>
using namespace std;
class angle{
	public:
	int degree;
	double min;
	char direction;
	angle(){
		degree = 0;
		min = 0;
		direction = '0';
	}
	angle (int d , double m , char di){
		degree = d;
		min = m;
		direction = di;
	}
	void getangle(){
		cout<<" enter degree : "<<endl;
		cin>>degree;
		cout<<" enter minutes :"<<endl;
		cin>>min;
		cout<<" enter direction N , S , W , E :"<<endl;
		cin>>direction;
		
        if (degree < 0)
        {
            cout << "invalid degrees" << endl;
            degree= 0;
        }

        if (min < 0 || min >= 60)
        {
            cout << "invalid minutes" << endl;
            min = 0;
        }

        if (direction != 'N' && direction != 'S' &&
            direction != 'E' && direction != 'W')
        {
            cout << "invalid direction" << endl;
            direction = '0';
        }
	}
	void display() const{
		cout<<degree<<"°"<<min<<"'"<<direction;
	}

};
int main (){
	angle latitude;
    angle longitude;
    cout << "Enter Latitude:" << endl;
    latitude.getangle();
    cout << endl;
    cout << "Enter Longitude:" << endl;
    longitude.getangle();
    cout << endl;
    cout << "Latitude: ";
    latitude.display();
    cout<<endl;
    cout << "Longitude: ";
    longitude.display();
}






