
# 🎥 Sistema de Gerenciamento de Filas de Reserva de Filmes - Estrutura de Dados

## 📚 Descrição
Projeto desenvolvido como trabalho da 2ª Avaliação (2VA) da disciplina de **Estrutura de Dados** na UEG. O sistema simula o gerenciamento de filas de reservas em uma videolocadora, onde:

- Cada **filme possui 7 filas**, uma para cada dia da semana.
- O cliente escolhe o dia da semana para retirar o filme.
- É possível **inserir clientes na fila a qualquer momento**.
- A **remoção de clientes** da fila ocorre apenas no dia escolhido, quando são contatados para confirmação da locação.
- Cada filme possui **apenas uma cópia disponível**.

## 🔧 Tecnologias
- Linguagem: **C++**
- Conceitos aplicados: Estruturas de Dados (Listas Encadeadas, Filas), Manipulação de Ponteiros e Matrizes de Estruturas.

## 🚀 Funcionalidades
- 📥 Inserção de clientes na fila de reserva de um filme e dia específico.
- 📞 Contato com o primeiro cliente da fila no dia reservado.
- ✅ Confirmação ou não da locação, com atualização da fila.
- 🗒️ Exibição do estado atual das filas.

## 📄 Estrutura das Filas
- A matriz de filas possui dimensão `[5][7]`:
  - 5 Filmes cadastrados.
  - 7 Dias da semana.

## 🎥 Lista de Filmes
1. A Volta de Quem Não Foi  
2. As Tranças da Vovó Careca  
3. Poeira em Alto Mar  
4. Os Reprovados em Estrutura de Dados  
5. A Terra Plana  

## 📅 Dias da Semana
- 0 - Segunda  
- 1 - Terça  
- 2 - Quarta  
- 3 - Quinta  
- 4 - Sexta  
- 5 - Sábado  
- 6 - Domingo  

## 💻 Como Executar
1. Clone o repositório:
```bash
git clone https://github.com/seu-usuario/seu-repositorio.git
```
2. Compile o código:
```bash
g++ -o locadora main.cpp
```
3. Execute:
```bash
./locadora
```

## 🏗️ Melhorias Futuras
- Implementação de um menu mais intuitivo.
- Validação de entradas para evitar erros.
- Interface gráfica simples para facilitar o uso.

## 👨‍💻 Autor
- William - [Seu GitHub](https://github.com/seu-usuario)
