# coding=utf-8

# 入口函数
if __name__ == "__main__":
    cnt = 10
    i = 0
    while i < cnt:
        i += 1
        if i == 2:
            continue # 跳过循环
        if i == 5:
            break # 跳出循环
        print(i)

    l = ["a", "b", "c"]
    for c in l:
        print(c)
    for index in range(len(l)):
        print(l[index])
    
