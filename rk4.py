import numpy as np
import matplotlib.pyplot as plt

datos_analitica = np.loadtxt("analitica.dat")

plt.figure()
plt.plot(datos_analitica[:,0], datos_analitica[:,1], label="Sin friccion")
plt.title("Movimiento proyectil")
plt.xlabel("x")
plt.ylabel("y")
plt.legend()
plt.savefig("rk4.png")