d={"name":"harshit","sub":"python","age":18}
print(d)
print(d["name"])
d["sub"]="dictonary"
print(d)
print(d.get("sub2"))
for x ,y in d.items():
    print(x,y)
for x in d.keys():
    print(x,d[x])
d["no"]=8776546567
print(d)

