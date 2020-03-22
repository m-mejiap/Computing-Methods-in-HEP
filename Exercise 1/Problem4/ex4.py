import subprocess
import re

a = subprocess.check_output(["ls"], cwd="a",shell=True).decode("utf8")
asplit = a.split("\n")
asplit.remove("")
files = []
for i in asplit:
    files.append(subprocess.check_output(["ls"], cwd="a/"+i+"/c",shell=True).decode("utf8"))
    
split = []
for i in files:
    split.append(i.split("\n"))
final = []
for i in split:
    i.remove("")
    final.extend(i)
    
count = 0
for i in final:
    check = re.search(r'root$', i)
    if check:
        print(i)
        count += 1

print("number of root files found = ", count)