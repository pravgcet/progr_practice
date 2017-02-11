print "Welcome to program"
l="yes"
while l=="yes":
	print "Enter your choice"
	print "1 for Add"
	print "2 for Subtract"
	print "3 for multiply"
	print "4 to exit"
	ch=input()
	if ch==1:
		print "Enter numbers"
		a=input()
		b=input()
		print "Addition is",a+b
	print "do you want to continue (yes/no)"
	l=raw_input()
	
print "Program exiting"
