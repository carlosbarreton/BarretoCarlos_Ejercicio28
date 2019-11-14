#include <iostream>
#include <fstream>
using namespace std;

void rk4(float t_inicial, float t_final, float delta_t, float x0, float y0, float v0_x, float v0_y, string archivo);
void analitica(float t_inicial, float t_final, float delta_t, float x0, float y0, float v0_x, float v0_y, string archivo);

int main() {

	float t_inicial = 0.0;
	float t_final = 2.0;
	float x0 = 0.0;
	float y0 = 0.0;
	float v0_x = 10.0;
	float v0_y = 10.0;
	float delta_t = 0.01;
	
	analitica(t_inicial, t_final, delta_t, x0, y0, v0_x, v0_y, "analitica.dat");
	rk4(t_inicial, t_final, delta_t, x0, y0, v0_x, v0_y, "rk4.dat");

	return 0;
}

void rk4(float t_inicial, float t_final, float delta_t, float x0, float y0, float v0_x, float v0_y, string archivo) {
	float g = 9.8;
	float t = t_inicial;
	float x = x0;
	float y = y0;
	ofstream outfile;
	outfile.open(archivo);
	outfile << x << " " << y << " " << endl;	

	while (t < t_final) {
		t += delta_t;
		x = v0_x*t;
		y = v0_y*t - 0.5*g*t*t;
		outfile << x << " " << y << endl;
	}
	outfile.close();
}

void analitica(float t_inicial, float t_final, float delta_t, float x0, float y0, float v0_x, float v0_y, string archivo) {
	float g = 9.8;
	float t = t_inicial;
	float x = x0;
	float y = y0;
	ofstream outfile;
	outfile.open(archivo);
	outfile << x << " " << y << " " << endl;	

	while (t < t_final) {
		t += delta_t;
		x = v0_x*t;
		y = v0_y*t - 0.5*g*t*t;
		outfile << x << " " << y << endl;
	}
	outfile.close();
}