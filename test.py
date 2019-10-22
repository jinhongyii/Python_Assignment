import filecmp
import os
if os.path.exists("temp"):
    os.system("rm -rf ./temp")
os.makedirs("temp")
for i in range(50):
    print("./python_interpreter "+str(i)+" > temp/test"+str(i)+".out")
    os.system("./python_interpreter "+str(i)+" > temp/test"+str(i)+".out")
    if not filecmp.cmp("testData/test"+str(i)+".out","temp/test"+str(i)+".out"):
        print(i,"wrong")