import pandas as pd 
import matplotlib.pyplot as plt 
data=pd.read_csv('Resort.csv') 
df=pd.DataFrame(data) 
df.plot(kind='box',x='Year',title="Compare Resorts") 
plt.xlabel('Resorts') 
plt.ylabel('Rating') 
plt.show() 