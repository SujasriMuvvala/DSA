# 🍫 Chocolate Chart using Matplotlib
# Purpose: Visualize how much I love each chocolate using a simple bar chart

import matplotlib.pyplot as plt

# Chocolate names and how much you love them 
chocolates = ['Dairy Milk', 'KitKat', 'Perk', '5 Star']
love = [10, 8, 6, 7]

# Create a bar chart
plt.bar(chocolates, love, color='chocolate')

# Add labels and title
plt.xlabel("Chocolate 🍫")
plt.ylabel("Favourite Level ")
plt.title("My Favourite Chocolates")

# Show chart
plt.show()
