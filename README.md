Super Trunfo de Cidades - Cadastro de Cartas
📝 Descrição do Projeto
Este projeto é a primeira etapa de um jogo de Super Trunfo baseado em cidades brasileiras. O programa permite cadastrar e exibir informações de duas cartas do jogo, contendo dados como estado, código, nome da cidade, população, área, PIB e pontos turísticos.

🎯 Objetivo
Praticar os conceitos básicos de programação em C, incluindo:

Declaração de variáveis

Leitura de entrada do usuário

Armazenamento de dados

Exibição formatada de informações

⚙️ Funcionalidades
Cadastro de 2 cartas de cidades

Armazenamento das seguintes informações por carta:

Estado (A-H)

Código da carta (ex: A01)

Nome da cidade

População

Área em km²

PIB

Número de pontos turísticos

Exibição clara e organizada dos dados cadastrados

📋 Estrutura do Código
O programa (super_trunfo.c) consiste em:

Declaração de variáveis para duas cartas

Leitura dos dados via scanf()

Exibição formatada com printf()

🛠️ Como Compilar e Executar
Certifique-se de ter o GCC instalado

Compile o programa com:

bash
Copy
gcc super_trunfo.c -o super_trunfo
Execute o programa:

bash
Copy
./super_trunfo
📌 Exemplo de Uso
Copy
=== Cadastro da Carta 1 ===
Estado (A-H): A
Código (ex: A01): A01
Nome da cidade: São Paulo
População: 12325000
Área (km²): 1521.11
PIB: 699.28
Pontos turísticos: 50

=== Carta 1 Cadastrada ===
Estado: A
Código: A01
Nome: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões
Pontos Turísticos: 50
