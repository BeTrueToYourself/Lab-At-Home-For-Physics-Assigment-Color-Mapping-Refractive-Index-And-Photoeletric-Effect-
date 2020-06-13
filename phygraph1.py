import matplotlib.pyplot as plt
from matplotlib import style 
from numpy import *
#style.use('dark_background')
print(plt.style.available)
plt.plot([1,2,3],[3,3,3])
plt.xlabel('KINETIC ENERGY')
plt.ylabel('LIGHT INTENSITY')
plt.title('INTENSITY VS K.E')

plt.legend()
plt.grid(True)
plt.show()
