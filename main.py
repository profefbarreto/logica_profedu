class Pessoa:
    def __init__(self):
        self.nome = ""
        self.idade = 0
    
    def coletar_dados_pessoa(self):
        self.nome = input("Digite o nome da pessoa: ")
        self.idade = int(input("Digite a idade da pessoa: "))
        
    def apresentar(self):
        prinf(f"Olá, meu nome é {self.nome} e eu tenho {self.idade} anos.")
    
class Funcionario(Pessoa):
    
    def __init__(self):
        super().__init__()
        self.setor = ""
    
    def coletar_dados_funcionario(self):
        self.setor = input("Digite o setor: ")
    
    def coletar_todos_os_dados(self):
        print("--- Coletando dados da Pessoa ---")
        super().coletar_dados_pessoa()
        print("\n--- Coletando dados do Funcionário ---")
        self.coletar_dados_funcionario()
        
    def exibir_informacoes_completas(self):
        print(f"Nome: {self.nome}.")
        print(f"Idade: {self.idade} anos.")
        print(f"Setor: {self.setor}.")    
        
    def apresentar(self):
        super().apresentar()
        print(f"Eu trabalho no setor de {self.setor}.")
        
meu_funcionario = Funcionario()
meu_funcionario.coletar_dados_funcionario()
meu_funcionario.exibir_informacoes_completas()