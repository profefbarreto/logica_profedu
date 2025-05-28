numero_dia = int(input("Digite um valor para número da semana: "))

def dia_da_semana(numero_dia):
    if numero_dia == 1:
        return "Domingo"
    elif numero_dia == 2:
        return "Segunda-feira"
    elif numero_dia == 3:
        return "Terça-feira"
    elif numero_dia == 4:
        return "Quarta-feira"
    elif numero_dia == 5:
        return "Quinta-feira"
    elif numero_dia == 6:
        return "Sexta-feira"
    elif numero_dia == 7:
        return "Sábado"
    else:
        return "Número inválido!"
    

print(f"Você escolheu {dia_da_semana(numero_dia)}!")