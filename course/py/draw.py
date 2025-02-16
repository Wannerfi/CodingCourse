# coding=utf-8

# 别名
# matlib库 https://matplotlib.org/stable/gallery/index.html
import matplotlib.pyplot as plt
import numpy as np # 矩阵库

if __name__ == "__main__":
    x = np.arange(-100, 100) # 生成左闭右开的数组
    y = x ** 2 # 数组运算，具体查看 numpy 库的使用方法
    
    # 绘图
    plt.plot(x, y)
    # 显示图
    plt.show()