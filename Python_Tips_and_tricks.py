# #zip function 
# #suppose you have 2 list to iterate at the same time the you can take help of the zip function

# a = ["Shivam","Amitesh","Sudip","Nishant","Utsav","Sunit"]
# b = ["Machine Learning","CV and NLP","Web Dev","Web_Dev","App Dev","Photography"]

# for a,b in zip(a,b):
# 	print(f"{a} likes {b}")


# #enumerate function , now you want to take care of the indexes 
# #it can be done very easily with the help of enumerate function
# a = ["Shivam","Amitesh","Sudip","Nishant","Utsav","Sunit"]

# for index,a in enumerate(a):
# 	print(f"{index} {a}")


#context manager - manage resources 
#whenever you are managing file manually the you should use context manager . It will handle closing of the file for you
#The with statement in Python is used for resource management and exception handling.For example, the statement ensures that the 
#file stream process doesn't block other processes if an exception is raised, but terminates properly.

# with open("filename","mode") as out:
# 	print(out)
	#now you dont have to close the file it will be done automatically 


# #python take care of undersocre as special character 

# a = 90_000_000
# b = 50_000
# print(a+b)

# #ignore any variable while unpacking  -- you underscore	

# a,b, _ = (12,88,50)
# print(a)
# print(b)

#if you unpack more or less than the element exist in the container then you will get error.
#but for unpacking less you can use astrick  - all the remaining elements of the container will be assign to the astrick varibale

# a,b,*c = (1,2,3,4,5,6,7,8,9)
# print(a)
# print(b)
# print(c)  

 #To accept the passwords without being visible -- python has inbuilt library named getpass
 #Note sublime text has a disadvantage that it cannot take input , so you have to run with terminal
from getpass import getpass

a = input("Username: ")
b = getpass("Password: ")

print('Logging IN...')

#to use this file in cmd just follow the directory where the file exist then do python filename
#python -m module name -- this means it is running a module you can know by -m 