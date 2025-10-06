import time, sys
needs = []
wants = []
pr1 = []
pr2 = []
p1 = []
p2 = []
def sort(a_list, l1, l2):
    l = len(a_list)
    for i in range(l):
        for j in range(0, l-i-1):
            if(a_list[j] < a_list[j+1]):
                a_list[j],a_list[j+1] = a_list[j+1],a_list[j]
                l1[j], l1[j+1] = l1[j+1], l1[j]
                l2[j], l2[j+1] = l2[j+1], l2[j]
            else:
                pass
    return ""
def calc(diff):
    sum1 = 0
    print("\n So As per The given data your Monthly Budget will be as followed :")
    print("\n :::::::::::Your Need's List::::::::::: ")
    print(" | Name |     |Priority|      |Price|   \n")
    for i in range(0, len(needs)):
        print(" ",needs[i],"\t\t", pr1[i],"\t\t", p1[i],"\n")
    print("\n\n :::::::::::Your Want's List::::::::::: ")
    print(" | Name |     |Priority|      |Price|   ")
    for j in range(0, len(wants)):
        print("\n ",wants[j],"\t\t", pr2[j],"\t\t", p2[j])
    i=0
    while(diff>0 and i<len(needs)):
        if(diff-p1[i]>0):
            diff=diff-p1[i]
            print("\nAmount left after fullfilling your ",needs[i]," need is: ",diff)
            i=i+1
        else:
            i+=1
    j=0
    while(diff>0 and j<len(wants)):
        if(diff-p2[j]>0):
            diff=diff-p2[j]
            print("\nAmount left after fullfilling your ",wants[j]," want is: ",diff)
            j=j+1
        else:
            j+=1
def need(diff):
    print("\n\n Please enter the list of your WANTS acoording to your priority")
    print("\n Don't forget to provide the price and priority value ")
    print("\n The priority will be marked on a scale of 1-10, 10 means it has the highest priority")
    size = int(input("\n\n Enter the number of needs you have = "))
    s = ""
    for i in range(1, size + 1):
        if i == 1:
            s = s + str(i) + "st "
        elif i == 2:
            s = s + str(i) + "nd "
        elif i == 3:
            s = s + str(i) + "rd "
        else:
            s = s + str(i) + "th "
        c1 = input("Enter your "+ s +"need = ")
        c2 = int(input("Enter its priority value = "))
        c3 = int(input("Enter its Price = "))
        s = ""
        needs.append(c1) 
        pr1.append(c2)
        p1.append(c3)
    
    sort(pr1, needs, p1)
    if(len(wants)==0):
        print("\n You have not entered Your List Of Wants ")
        print("\n Enter 1 to Enter The list of wants ")
        print("\n\t\t OR ")
        print("\n Enter 2 To Continue without any Wants")
        ch = int(input("\n Enter Your Choice = "))
        if(ch == 1):
            print("\n Redirecting You to Wants Section.....")
            want(diff)
        elif(ch == 2):
            calc(diff)
    else:
        print("\n You have provided all your inputs!")
        print("\n Calculating your finalized Budget")
        calc(diff)
        
    
def want(diff):
    print("\n\n Please enter the list of your WANTS acoording to your priority")
    print("\n Don't forget to provide the price and priority value ")
    print("\n The priority will be marked on a scale of 1-10, 10 means it has the highest priority")
    size = int(input("\n\n Enter the number of wants you have = "))
    s = ""
    for i in range(1, size + 1):
        if i == 1:
            s = s + str(i) + "st "
        elif i == 2:
            s = s + str(i) + "nd "
        elif i == 3:
            s = s + str(i) + "rd "
        else:
            s = s + str(i) + "th "
        c1 = input("Enter your "+ s +"need = ")
        c2 = int(input("Enter its priority value = "))
        c3 = int(input("Enter its Price = "))
        s = ""
        wants.append(c1) 
        pr2.append(c2)
        p2.append(c3)
    
    sort(pr2, wants, p2)
    if(len(needs)==0):
        print("\n You have not entered Your List Of Needs ")
        print("\n Enter 1 to Enter The list of Needs ")
        print("\n\t\t OR ")
        print("\n Enter 2 To Continue without any Needs")
        ch = int(input("\n Enter Your Choice = "))
        if(ch == 1):
            print("\n Redirecting You to Needs Section.....")
            need(diff)
        elif(ch == 2):
            calc(diff)
    else:
        print("\n You have provided all your inputs!")
        print("\n Calculating your finalized Budget")
        calc(diff)
def disp():
    s = "\n ******** Welcome to the Monthly Budget Planner ********"
    for i in s:
        print(i, end=" ")
        time.sleep(0.03)
    budget = int(input("\n\nPlease enter your Monthly budget = "))
    saving = int(input("\nPlease enter the amount you want to save = "))
    diff = budget - saving
    if(saving > budget):
        print("\nYou can't save more than your budget .... Please provide your inputs again!!! ")
        disp()
    else:      
        print("\nPress 1 To enter the list of needs ")
        print("\nPress 2 To enter the list of wants ")
        c1 = int(input("Enter your choice = "))
        if c1 == 1:
            need(diff)
        elif c1 == 2:
            want(diff)


print(disp())
