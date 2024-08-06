for x in query:
    pyautogui.typewrite(str(x))
    pyautogui.hotkey('enter')
    sleep(0.6)