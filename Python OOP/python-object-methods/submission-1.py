class Pet:
    def __init__(self, name: str):
        self.name = name
        self.hunger = 5

    def feed(self):
        # TODO: Implement this method
        # It should decrease the pet's hunger by 1
        # and print a message about feeding the pet
        self.hunger=self.hunger-1

# Create a pet
my_pet = Pet("Fluffy")

# TODO: Feed the pet three times
time=3
while(time):
    my_pet.feed()
    print("Fluffy has been fed.")
    print(f"Fluffy's hunger level: {my_pet.hunger}")
    time-=1
