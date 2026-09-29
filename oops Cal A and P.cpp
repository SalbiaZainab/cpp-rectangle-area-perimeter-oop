#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length;
		float width;
	public:
		// Set Data
		void setData(float l,float w)
		{
			length = l;
			width = w;
		}
		// Calculate area
		float area(){
			return length * width;
		}
		// Calculate perimeter
		float perimeter(){
			return 2 * (length + width);
		}
		// Display result
		void display(){
			cout << "Width: " << width << endl;
			cout << "Length: " << length << endl;
			cout << "Area: " << area() << endl;
			cout << "Perimeter: " << perimeter() << endl;
			
		}
};
int main(){
	Rectangle obj;
	float l,w ;
	cout << "Enter length: " << endl;
	cin >> l;
	cout << "Enter width: " << endl;
	cin >> w;
	obj.setData(l,w);
	obj.display();
	return 0;
}
