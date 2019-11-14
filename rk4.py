import numpy as np
import matplotlib.pyplot as plt

datos_analitica = np.loadtxt("analitica.dat")
datos_rk4 = np.loadtxt("rk4.dat")

plt.figure()
plt.plot(datos_analitica[:,0], datos_analitica[:,1], label="Sin friccion")
plt.plot(datos_rk4[:,0], datos_rk4[:,1], label="Con friccion")
plt.title("Movimiento proyectil")
plt.xlabel("x")
plt.ylabel("y")
plt.legend()
plt.savefig("rk4.png")