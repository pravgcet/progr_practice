print "Welcome to Calculator program"
def add(a,b):
	return a+b
def sub(a,b):
	if a>b:
		return a-b
	else :
		return b-a
def mul(a,b):
	return a*b
def div(a,b):
	return a/b
def exp(a,b):
	return a**b
l="yes"
while l=="yes":
	print "Choose what to do"
	print "1 for Addition"
	print "2 for Subtraction"
	print "3 for Multiplication"
	print "4 for Division"
	print "5 for power value"
	i=input("Your choice :" )
	if i==1:
		print add(input("Add this :" ),input("to this"))
	if i==2:
		print sub(input("Enter numbers"),input())
	if i==3:
		print mul(input("Enter numbers"),input())
	if i==4:
		print div(input("Enter numbers"),input())
	if i==5:
		print exp(input(),input(" to the power"))
	l=raw_input("Do you want to continue (yes/no)")
print "Thanks for using calculator"
