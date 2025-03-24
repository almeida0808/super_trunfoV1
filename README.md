# Super Trunfo de Países - Cadastro de Cartas

Este projeto é a primeira etapa do desenvolvimento do jogo Super Trunfo de Países, focando na criação de um sistema para cadastrar cartas com informações sobre cidades.

## Descrição

O programa permite ao usuário cadastrar duas cartas do jogo Super Trunfo, cada uma contendo informações detalhadas sobre uma cidade. Após o cadastro, o programa exibe os dados das cartas de forma organizada.

## Funcionalidades

- Cadastro de duas cartas do Super Trunfo
- Armazenamento das seguintes informações por carta:
  - Estado (A-H)
  - Código da carta (ex: A01)
  - Nome da cidade
  - População
  - Área em km²
  - PIB
  - Número de pontos turísticos
- Exibição clara e formatada dos dados cadastrados

## Como Usar

1. Compile o programa:
   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```

2. Execute o programa:
   ```bash
   ./super_trunfo
   ```

3. Siga as instruções no terminal para inserir os dados das duas cartas.

4. O programa exibirá as informações cadastradas em formato organizado.

## Requisitos

- Compilador C (como gcc)
- Sistema operacional compatível

## Estrutura do Código

O programa consiste em:
1. Declaração de variáveis para armazenar os dados das cartas
2. Leitura dos dados de entrada do usuário
3. Exibição formatada dos dados cadastrados

## Exemplo de Saída

```
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
```

## Próximos Passos

Este é o primeiro nível do projeto. Nas próximas etapas serão adicionadas:
- Lógica de comparação entre cartas
- Sistema de pontuação
- Mais funcionalidades do jogo Super Trunfo

## Contribuição

Este projeto foi desenvolvido como parte de um desafio de programação. Contribuições são bem-vindas!
