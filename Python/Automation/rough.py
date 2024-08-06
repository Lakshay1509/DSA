import pyautogui
from pyautogui import click
from time import sleep


# Click on the specified coordinates

t =1
while t<=84:
    pyautogui.moveTo(719,445);
    pyautogui.click(button='right')
    sleep(0.5)
    pyautogui.moveTo(x=918,y=512)
    sleep(0.5)
    pyautogui.click()
    sleep(0.5)
    pyautogui.click()

    sleep(0.5)
    
    pyautogui.press('enter')
    sleep(1)

    t=t+1



