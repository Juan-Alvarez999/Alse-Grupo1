#include<iostream>
using namespace std;
//template <class TEST>


class puntos
{
	private:
		double X,Y;
	public:
		void pedir_puntos(const char num)
		{
			cout << "Coordenada X del punto " << num << ": " << endl;
			cin >> X;
			cout << "Coordenada Y del punto " << num << ": " << endl;
			cin >> Y;
		}
		void mostrar_puntos(const char num[])
		{
			cout<< "El " << num << " punto es (" << X << "," << Y << ")" <<endl;
		}
		void asignacion(double x, double y)
		{
			y=Y;
			x=X;
		}
};

int main ()
{
	double PEN,X1,X2,Y1,Y2;
	puntos point1,point2;
	
	point1.pedir_puntos('1');
	point2.pedir_puntos('2');
	point1.mostrar_puntos("primer");
	point2.mostrar_puntos("segundo");
	point1.asignacion(X1,Y1);
	point2.asignacion(X2,Y2);
	PEN=(Y2-Y1)/(X2-X1);
	cout<<"La pendiente es: " << PEN << endl;
	return 0;
}