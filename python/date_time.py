import datetime
# to print the desirable date
print("specific date ",datetime.date(2004,3,27))
            #current date
    #to print the curent date we use "" today()"" function
print("todays date",datetime.date.today())
# for today's date or month or year just ".(what yoou want)"
print(datetime.date.today().year)
print(datetime.date.today().day)
print(datetime.date.today().month)
"""you can replace it with 
(today=date.today())  
then you dont need to print the whole code"""
#timestamp se date pta krne ke liye ham log 
# datetime module ke datetime ke fromtimestamp()ka usse krte he
d=datetime.datetime.fromtimestamp(1276478673)
print(d)
                    # date module
"""date ko string me convert jrne ke liye 2  function use krte he """
# isoformat()
# strftime()
today=datetime.date.today()
a=datetime.date.isoformat(today)        #syntax
print(a,type(a))

            ############################################
import datetime
# to print the curent date and time ;;we use 
#   now()
now=datetime.datetime.now()
print(now)
print(dir(datetime))
#########################################################################################3
#to print time
print(datetime.time())
print(datetime.time(12))
print(datetime.time(11,23))
print(datetime.time(11,23,43))
print(datetime.time(11,23,34,3545))
a=datetime.time(11,23,45)
print(a.hour)
print(a.minute)
print(a.second)
###############################################################
b=datetime.datetime(2004,3,27)
print(b)
b=datetime.datetime(2004,3,27,11,34,50,4566)
print(b)
print(b.hour)
print(b.minute)
print(b.second)
print(b.microsecond)
print(b.date())
print(b.day)
print(b.month)
print(b.year)
from datetime import datetime
now=datetime.now()
print(now.strftime("%H:%M:%S"))