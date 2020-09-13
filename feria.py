from math import floor

entrada = int(input("¿Cuantas monedas tienes? "))

veinte = floor(entrada/20)
residuo = entrada % 20
cinco = floor(residuo/5)
residuo = residuo % 5
uno = residuo

print("Tu feria es:","\n20c: ",veinte,"\n5c: ",cinco,"\n1c: ",uno)