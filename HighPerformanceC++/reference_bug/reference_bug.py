class Bagel:
    def __init__(self, toppings):
        self.toppings = toppings

t = ["salz"]
a = Bagel(t)
b = Bagel(t)

t.append("pfeffer")

print("a:", a.toppings)  # ['salz', 'pfeffer'] 😳
print("b:", b.toppings)  # ['salz', 'pfeffer'] 😳
