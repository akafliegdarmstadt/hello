p = "00000000 00000000\
     00000000 00000000\
     00000000 00011000\
     00100001 11110000\
     11100100 01111000\
     00101000 11001000\
     00011000 10000100\
     00001111 11111111\
     00001111 11111111\
     00001000 00001000\
     00000100 00011000\
     00000011 11100000\
     00000000 00000000\
     00000000 00000000\
     00000000 00000000"

def conv(x):
    if x == "1":
        return "*"
    else:
        return " "

pic = list(map(conv, p))
print(pic)
