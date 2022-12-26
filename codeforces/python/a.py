a='Aakash'
print('1) ','A')
print("2)  Aaka")
print('3) ',a)
b=31
c=4.0
print('4) ',type(a))
print('5) ',type(b))
print('6) ',type(c))
d=388
e=str(d)
print('7) ',e)
print('8) ',type(e))
f=int(e)
print('9) ',type(f))
print('10) ',float(d))
''' python always take string as an input, so if you need integer ,you need to convert it to integer by using int (a)'''
g=input("Enter the number")
print("11) ",g)
print("12) ",type(g))
'''error ->print("13) ",g+5)'''
h=int(g)
print("14) ",type(h))
print("15) ", h+5)
num1=input("Enter the first number: ")
num1=int(num1)
num2=input("Enter the second number: ")
num2=int(num2)
sum=num1+num2
print("16)  a+b =",sum)
rem=sum%4
print("17)  The remainder when sum is divided by 4 is : ", rem)

avg=(a+b)/2
print("19) Average of num1 and num2 is: ",avg)

