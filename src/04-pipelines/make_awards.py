#!/usr/bin/env python3
import random

with open("/usa/roosen/roster.txt") as fin:
    slist=[[x.strip(),0] for x in fin]

count=0
with open("awards","w") as awards:
    while len(slist):
        idx = random.randint(0,len(slist)-1)
        awards.write(str(random.randint(1,10000))+" award: "+slist[idx][0]+"\n")
        if slist[idx][1]==2:
            del slist[idx]
        else:
            slist[idx][1]+=1
        count+=1
        print(len(slist),count)
