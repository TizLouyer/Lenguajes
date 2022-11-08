"""programa para para ingresar tus gustos y te recomiende un anime"""
import os

animes = {}

def check(value): 
    a="hola"
    a.isalpha()
    for letter in value: 
        if letter < 'a' or letter > 'z':
            return False
    return True

def clearConsole():
    command = 'clear'
    if os.name in ('nt', 'dos'):  # If Machine is running on Windows, use cls
        command = 'cls'
    os.system(command)
    
def valorar():
    ctrl = 0
    while ctrl == 0:
        valoracion = float(input("Ingrese la valoracion: "))
        if valoracion > 5 or valoracion < 0:
            print("Has ingresado incorrectamente")
            ctrl = 0
        else:
            ctrl +=1
    return valoracion

def main():
    x = 0
    while x == 0:
        ctrl = 0
        clearConsole()
        
        for key in animes:
            print(f'{key} tiene una puntuacion de:{animes[key]}')
        
        chequeo_nombre = False
        
        while chequeo_nombre == False:
            anime = input("Ingrese el anime a valorar: ")
            anime = anime.lower()
            chequeo_nombre = anime.isalpha()
        
        for key in animes:
            if key == anime:
                ctrl +=1
                i = valorar()
                if animes[anime] == 0: 
                    animes[anime] = i
                else:
                    animes[anime] = (animes[anime] + i)/2   
            
            if ctrl != 0:
                break
        
        if ctrl == 0:
            i = valorar()
            animes[anime] = i
        
        x = int(input("Presione 0 si quiere ingresar otra valoracion") )
    clearConsole()
    for key in animes:
        print(f'{key} tiene una puntuación de:{animes[key]}')

main()

