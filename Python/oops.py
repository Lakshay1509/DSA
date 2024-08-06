# # class Cars:

# #     mode ="petrol,V6"

# #     #parametrized constructor
# #     def __init__(self,brand):
# #         self.brand=brand

# #     def noEV(self):
# #         print("No EV")
        

# # car1 = Cars("Mercedes")
# # print(car1.brand,car1.mode)
# # car1.noEV()

# class student:

#     def __init__(self,name,marks):
#         self.name = name
#         self.marks = marks

#     def avg(self):
#         sum =0
#         for val in self.marks:
#             sum = sum+val
#         print(sum/3)

#     @staticmethod
#     def hello():
#         print("HELLO")

# s1 = student("tony",[88,78,90])
# s1.avg()
# s1.hello()


# class bank:

#     def __init__(self,acc_no,password):
#         self.acc_no=acc_no
#         self.__password=password    #add 2 double underscore to make it private

# account1 = bank(3456,"YO")
# print(account1.acc_no)





# class Car:

#     @staticmethod
#     def start():
#         print("Started...")

#     @staticmethod
#     def stop():
#         print("Stop")

# class BMW(Car):

#     def __init__(self,name):
#         self.name = name


# car1 = BMW("M6")
# print(car1.name,car1.start())



class bank:

    def __init__(self,acc,bal,dict):

        self.acc=acc
        self.bal = bal
        dict[acc]=bal

    def update(self,acc,num,dict):
        dict[acc] = dict.get(acc)+num


dict={}

ACC = bank(567,789,dict)

print(dict)

ACC.update(567,89,dict)


print(dict)


