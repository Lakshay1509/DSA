def fib(x):
    if x==0 or x==1:
        return 1
    else:
        a= fib(x-1) + fib(x-2)
        print(fib(x-1),"+",fib(x-2))
        return a
    
print(fib(4))

