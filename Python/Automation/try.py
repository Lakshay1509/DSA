import pyautogui
from pyautogui import click
from time import sleep


# Click on the specified coordinates

query =[12, 20, 15, 15, 20, 18, 15, 15, 20, 12, 12, 18, 17, 19, 20, 19, 20, 12, 20, 15, 15, 12, 20, 20, 18, 17, 14, 18, 12, 15, 12, 17]

t = 1

click(845, 578)

while t <= 32:

    # Check if the command is not empty before typing
    for x in query:
        pyautogui.typewrite(str(x))
        pyautogui.hotkey('enter')
        sleep(1)
        t += 1

        

