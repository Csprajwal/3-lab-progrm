import pandas as pd 
import matplotlib.pyplot as plt 
data=pd.read_csv('Max_Min_Seasonal_Temp_IMD1901_to_2017.csv',usecols=['ANNUAL - MIN','ANNUAL - MAX']) 
df=pd.DataFrame(data) 
df.plot(kind='hist',y='ANNUAL - MIN',title='Annual Minimum Temperature (1901-2017)') 
plt.xlabel('Temperature') 
plt.ylabel('Frequency') 
plt.show() 