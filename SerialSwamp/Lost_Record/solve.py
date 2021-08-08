import os
from PCM2Wav import *
FILENAME="blyat.csv"
out=PCM2Wav(PCM2Wav.saleae.I2S, FILENAME, "example.wav")

'''
data=""
with open(FILENAME,'r') as fp:
    data=fp.read().split('\n')
print(data[0])
dat_to_parse=list()
for i in range(1,data.__len__()-1):
    #print(data[i].split(',')[2])
    dat_to_parse.append(data[i].split(',')[2])
#
#print(dat_to_parse)
for X in dat_to_parse:
    #print(bin( int(X,16) ))
    k=bin( int(X,16) ).split("0b")[1]
    if(k.__len__()<16):
        k=(16-k.__len__())*"0"+k
'''