#test.py

"""
This will print some gibberish about Mungo, using way more class structure than necessary.
"""

class Mungo(object):

    def __init__(self,name='Mungo',noun='strawberries',num=5):
        self.name=name
        self.noun=noun
        self.num=num
        #not actually sure what it means to not have an init fcn
        #this is not necessary
        #can discuss

    def Introduce(self,name):
        print 'My name is %s'%(name)
    
    def Enjoy(self,noun):
        print 'I enjoy %s'%(noun)
    
    def Number(self,num):
        print 'Your number was %u'%(num)

class Bongo(Mungo):
    
    def Hate(self,enemy):
        print 'I hate %s'%(enemy)

if __name__=="__main__":
    print '!!!Hello World eeee!!!'  #prints !!!Hello World eeee!!!
    lulu = Mungo()
    lulu.Introduce('Mungo')
    lulu.Enjoy('strawberries')
    lulu.Enjoy('weasels')
    lulu.Number(5)

    tutu = Bongo()
    tutu.Introduce('Bongo')
    tutu.Enjoy('blueberries')
    tutu.Number(42)
    tutu.Hate('Mungo')
