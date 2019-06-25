class BankAccount:
    def __init__(self):
        self.__balance = 0

    def withdraw(self, amount):
        self.__balance -= amount
        print("통장에서",amount, "가 출금되었음")
        return self.__balance

a = BankAccount()
a.withdraw(10)
