print "Variable access infrmation (gives names of only global variables)"
cast=open('cast.s','r')
log=open('log.out','r')
obj=open('objdump.s','r')
optemp=open('optemp.s','r')
objtemp=open('objtemp.s','r')
pintemp=open('pintemp.out','r')
n=0
stcp=0
scast=cast.readline()
slog=log.readline()
sobj=obj.readline()
#print scast
#print slog
#print sobj

mnn=0
##############code to copy file
for line in cast:
	#print n
	if (line.find('main:')!=-1):
		#print "found main at line ",n
		stcp=1
	
	if(stcp==1):
		if(line.find('mov')!=-1):
			mnn=mnn+1
			#optemp.write(line)
	if(line.find('ret')!=-1):
		break
stcp=0
n=0
for line in obj:
	n=n+1
	
	if (line.find('<main>')!=-1):
		#print "found main at line ",n
		stcp=1
	
	if(stcp==1):
		#if(line.find('mov')!=-1):
			#print 'copying line no. ',n
			#objtemp.write(line)
		if(line.find('ret')!=-1):
			break

###############


m1=0
m2=0

addrvar={}


val=0
n=0

for line in objtemp:
	key=line[1:8]
	ind=0
	n=n+1
	if(n==2):
		first=key
	ind=line.index(",")
	end=line.index("\n")
	if(line[ind+1]=='%'):
		if(line[ind-8]=='x'):
			val=line[ind-7:ind]
		elif(line[ind-9]=='x'):
			val=line[ind-8:ind]
	else:
		val=line[ind+3:end]
	last=key
	addrvar.update([(key,val)])




				
	#print" Moves in optemp are : ",m1


#print addrvar
##########################################
'''
print "First address is ",first

print "last address is ",last
copy=0

for line in log:
	if(line.find(first)!=-1):
		print "found"
		copy=1
	if(copy==1):
		print line
		pintemp.write(line)
	if(line.find(last)!=-1):
		break
###################################
'''

addrcnt={}
nwaddrcnt={}
nwaddrvar={}

valct=0
for key in addrvar.keys():
	valct=0
	pintemp.seek(0,0)
	for line in pintemp:
		if(line.find(key)!=-1):
			valct=valct+1
	addrcnt.update([(key,valct)])


#print addrcnt 

for key in addrcnt:
	if(addrcnt[key]!=0):
		nwaddrcnt.update([(key,addrcnt[key])])

#print nwaddrcnt #contains address and its occurrence

for key in nwaddrcnt:
	nwaddrvar.update([(key,addrvar[key])])

#print nwaddrvar	#contains address and variable ref (only meaningful)

objtemp.seek(0,0)
optemp.seek(0,0)
pintemp.seek(0,0)
addrnam={}
l1=optemp.readline()
l2=objtemp.readline()
while(mnn>1):
	l1=optemp.readline()
	l2=objtemp.readline()
	ind1=l1.find(',')
	ind2=l2.find(',')
	end1=l1.find('\n')
	end2=l2.find('\n')
	vp1=l1.find('v')
	vp2=l2.find('v')
	if(l2[ind2+1]=='%'):
		if(l2[ind2-8]=='x'):
			key=l2[ind2-7:ind2]
		elif(l2[ind2-9]=='x'):
			key=l2[ind2-8:ind2]
	else:
		key=l2[ind2+3:end2]	
	if(l1[ind1+2]=='%'):
		val=l1[vp1+3:ind1]
	else:
		val=l1[ind1+2:end1]
	mnn=mnn-1
	addrnam.update([(key,val)])

#print addrnam

sfinal={}
for key in addrnam.keys():
	sfinal.update([(key,0)])
	


#print sfinal


for adr in nwaddrvar.keys():
	sfinal[addrvar[adr]]=sfinal[addrvar[adr]]+nwaddrcnt[adr]


#print sfinal
final={}
#Final counting
for each in addrnam.keys():
	final.update([(addrnam[each],sfinal[each])])

	
print final


##############################


cast.close()
log.close()
obj.close()
optemp.close()
objtemp.close()
pintemp.close()
