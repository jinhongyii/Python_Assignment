import filecmp
import os
if os.path.exists("temp"):
    os.system("rm -rf ./temp")
os.makedirs("temp")
for i in range(13):
    inst ="./python_interpreter "+str(i)+" > temp/test"+str(i)+".out"
    print(inst)
    os.system(inst)
    if not filecmp.cmp("testData/test"+str(i)+".out","temp/test"+str(i)+".out"):
        f = open("testData/test" + str(i) + ".in", mode='r')
        title = f.readline()[1:]
        print("test", i, "wrong:", title)
