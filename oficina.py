tab = int(input("Digite um número para fazer a tabuada: "))

tabuada = [1,2,3,4,5,6,7,8,9,10]

for x in tabuada:
    resultado = tab * x
    print(f"O resultado de {tab} x {x} = {resultado}.")