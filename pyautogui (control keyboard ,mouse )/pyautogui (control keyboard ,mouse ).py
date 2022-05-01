import pyautogui as pg
import time
import random
time.sleep(1)
animal=('dog','monkey','buffalo','cow','elephant')
for i in range(10):
    a = random.choice(animal)
    pg.write("you are a " + a)
    pg.press('enter')


