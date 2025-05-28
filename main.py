class Pessoa:
    def __init__(self):
        self.nome = ""
        
    def coletar_nome_pessoa(self):
        self.nome = input("Digite um nome: ")
        
    def apresentar_pessoa(self):
        print(f"Seja bem-vindo {self.nome}!")
        
class Aluno(Pessoa):
    def __init__(self):
        super().__init__()
        self.curso = ""
        
    def coletar_dados_aluno(self):
        super().coletar_nome_pessoa()
        self.curso = input("Digite o nome do curso: ")
        
    def apresentar_aluno(self):
        super().apresentar_pessoa()
        print(f"Espero que você goste do curso de {self.curso}.")
        
a = Aluno()
a.coletar_dados_aluno()
a.apresentar_aluno()