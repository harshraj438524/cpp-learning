def calc_profit_loss(actualcost,salecost):
    if(actualcost>salecost):
       loss=actualcost-salecost
       return 'total loss amount=:',loss
    elif(actualcost<salecost):
       profit=salecost-actualcost
       return  "total profit:",profit
    else:
       return "no profit no loss!!!"
print(calc_profit_loss(int(input()),int(input())))

