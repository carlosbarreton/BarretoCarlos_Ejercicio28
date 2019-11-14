rk4.png: rk4.dat analitica.dat rk4.py
	python rk4.py

%.dat : a.out
	./a.out

a.out: rk4.cpp
	c++ rk4.cpp
