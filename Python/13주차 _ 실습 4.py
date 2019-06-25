class Employee():
    def __init__(self, name, money):
        self.name = name
        self.money = money

    def E_desc (self):
        return "이름 :"+str(self.name)+\
               "월급:"+self.monet

class Manager(Employee):
    def __init__ (self, name, money, bonus):
        super().__init__(name, money)
        self.bonus = bonus

    def M_desc (self):
        return "이름 :"+str(self.name)+\
               "월급:"+str(self.money)+\
               "보너스:"+str(self.bonus)

def main():
    person = Manager("김철수", 2000000, 1000000)
    print(person.M_desc())

main()
