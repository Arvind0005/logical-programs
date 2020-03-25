import random
#user=int(input("0-கத்தரிக்கோல் or 1-காகிதம் or 2-கல்?"))
n=3
k=1
x=0
y=0
while k<=n:
    list0=["கத்தரிக்கோல்","காகிதம்","கல்"]
    user = int(input("தேர்வு செய்யவும்: \n\t\t\t\t0-கத்தரிக்கோல் அல்லது 1-காகிதம் அல்லது 2-கல்?"))
    print("நீ:",list0[user])
    computer=random.choice(list0)
    print("கணினி:",computer)
    for i in range(0,3):
       # print(i)
        if(list0[i]==computer):
            computer=i
    #print(user,computer)
    if(computer==user+1):
        print("நீ வெற்றி பெற்றாய்\n")
        x=x+1
    elif(computer==user+2):
        print("நீங்கள் தோற்றீர்கள்\n")
        y=y+1
    elif(computer==user):
        print("சமண்\n")
    elif(computer==user-1):
        print("நீங்கள் தோற்றீர்கள்\n")
        y=y+1
    k=k+1
print("\nஉங்களுடையத புள்ளிகள்:",x)
print("கணினி புள்ளிகள்",y)
if x>y:
    print("\nமொத்தம் நீ" ,x, "புள்ளிகள் கிடைத்து வெற்றி பெற்றாய்\n")
elif x==y:
    print("இறுதியில் நீ 1.5 கணினி புள்ளிகள் கிடைத்து 1.5 போட்டி சமண்-இல் முடிந்தது")
else:
    print("மொத்தம் கணினி" ,y, "புள்ளிகள் கிடைத்து வெற்றி பெற்றது\n")
