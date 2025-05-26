pasteis = ["Carne", "Frango", "Queijo", "Brócolis", "Chocolate"]
precoPasteis = [9.99, 7.99, 10.90, 8.99, 12.99]

pizzas = ["Queijo", "Calabresa", "Frango", "Portuguesa", "Doce"]
precoPizzas = [15.90, 16.90, 12.90, 14.90, 19.90]

bebida = ["Cola-Cola", "Pepsi", "Guaraná", "Sprite", "Fanta"]
precoBebidas = [9.99, 7.99, 6.99, 7.99, 6.99]

total_pedido = 0.0

print("============================")
print("Bem-vindo ao nosso cardápio!")
print("============================")

int(input("Escolha seu pastel: "))
for i in range(5):
    print(f"{i+1} - {pasteis[i]} (R$ {precoPasteis[i]:.2f})")
escolha_pastel_str = input("Sua opção de pastel: ")    
