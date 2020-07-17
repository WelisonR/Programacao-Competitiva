# Combinação com Repetição

Fórmula para calcular combinação com repetição:

*   Quantidade de combinações = $^{r}C_{n+r-1}$.

# Intuição

Suponha que haja 4 tipos de refrigerantes e desejamos pegar, com possível repetição, 3 refrigerantes. Quantas são as combinações possíveis?

*   Sejam os tipos de refrigerantes: `1 2 3 4`
*   Se eu escolho o refrigerante do tipo 1, terei a possibilidade de escolhê-lo novamente, isto é, $\not 1 ~ 2 ~ 3 ~ 4 ~ 1$.
*   Caso escolha o refrigerante do tipo 1 três vezes: $\not 1 ~ \not 1 ~ \not 1 ~ 2 ~ 3 ~ 4$
*   Logo, o problema resume-se a $^{r}C_{n+r-1} = ~ ^{3}C_{4+3-1} = 20$.

# Resolução com Equação

## Exemplo 1

Suponha a equação $x_1 + x_2 + ... + x_n = r$, dado x1 >= 0, x2 >= 0, x3 >= 0. Quantas são as soluções inteiras não-negativas?

*   Quantas maneiras podemos colocar 10 bolas idênticas em 6 cestas distintas?
*   Um exemplo válido é: ` . | .. | . | .. | .. | ..`
*   haverá $n-1 = 2$ barras e $r$ recursos a alocar.
*   Logo, $^{r}C_{n+r-1} = ~ ^{10}C_{10+6-1} = 3003$.

# Exemplo 2

Suponha a equação $x_1 + x_2 + x_3 = 9$, dado x1 >= 0, x2 >= 0, x3 > 1. Quantas são as soluções inteiras não-negativas?

*   $x_3 > 1$, isto é, $x_3 >= 2$.
*   Caso alocar valor 2 em um dos baldes, o problema será reduzido para $x_1 + x_2 + x_3 = 7$, dado x1 >= 0, x2 >= 0, x3 >= 0.
*   Logo, $^{r}C_{n+r-1} = ~ ^{7}C_{7+3-1} = 36$.

